#include<iostream>
using namespace std;
double slope_intercept(double m,double x,double b); //declaration

int main()
{
    for(double x = -2.0;x <= 2.0; x += 0.1)

        cout << x
            << " "
            << slope_intercept(3/4.0,x,1)
            << endl;
         
    return 0;
}


double slope_intercept(double m,double x,double b) // implementation
{
    return m*x+b;
}    
