/*8-1-19*/
/*Sum of 2 numbers*/

#include <stdio.h>
#include <conio.h>

void main()
{
   printf("18BCAN039\n");
   int n1, n2,*p1, *p2;
   printf("Enter 2 numbers: ");
   scanf("%d%d", &n1, &n2);
   p1 = &n1;
   p2 = &n2;
   printf("Sum is %d", *p1+*p2);
   getch();
}