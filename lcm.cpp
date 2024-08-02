#include <iostream>

int gcd(int x, int y) {
    // Base case: If y is 0, return x (the GCD)
    if (y == 0) {
        return x;
    }

    // Recursive case: Calculate GCD recursively using Euclidean algorithm
    return gcd(y, x % y);
}

int lcm(int x, int y) {
    // Calculate the LCM using the GCD formula
    return (x * y) / gcd(x, y);
}

int main() {
    int x, y;

    std::cout << "Enter two positive integers x and y: ";
    std::cin >> x >> y;

    if (x <= 0 || y <= 0) {
        std::cout << "Please enter positive integers." << std::endl;
        return 1;
    }

    int result = lcm(x, y);
    std::cout << "LCM of " << x << " and " << y << " is: " << result << std::endl;

    return 0;
}

