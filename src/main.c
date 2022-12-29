#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("argc: %d\n", argc);

    if (argc >= 1) {
        printf("argv[0]: %s\n", argv[0]);
    }

    printf("Salt\n");

    return 0;
}
