#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
    char title[20];
    char author[50];
    int id;
}e;


int main()
{
    int num;
    add_details();
    search_book();
}

void add_details()
{
    int i;
    int num;
    printf("Enter the no of books: ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
    printf("\n-----Enter the details of books----- ");
    printf("\nEnter the title name: ");
    scanf(" %s",e.title);
    printf("\nEnter the author name: ");
    scanf( "%s",e.author);
    printf("\nEnter the id: ");
    scanf("%d", &e.id);
    }

}
void search_book()
{

    char name[100];
    printf("\nEnter the title name for search: ");
    scanf("%s",name);
    if(strcmp(name, e.title)==0){
    printf("found the book: %s",e.title);
    printf("\nTitle: ");
    printf("%s",e.title);
    printf("\nAuthor: ");
    printf("%s",e.author);
    printf("\nID: ");
    printf("%d",e.id);

}
else{
    printf("Sorry,Book not found");
}
}
