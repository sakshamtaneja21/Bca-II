/*Unions (9-4-19)*/
/*store following info. of 2 employees by using union - ID/Name/Salary*/

#include <stdio.h>
#include <conio.h>

union employee{
	int emp_id;
	char emp_name[16];
	float emp_sal;
};

void main(){
	union employee e[10];
   int i;
   for (i = 1; i <= 2; i++){
		printf("Enter information regarding employee %d:\n", i);
      scanf("%s%f%d", e[i].emp_name, &e[i].emp_sal, &e[i].emp_id);
      //flushall();
   }
   for (i = 1; i <= 2; i++){
		printf("emp_id = %d\t emp_name = %s\t emp_sal = %f\n", e[i].emp_id, e[i].emp_name, e[i].emp_sal);
		//flushall();
   }
   getch();
}