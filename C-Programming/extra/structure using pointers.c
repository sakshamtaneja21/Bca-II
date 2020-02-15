/*Structure Using Pointers (4-4-19)*/

#include <stdio.h>
#include <conio.h>

struct student{
	int roll_no;
	float prcntge;
};

void main(){
	struct student s1, s2, *ptr;
	ptr = &s1;
	printf("Enter roll no & percentage of Student 1:\n");
	scanf("%d%f", &ptr -> roll_no, &ptr -> prcntge);
	printf("Information of Student 1:\n");
	printf("Roll No = %d\t Percentage = %f", ptr -> roll_no, ptr -> prcntge);
	ptr = &s2;
	printf("\n\nEnter roll no & percentage of Student 2:\n");
	scanf("%d%f", &ptr -> roll_no, &ptr -> prcntge);
	printf("Information of Student 2:\n");
	printf("Roll No = %d\t Percentage = %f", ptr -> roll_no, ptr -> prcntge);
	getch();
}