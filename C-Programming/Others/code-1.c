/*8-1-19*/
/*Pointers*/

#include <stdio.h>
#include <conio.h>

void main()
{
   printf("18BCAN039\n");
   int n, *ptr;
   printf("Enter a number: ");
   scanf("%d",&n);
   ptr = &n;
   printf("Value of n = %d\n", *ptr);
   printf("Value of n = %d", n);
   getch();
}