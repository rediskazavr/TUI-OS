#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "program.h"

void calc(){
    system("./bin/calc.emu");
}

void grphx(){
    system("./bin/grphx.emu");
}