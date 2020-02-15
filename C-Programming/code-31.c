#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	printf("18BCAN024\n\n");
	FILE *fp;
	char str[50];
	fp = fopen("sample-2.txt", "r");
	if (fp == NULL){
		puts("File cannot be opened");
		exit(1);
	}
	while (fgets(str, 49, fp) != NULL){
		printf("%s", str);
	}
	/*
		fgets(str, 49, fp);
		printf("%s", str);
	*/
	fclose(fp);
	getch();
}