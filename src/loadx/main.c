/*                                                                 
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

#define KERNELX_FILE "./kernelx.emu"
#define GRPHX_FILE "./bin/grphx.emu"

int file_exists(const char* filename1, const char* filename2) {
    struct stat buffer1, buffer2;
    return (stat(filename1, &buffer1) == 0 && stat(filename2, &buffer2) == 0);
}

void print_colored(const char *message, const char *color_code) {
    printf("%s%s%s\n", color_code, message, "\033[0m");
}

int main() {

    int delay = 1000000;
    
    const char *messages[] = {"a loadx", "github.com/rediskazavr/TUI-OS", "loadx=ver:0.0.1"};
    const char *colors[] = {"\033[92", "\033[93m", "\033[32m", "\033[93"};
    
    for (int i = 0; i < 3; ++i) {
        print_colored(messages[i], colors[i]);
        usleep(delay);
    }
    
    if (file_exists(KERNELX_FILE, GRPHX_FILE)) {
        printf("\033[32mSuccess! Loading the kernel\033[0m\n");
        system("./kernelx");
    } else {
      
        print_colored("Sys-Error $!0.1 - Error loading emulator. check for files", "\033[31m");
    }
    
    return 0;
}
