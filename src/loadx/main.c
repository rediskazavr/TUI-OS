/*
 *    ,--,                                                                 
,---.'|        ,----..                                                  
|   | :       /   /   \      ,---,            ,---,      ,--,     ,--,  
:   : |      /   .     :    '  .' \         .'  .' `\    |'. \   / .`|  
|   ' :     .   /   ;.  \  /  ;    '.     ,---.'     \   ; \ `\ /' / ;  
;   ; '    .   ;   /  ` ; :  :       \    |   |  .`\  |  `. \  /  / .'  
'   | |__  ;   |  ; \ ; | :  |   /\   \   :   : |  '  |   \  \/  / ./   
|   | :.'| |   :  | ; | ' |  :  ' ;.   :  |   ' '  ;  :    \  \.'  /    
'   :    ; .   |  ' ' ' : |  |  ;/  \   \ '   | ;  .  |     \  ;  ;     
|   |  ./  '   ;  \; /  | '  :  | \  \ ,' |   | :  |  '    / \  \  \
;   : ;     \   \  ',  /  |  |  '  '--'   '   : | /  ;    ;  /\  \  \
|   ,/       ;   :    /   |  :  :         |   | '` ,/   ./__;  \  ;  \
'---'         \   \ .'    |  | ,'         ;   :  .'     |   : / \  \  ; 
               `---`      `--''           |   ,.'       ;   |/   \  ' | 
                                          '---'         `---'     `--`  

Program for start the kernelx.
Copyleft 2025. TUI-OS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define KERNELX_FILE "./kernelx"

int file_exists(const char* filename) {
    struct stat buffer;
    return (stat(filename, &buffer) == 0);
}

void print_colored(const char *message, const char *color_code) {
    printf("%s%s%s\n", color_code, message, "\033[0m");
}

int main() {

    int delay = 1000000;
    

    //TODO: The line "Checking Files" is not displayed correctly
    const char *messages[] = {"a loadx", "github.com/rediskazavr/TUI-OS", "loadx=ver:0.0.1", "Checking files"};
    const char *colors[] = {"\033[92", "\033[93m", "\033[32m", "\033[93"};
    
    for (int i = 0; i < 4; ++i) {
        print_colored(messages[i], colors[i]);
        usleep(delay);
    }
    
    if (file_exists(KERNELX_FILE)) {
        
        system("./kernelx");
    } else {
      
        print_colored("Sys-Error $!0.1 - not found kernelx", "\033[31m");
    }
    
    return 0;
}
