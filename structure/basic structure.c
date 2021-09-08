#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(void) {
	struct Books b1;
	struct Books b2;
	
	strcpy(b1.title,"C programming");
	strcpy(b1.author, "Neha");
	strcpy(b1.subject,"Computer");
	b1.book_id = 0001;
	
	strcpy(b2.title,"C programming 2");
	strcpy(b2.author, "Neha 2");
	strcpy(b2.subject,"Computer 2");
	b2.book_id = 0002;
	
	printf("%s\n",b1.title);
	printf("%s\n",b1.author);
	printf("%s\n",b1.subject);
	printf("%d\n",b1.book_id);
	
	printf("%s\n",b2.title);
	printf("%s\n",b2.author);
	printf("%s\n",b2.subject);
	printf("%d\n",b2.book_id);
	return 0;
}
