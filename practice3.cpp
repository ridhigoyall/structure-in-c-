#include<iostream>
#include<cstring>
using namespace std;

struct Movies
{
    char name[50];
    char hero[50];
    char director[50];
    int id;
};

void printMovie(struct Movies movie)
{
    cout<<"Movie Id No."<<movie.id<<endl;
    cout<<"Movie name is "<<movie.name<<endl;
    cout<<"Movie hero name is "<<movie.hero<<endl;
    cout<<"Movie director name is "<<movie.director<<endl;
}

int main()
{
    struct Movies film1;
    strcpy(film1.name,"Tiger Zinda H");
    strcpy(film1.hero,"Salman Khan");
    strcpy(film1.director,"Ali Abbas Zafar");
    film1.id=1;
    printMovie(film1);

}