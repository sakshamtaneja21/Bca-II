#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	printf("18BCAN024\n\n");
	FILE *fp;
	char s[16];
	fp = fopen("sample-1.txt", "w");
	if (fp == NULL){
		puts("File opening error");
		exit(1);
	}
	printf("Enter some text ");
	while (strlen(gets(s)) > 0){
		fputs(s, fp);
		fputs("\n", fp);
	}
	fclose(fp);
}