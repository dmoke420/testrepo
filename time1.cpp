#include<iostream>
#include<cmath>

using namespace std;

void get_int(int &x); // &x passes by reference
int main()
{
    int a=5;
    cout << "a before get_int: " << endl;
    cout << "Enter a value: ";
    get_int(a);
    cout << "a after get_int:" << a <<endl;

    return 0;
    }
    void get_int(int &x) // passing by reference
    {
    cin >> x;
    }
