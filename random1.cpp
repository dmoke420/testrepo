#include <iostream>
using namespace std;
int main()

{

   cout << "Enter the price: ";

      double price;

         cin >> price;



            cout << "Enter the discount rate: ";

               double discount;

                  cin >> discount;



                     cout << "The new price is ";

                        cout << price - price * (discount / 100.0) << endl;

                           return 0;

                           }
