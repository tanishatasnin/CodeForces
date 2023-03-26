#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000005];

int main() {
cin >> t;
while (t--) {
cin >> n;
int one = 0, neg = 0;
for (int i = 0; i < n; i++) {
cin >> a[i];
if (a[i+1] == 1) one++;
else neg++;
}
cout << max(one, neg)  << endl;
}
return 0;
}
