#include <iostream>
#include <cmath>

double An(int n) {
    double result = 0.0;
    int sign = 1;
    for (int i = n; i >= 1; i--) {
        result = sin(i - sign * result);
        sign *= -1;
    }
    return result;
}

double Sn(int n) {
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        result = An(i) + n - i + 1;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << Sn(n) << std::endl;
    return 0;
}
