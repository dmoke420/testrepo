#include<iostream>
#include<cctype>





int main()
{
    char response;

do
       {   
    cout << " Do you want to continue? (Y/N) ";
    cin >> response;
    response = toupper(response);             // input information 
    if(response != 'Y' && response != 'N')
        cout << "invalid response, try again";


        }
        while (response == 'Y' ||response != 'N');
        return 0;
}
