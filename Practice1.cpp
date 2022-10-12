#include <iostream>

using namespace std;

int main() 
{
    int*x= new int;
    *x= 55;
    
    cout<<"Address of Pointer : "<<x;
    cout<<"\nValue of Pointer :  "<<*x;
    
    delete x;
    return 0;
}
