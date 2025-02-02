#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s operation number_1 number_2\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[2]); // Convert first argument to integer
    int b = atoi(argv[3]); // Convert second argument to integer

    char op = argv[1][0]; // Operation (first character of the second argument)

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: division by zero!\n");
                return 1;
            }
            printf("%d / %d = %d\n", a, b, a / b);
            break;
        default:
            printf("Unknown operation '%c'\n", op);
            return 1;
    }

    return 0;
}
