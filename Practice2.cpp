#include <iostream>
#include <cmath>

using namespace std;

void trig_func(double* _sin , double* _cos , double angle)
{
    *_sin = sin(angle);
    *_cos = cos(angle);
    
    cout<<"The sin of the angle is : "<<*_sin;
    cout<<"\nThe cos of the angle is : "<<*_cos;
    
}

int main() 
{
    double _sin, _cos, angle;
    
    cout<<"Enter the angle : ";
    cin>>angle;
    
    trig_func(&_sin, &_cos , angle);
    
    return 0;
}
