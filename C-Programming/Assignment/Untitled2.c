#include <stdio.h>
#include <conio.h>

void main(){
	int val[2] [4] = { 1, 2, 3, 4, 5, 6, 7, 8}, i,j;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			printf("%d ", val[i][j]);
		}
		printf("\n");
	}
}