#include <iostream>

using namespace std;

class base
{
    int a, b;   //because int a is 4 byte and b is also 4 byte;
                // or it return data type size;
};
int main()
{
    base b;
    std::cout<<"Size of base class is "<<sizeof(b)<<std::endl;
    return 0;
}
