#include <iostream>

using namespace std;
void fun()
{
  int a=0; // local variable
  static int b=0;
  b++;
  cout<<"A="<<a<<"B="<<b<<endl;

}
int main()
{

fun();
fun();
}
