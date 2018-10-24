#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{

  const int MIN_SPEED = 45;

    const int MAX_SPEED = 65;

      int speed = 55;


        if (!(speed < MAX_SPEED)) { speed = speed - 10; }

          if (!(speed > MIN_SPEED)) { speed = speed + 10; }

            cout << speed;

              return 0;

              }
