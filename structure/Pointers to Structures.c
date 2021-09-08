#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void display(struct Books *book) {
    printf("%s\n",book->title);
	printf("%s\n",book->author);
	printf("%s\n",book->subject);
	printf("%d\n",book->book_id);
}

int main(void) {
    
	struct Books b1;
	struct Books b2;
	
	strcpy(b1.title,"C programming");
	strcpy(b1.author, "Neha");
	strcpy(b1.subject,"Computer");
	b1.book_id = 0001;
	display(&b1);
	
	strcpy(b2.title,"C programming 2");
	strcpy(b2.author, "Neha 2");
	strcpy(b2.subject,"Computer 2");
	b2.book_id = 0002;
	display(&b2);
	
	return 0;
}

