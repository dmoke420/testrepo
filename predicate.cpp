#include<iostream>
#include<cmath>

using namespace std;

bool is_even(int n);
bool is_odd(int n);

int main()

{
    for(int n = 2;n < 10;n++)
    {
        if(is_even(n))
            cout << n << " is even " <<  endl;
        else
            cout << n << " is odd" << endl;
    }
    return 0;
    }

    bool is_even(int n)
    {
    return n % 2 == 0;
    }
