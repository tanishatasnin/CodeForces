#include <iostream>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
     if (x <= 0 || y <= 0) {
        return 1;
    }
    return gcd(y, x % y);
}

int main() {
    int x, y;
    std::cin >> x >> y;

    int result = gcd(x, y);
    std::cout << "GCD of " << x << " and " << y << " is: " << result << std::endl;

    return 0;
}

