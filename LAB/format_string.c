#include <stdio.h>

int main(void) {
    char buffer[128];

    printf("Please insert a string: ");
    /* no buffer overflow! */
    fgets(buffer, sizeof(buffer), stdin);
    printf(buffer);

    return 0;
}

