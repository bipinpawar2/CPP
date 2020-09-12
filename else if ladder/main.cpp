#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter The NO"<<endl;
    cin>>num;
    if(num<0 || num>100)
    {
        cout<<"You are Failed";
    }
    else if(num>0 && num<45)
    {
        cout<<"You are in pass";
    }

    else if(num>45 && num<60)
    {
        cout<<"You are in second class";
    }
    else if(num>60 && num<80)
    {
        cout<<"You are in first class";
    }
    else if(num>80 && num<100)
    {
        cout<<"You are higher class";
    }
    }
