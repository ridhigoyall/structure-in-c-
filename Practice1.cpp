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
    strcpy(book1.name,"c++ tutorial");
    strcpy(book1.author,"xyz");
    book1.id=1;

    cout<<"book1 name: "<<book1.name<<endl;
    cout<<"book1 author: "<<book1.author<<endl;
    cout<<"book1 id: "<<book1.id<<endl;
    return 0;
}