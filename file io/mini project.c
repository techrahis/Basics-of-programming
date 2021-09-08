#include <stdio.h>
#include <conio.h>
 int main() {
 	char text[1000];
 	char buff[255];
 	FILE *fp;
 	fp = fopen("miniproject.txt", "w+");
 	gets(text);
 	fprintf(fp, "%s\n",text);
 	fclose(fp);
 	fp = fopen("miniproject.txt", "r");
    fgets(buff, 255, (FILE*)fp);
    printf("%s\n",buff);
 	getch();
 	return 0;
 }