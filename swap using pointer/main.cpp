#include <iostream>

using namespace std;

int main()
{
    int a=10, b=20;          //declared and initialization of variable;
    int *p1, *p2;        //pointer declaration
    p1=&a , p2=&b;     //stored the addresed of data
    cout<<"Value of *p1 before "<<*p1<<endl;
    cout<<"Value of *p2 before "<<*p2<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout<<"Value of *p1 after "<<*p1<<endl;
    cout<<"Value of *p2 after "<<*p2<<endl;

}
