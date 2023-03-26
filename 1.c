#include <stdio.h>

int main() {
int t;
scanf("%d", &t);
while (t--) {
int n, count = 0, max = 0, sum = 0;
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
sum += a[i];
if (a[i] == 1) count++;
}
max = count * 2 - n + (sum == count ? 1 : 0);
printf("%d\n", max);
}
return 0;
}
