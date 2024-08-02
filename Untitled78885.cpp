#include <bits/stdc++.h>
using namespace std;
int t, n;
int main() {
cin >> t;
while (t--) {
cin >> n;
int x = sqrt(n);
bool flag = false;
for (int i = x; i >= 1; i--) {
int y = n / i;
if (i * y == n) {
cout << i << " " << y << endl;
flag = true;
break;
}
}
if (!flag) cout << "-1" << endl;
}
return 0;
}



