#include <stdio.h>
#include <conio.h>

char xstrcpyx (char str1[50], char str2[50]){
	int c = 0;
	while (str1[c] != '\0') {
		str2[c] = str1[c];c++;
	}
	str2[c] = '\0';
}

void main() {
	char str1[50], str2[50];
	printf("Input a string to copy: ");
	gets(str1);
	xstrcpyx(str1, str2);
	printf("The first string is: %s\n", str1);
	printf("After copying, the second string is: %s\n", str2);
	getch();
}