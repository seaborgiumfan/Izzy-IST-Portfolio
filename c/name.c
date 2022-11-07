#include <stdio.h>

int main() {
	char name[30];
	printf("Enter the name of your character: ");
	scanf("%s", &name);
	printf("Your character's name is %s", name);
	return 0;
}

