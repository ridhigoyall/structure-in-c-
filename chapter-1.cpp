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

int main()
{
    struct Books book1;
    strcpy(book1.name,"C++ tutorials");
    strcpy(book1.author,"xyz");
    book1.id=1;

    cout<<"book 1 name: "<<book1.name<<endl;
    cout<<"book 1 author: "<<book1.author<<endl;
    cout<<"book 1 id: "<<book1.id<<endl;


    return 0;
}