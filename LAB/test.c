#include <stdio.h>
#include <string.h>

#define N 10

int main() {
	char destination[N] = "Hello";
	char source[] = " World!";
	strcat(destination, source);
	strcat(destination, source);
	strcat(destination, source);
	strcat(destination, source);
	printf("%s\n", destination);
	return 0;
}
