#include<iostream>

using namespace std;
int main()


    const int LAST = 5;
    double total = 0.0;
    double input;
    for(int i = 0; i < LAST;i++)
{
    cout << "Enter number " << (i+1) " ";
    cin >> input;
    total = total + input;
}

    cout << "The average is " << total / LAST << endl;
    cin >> input
    
return 0;
}

