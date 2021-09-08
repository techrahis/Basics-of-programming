#include <stdio.h>
#include <string.h>

int main(void) {
    
    char j[10],ctem,string[1000];
    int tem,len,i;
	gets(string);
	len = strlen(string);
	for(i=0;i<len;i++) {
	    tem = (int)string[i]+1;
	    printf("%c",(char)tem);
	}

	gets(j);
	return 0;
}
