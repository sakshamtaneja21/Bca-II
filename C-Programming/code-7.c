#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	char  ch = 'V' , *ptr;
	ptr = &ch;
	printf("%d\n%c", *ptr, *ptr);
	getch();
}