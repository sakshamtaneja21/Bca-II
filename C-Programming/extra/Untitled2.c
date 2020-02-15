#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	char str1[10] = "abc", str2[15] = "abc";
	int c;
	c = strcmp(str1, str2);
	if(c == 0)
		printf("The strings are same");
	getch();
}