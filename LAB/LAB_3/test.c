#include <stdio.h>

int main(void) {
    char buffer[128];
    int segreto = 42;

    printf("Insert a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf(buffer);

    //printf("Il segreto è: %d\n", segreto);

    return 0;
}

