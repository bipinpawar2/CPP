#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int &value=a;
    std::cout<<value<<std::endl;
    int m=90;
    int n=1000;
    int &x=m;
    cout<<x<<endl;
    int &y=n;
    cout<<y<<endl;

    return 0;
}
