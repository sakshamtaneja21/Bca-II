//Frequency of values in an array (5-3-19 - Lab)

#include<stdio.h>
#include<conio.h>

void main() {
	printf("18BCAN024\n\n");
	int arr1[100], fr1[100], n, i, j, ctr;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
		fr1[i] = 1;
	}

	for (i = 0; i < n; i++) {
		ctr = 1;
		for (j = i+1; j < n; j++) {
			if (arr1[i] == arr1[j]) {
				ctr++;
				fr1[j] = 0;
			}
			if (fr1[i] != 0){
				fr1[i] = ctr;
			}
		}
	}

	for (i = 0; i < n; i++) {
		if (fr1[i] != 0){
			printf("%d occurs %d times\n", arr1[i], fr1[i]);
		}
	}
   getch();
}

/*
   int n, i, j, a[100], b[100][2], k=0;
   printf("Enter the number of elements in array: ");
   scanf("%d",&n);
   for(i =0; i < n; i++){
		b[i][0]=0;
		b[i][1]=0;
	}
   printf("Enter the elements of array (1 -1000): ");
   for(i =0; i < n; i++){
		scanf("%d",&a[i]);
   }
   for(i =0; i < n; i++){
      if (a[i] != 0) {
			b[i][0] = a[i];
			b[i][1] = 1;
			for(j = i + 1; j < n; j++){
				if(a [j] != 0){
					if(a[j] == a[i]){
						b[i][1] = b[i][1] + 1;
						a[j] = 0;
					}
				}
			}
		}
	}
   for (i = 0; i < n; i++){
      if(b[i][0] != 0)
      printf("%d occurs %d times\n",b[i][0],b[i][1]);
   }
*/