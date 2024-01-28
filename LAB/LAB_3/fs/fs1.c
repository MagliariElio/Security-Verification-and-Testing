#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[128];
    char PIN[128];
    int value= 3; 


    strcpy(PIN,"AAAAAAABAAACAAADAAAA");

    printf("Insert a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("%x\n",buffer);
    printf("buf=%p, pin=%p\n",buffer,PIN);
    printf(buffer);


    return 0;
}
