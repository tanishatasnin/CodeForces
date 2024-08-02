#include <iostream>
using namespace std;

int main()
{

               int x, a, b, c, np = 0;

               cin >> x;

               for (int i = 0; i < x; i++)
               {

                              cin >> a >> b >> c;

                              if (a + b + c >= 2)
                              {
                                             np++;
                              }
               }
               cout << np << endl;
               // your code goes here
               return 0;
}