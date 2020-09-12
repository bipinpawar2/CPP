#include <iostream>

using namespace std;

int main()
{
   int value=90;
   int *p;
   p=&value;
   cout<<"*p="<<*p<<endl;
   cout<<"p="<<p<<endl;
   cout<<"&value="<<&value<<endl;

}
