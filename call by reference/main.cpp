#include <iostream>

using namespace std;
swap(int *x,int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;

}
int main()
{
    int a=10, b=20;
    swap(&a,&b);
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;

}
