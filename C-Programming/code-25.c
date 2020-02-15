/*Structures (9-4-19)*/
/*store following info. of 2 students by using structure - Name/Roll No/Percentage*/

#include <stdio.h>
#include <conio.h>

struct student{
	int roll_no;
	char name [16];
	float percentage;
};

void main(){
	printf("18BCAN024\n\n");
	struct student s1, s2;
	printf("Enter Roll no, Name & Percentage of Student 1: ");
	scanf("%d %s %f", &s1.roll_no, s1.name, &s1.percentage);
	printf("Enter Roll no, Name & Percentage of Student 2: ");
	scanf("%d %s %f", &s2.roll_no, s2.name, &s2.percentage);
	printf("\nRoll No of Student 1: %d", s1.roll_no);
	printf("\nName of Student 1: %s", s1.name);
	printf("\nPercentage of Student 1: %f", s1.percentage);
	printf("\n\n");
	printf("Roll No of Student 2: %d", s2.roll_no);
	printf("\nName of Student 2: %s", s2.name);
	printf("\nPercentage of Student 2: %f", s2.percentage);
	getch();
}