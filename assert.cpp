#include<iostream>
#include<string>
#include<cassert>

using namespace std;

string int_name(int n);

string digit(int n);
string teens(int n);
string tens(int n);
 double digit( double initial, double p,int term);


int main()
{
double initial = 0, p = 5;
double term =10;


    double balance = digit(initial, p , term);

    cout << balance << endl;

    return balance;
// Unit tests
//Blackbox

    assert(int_name(416) == "Four Hundred sixteen");
//Whitebox
    assert(digit(1) == "One");
    assert(digit(2) == "Two");
    assert(digit(3) == "Three");
    assert(digit(9) == "Nine");


    cout << int_name(167) << endl;

    cout << "tests passed!" << endl

    return 0;
}
