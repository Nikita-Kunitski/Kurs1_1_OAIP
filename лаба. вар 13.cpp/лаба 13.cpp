#include <iostream>
void main()
{ 
 double t, y, d=5e-9, c= 9, j=-4, a=1.5;
t=d*c+a*sqrt(c-1);
y=0.5*t/d+exp(1+d);
std::cout<<"t= "<<t;
std::cout<<" y= "<<y<<std::endl;
}