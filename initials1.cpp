#include <iostream>
#include <string>
#include <iomanip>
#include<cmath>

using namespace std;

int main()
{
   int pennies = 1;
   int nickels = 12;
   int dimes = 4;
   int quarters = 120;
  
   
        cout << fixed << setprecision(2);
  
        cout << setw(8) << pennies << " "
            << setw(8) << pennies * 0.01 << "\n";
  
        cout << setw(8) << nickels << " "
            << setw(8) <<  nickels * 0.05 << "\n";
 
        cout << setw(8) << dimes << " " 
            << setw(8) << dimes * 0.10 << "\n";
  
        cout << setw(8) << quarters << " "
            << setw(8) << quarters *0.25 << "\n";

    return 0;
}
