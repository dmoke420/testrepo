#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int MAXROLLS = 10000;
const int SIDES = 6;
const int SHIFT = 1;

int main()
{
    srand(time(0));
// declear counters
    int one=0,two=0,three=0,four=0,five=0,six=0;


    for(int i=0;i<MAXROLLS;i++)
{

int die = rand() % SIDES + SHIFT;
if(die == 1)
{
    one++;
}
else if(die == 2)
{
two++;
}
else if(die == 3)
{
three++;
}
else if(die == 4)
{
four++;
}
else if(die == 5)
{
five++;
}
else if(die == 6)
{
six++;
}
else
 {
 cout << " There is a problem with the random number " << endl;
 }

}
    cout << "% of one rolls " << one / static_cast<double>(MAXROLLS) << endl;
    cout << "% of two rolls " << two / static_cast<double>(MAXROLLS) << endl;
    cout << "% of three rolls " << three / static_cast<double>(MAXROLLS) << endl;
    cout << "% of four rolls " << four / static_cast<double>(MAXROLLS) << endl;
    cout << "% of five rolls " << five / static_cast<double>(MAXROLLS) << endl;
    cout << "% of six rolls " << six / static_cast<double>(MAXROLLS) << endl;

// number % 6 = 0 - 5 scaling and shifting.
//cout << rnumber << endl;

return 0;






// for loo}p 
