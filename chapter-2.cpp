//defining the structure in cpp
#include<iostream>
#include<cstring>
using namespace std;

struct Books
{
    char name[50];
    char author[50];
    int id;
};

void printBook(struct Books book)
{
    cout<<"book name: "<<book.name<<endl;
    cout<<"book author: "<<book.author<<endl;
    cout<<"book  id: "<<book.id<<endl;
}

int main()
{
    struct Books book1;
    strcpy(book1.name,"C tutorials");
    strcpy(book1.author,"Programmer");
    book1.id=1;

    struct Books book2;
    strcpy(book2.name,"C++ tutorials");
    strcpy(book2.author,"xyz");
    book2.id=2;

    printBook(book1);
    printBook(book2);
    return 0;
}