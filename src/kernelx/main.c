#include <stdio.h>
#include <string.h>
#include "exit.h"
#include "clear.h"
#include "sys.h"
#include "program.h"

void execute_command(char *command) {
    if (strcmp(command, "#exit") == 0) {
        exit_program();
    } else if (strcmp(command, "#clear") == 0) {
        clear(); 
    } else if(strcmp(command, "#sys") == 0){
        sys();
    } else if(strcmp(command, "#calc") == 0){
        calc();
    } else if(strcmp(command, "#grphx") == 0){
        grphx();
    }else {
        printf("Command not found: %s\n", command);
    }
}

int main() {
    char input[100];

    while (1) {
        printf("emu.root: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        execute_command(input);
    }

    return 0;
}
