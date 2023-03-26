#include <stdio.h>
#include <string.h>

const char pi[] = "3.141592653589793238462643383279";

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char n[35];
        scanf("%s", n);
        int len = strlen(n);
        int count = 0;
        for (int i = 0; i < len; i++) {
            if (n[i] == pi[i]) {
                count++;
            } else {
                break;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
