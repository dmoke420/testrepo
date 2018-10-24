#include<iostream>
using namesspace std;
int main()

              { 
        bool comparison1,comparison2,comparison3,comparison4,comparison 5,comparison 6,comparison 7,comparison8;
            
        int x = 4;
        int y = 8;
        int a = 5;
        int b = 6;
        int g = 2;
        int i = 3;
        int j = 7;

        bool comparison1 = ( x >= 5 ) || ( y < 7 );
        bool comparison2 = ( !(x < 5) && (y >= 7 );
        if ( comparison1 != comparison2)
            cout << "Something is wrong!" << endl;
        {
        else;
        }

        bool comparison3 = ( x >= 5 ) || ( y < 7 );
        bool comparison4 = ( ! (a == b ) || ! ( g != 5 );
         if ( comparison 3 !+ comparison4)
            cout << "Something is wrong !" << endl;
        {
        else;
        }

        bool comparison5 = ( x > 8 ) || ( y <= 4 );
        bool comparison6 = ( ! ( x <= 8 ) && ( y > 4 );
        if (comparison5 != comparison 6)
            cout << "Something is wrong !" << endl;
        {
        else;
        }

        bool comparison7 = ( i <= 4 ) && ( j > 6 );
        bool comparison8 = ( ! (i > 4) || (j <= 6 );
        if (comparison7 != comparison8)
            cout << "SOmething is wrong!" << endl;
        else;

                return 0;
                }

