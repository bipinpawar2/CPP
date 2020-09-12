#include <iostream>

using namespace std;

int main()
{
    vote:
        cout<<"YOu Are Not Eligible For Vote";
         cout<<"Enter Your Age";
    int age;

    cin>>age;
    if(age<18)
    {
      goto vote;
    }
    else
    {
        cout<<"YOu are Eligible For Vote";
    }
    return 0;
}
