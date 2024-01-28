#include <stdio.h>

void func(int a, int b, int c) {
	int response = 0;
	char buffer[128];

	gets(buffer);
	if(response == 42) {
		printf("This is the answer!\n");
	} else {
		printf("Wrong answer!\n");
	}
	return;
}

int main() {
	printf("Insert your answer: ");
	func(1, 2, 3);
}
