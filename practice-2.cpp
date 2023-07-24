#include<iostream>
#include<cstring>
using namespace std;

struct Books {
   char name[50];
   char author[50];
   int id;
};


int main()
{
    struct Books book1;
    strcpy(book1.author,"abcd");
    strcpy(book1.name,"c program");
    book1.id=1;

    cout<<"the book name is "<<book1.name<<endl;
    cout<<"the book author is "<<book1.author<<endl;
    cout<<"the book id is "<<book1.id<<endl;
   


}