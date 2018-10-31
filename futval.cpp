#include<iostream>
#include <cmath>

using namespace std;

double future_value(double initial_balance, double p, int n)
{
    double b = 1000 * pow( 1 + p / 100, 10);
    return b;
}

{
    double b = initial_balancve * pow(1 + p / 100, n);
    cout << " After 20 years, the balance is " << b << ;
    return b;
}    

int main()

return 0;

/*
int main()
{
    cout << "Please enter the interest rate om percemt: ";
    double rate;
    cin >> rate;

    double balance = future_value(rate);
    cout << " After 10 years, the balance is " << balance << endl;

    return 0;
}


*/
