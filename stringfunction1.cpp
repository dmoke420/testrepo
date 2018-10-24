#include<iostream>

#include<string>

#include<cctype>

using namespace std;


    bool is_digit(char c)
    {

    return c >='0' && c <= '9';

    }


    bool is_valid_number(string s)

    {
       for(int c = 0; c < s.length(); c++)
      {
          
            if( is_digit(s.at(c)) == false)
            return false;
      }

    return true;
    }


    int main()

    {

    string s = "30349875340958034985039485093485024a958";

      if(is_valid_number(s))

     {

     cout << "yes it is valid";

     }

     else

     {

     cout << "no it is not valid";
   
  
    
     }
     return 0;

}
