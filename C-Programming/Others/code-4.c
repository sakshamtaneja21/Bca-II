/*15-1-19*/
/*Swapping of Numbers*/

#include <stdio.h>
#include <conio.h>

void main() {
   printf("18BCAN039\n");
   int a, b, s, *p1, *p2;
   printf("Enter number A: ");
   scanf("%d", &a);
   printf("Enter number B: ");
   scanf("%d", &b);
   p1 = &a;   p2 = &b;
   s = *p1;   *p1 = *p2;   *p2 = s;
   printf("New value of A is %d\n", *p1);
   printf("New value of B is %d\n", *p2);
   getch();
}