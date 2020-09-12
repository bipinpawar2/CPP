#include <iostream>

using namespace std;
void print(int arr[5]);
int main()
{

      int arr1[5]={0,1,2,3,4};
      print(arr1);  //passing array to function;
}

 void print(int arr[5])
 {
     int i,a;
     do{
     cout<<arr[i]<<endl;
     i++;
     }while(i<5);
 }
