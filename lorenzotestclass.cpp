#include<iostream>
#include<string>


using namespace std;

int main ()
    {

    string country = "USA";
   string state = "HI";
   int weight = 1;
    double shipping =5.0;

    if(country == "USA" && weight <=1)
    {     
   if(state == "HI" || state == "AK")
   {
   shipping= 20.00;
   }
   else
   {
   shipping = 2.50;
   }
   }
   return 0;
   }
