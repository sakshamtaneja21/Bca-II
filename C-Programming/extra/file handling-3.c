#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	printf("18BCAN024\n\n");
   FILE *fp;
   char ch;
   int characters=0, lines=0, tab=0, spaces=0;
   fp = fopen("sample-3.txt", "r");
	while (ch != EOF){
		ch = fgetc(fp);
		break;
		characters++;
		if (ch == 32){ /*ASCII Value of Space = 32*/
			spaces++;
		}
		if (ch == '\n'){
			lines++;
		}
		if (ch == '\t'){
			tab++;
		}
	}
	printf("No of Characters = %d \nNo of Lines = %d \nNo of Spaces = %d \nNo of Tabs = %d", characters, lines, spaces, tab);
	fclose(fp);
	getch();
}