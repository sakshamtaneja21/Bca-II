/*Array of Structure (3-4-19)*/

#include <stdio.h>
#include <conio.h>

struct employee{
	int emp_id;
	char emp_name[10];
	float emp_sal;
};

void main(){
   typedef struct employee emp;
   emp e[10];
   int i;
   for (i = 0; i < 3; i++){
		printf("Enter information regarding employees:\n");
      scanf("%d%s%f", &e[i].emp_id, e[i].emp_name, &e[i].emp_sal);
   }
   for (i = 0; i < 3; i++){
		printf("emp_id = %d\t emp_name = %s\t emp_sal = %f\n", e[i].emp_id, e[i].emp_name, e[i].emp_sal);
   }
   getch();
}