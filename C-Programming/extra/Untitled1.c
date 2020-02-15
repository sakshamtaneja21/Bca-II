#include <stdio.h>
#include <conio.h>

void main(){
	char ch[10] = "Karan";
	char str[128];
	printf("Enter a string: ");
	gets(str);
	//scanf("%s", str); // gets(str); used when storing black spaces
	printf("%s %s", ch, str); // puts(ch); puts(str);
	getch();
}
//blank space acts as a separator/delimeter in scanf()