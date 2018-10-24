#include<iostream>

using namespace std;
//unsigned long factorial(int n);

 long factorial(int n);
  
int main()
{
   int n(0);
   cin >> n;
   long val=factorial(n);
    cout<< val << endl;
    cin.get();
    return 0;
}
                           
    long factorial(int n)
    {
    long result = 1;
    while(n > 0) // subtracting one off of n-1
    {                        
    result*=n;
     n--;
     }
     return result;
                            
     }
     cin.get();
     return 0;
     }

    long factorial(int n)
{
    if(n > 0)
    return n * factorial(n-1);
    else
    return 1;

}
