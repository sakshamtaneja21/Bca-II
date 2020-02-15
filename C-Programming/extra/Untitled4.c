#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y){
	int t;
	t = *x;		*x=*y;	*y=t;
}
void main(){
	int a = 10, b = 20;
	printf("Value of a & b before swapping\n");
	printf("a = %d b = %d", a, b);
	swap(&a, &b);
	printf("\nValue after swapping\n");
	printf("a = %d b = %d", a, b);
	getch();
}