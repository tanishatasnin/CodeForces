#include <iostream>

using namespace std;
int main()
{
               int n, k, i, a[100], count = 0;

               cin >> n >> k;
               for (int i = 1; i < n; i++)

               {
                              cin >> a[i];
               }
               for (int i = 1; i < n; i++)
               {
                              if (a[i] > 0 && a[i] >= a[k - 1])
                                             count++;
               }
               cout << count << endl;
}