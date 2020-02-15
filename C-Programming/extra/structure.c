#include <stdio.h>
#include <conio.h>

struct student{
	int roll_no;
	char name [16];
	float percentage;
};

void main(){
	struct student s1, s2, s3;

	printf("Enter roll no of Student 1: ");
	scanf("%d", &s1.roll_no);
	printf("Enter name of Student 1: ");
	gets(s1.name);
	printf("\nEnter percentage of Student 1: ");
	scanf("%f", &s1.percentage);

	printf("Enter roll no of Student 2: ");
	scanf("%d", &s2.roll_no);
	printf("Enter name of Student 2: ");
	gets(s2.name);
	printf("Enter percentage of Student 2: ");
	scanf("%f", &s2.percentage);

	printf("Enter roll no of Student 3: ");
	scanf("%d", &s3.roll_no);
	printf("Enter name of Student 3: ");
	gets(s3.name);
	printf("Enter percentage of Student 3: ");
	scanf("%f", &s3.percentage);
	getch();
}