#include <bits/stdc++.h>



using namespace std;

string a[5];

string arr(int n) {
    string set_arr = "sin(" + to_string(n) + ")";
    while(--n) {
        set_arr = "sin(" + to_string(n) + (n&1?"-":"+") + set_arr + ")";
    }
    return set_arr;
}

string arr2(int n) {
    string set_arr2 = "sin(1)+" + to_string(n);
    for (int i = 2,j = n-1; i <= n; i++,j--) {
        set_arr2 = "(" + set_arr2 + ")" + arr(i) + "+" + to_string(j);
    }
    return set_arr2;}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", arr2(n).c_str());
}
