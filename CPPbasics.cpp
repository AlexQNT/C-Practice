// So...this is my first cpp commit to github
// This is small collection for what I've done for my first week of studying cpp23

#include <iostream>
#include <cmath>


// Counts how many digits are in a number (e.g. 12345 -> 5)
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count = count + 1;
    }
    return count;
}

// Reverses the digits of a number (e.g. 123 -> 321)
int reverseNumber(int n) {
    int result = 0;
    while (n > 0) {
        int digit = n % 10;
        n = n / 10;
        result = result * 10 + digit;
    }
    return result;
}

// Checks if a number reads the same forwards and backwards (e.g. 121)
bool isPalindrome(int n) {
    int original = n;
    int reversed = reverseNumber(n);
    return original == reversed;
}

// Adds up all the digits of a number (e.g. 12345 -> 15)
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        n = n / 10;
        sum = digit + sum;
    }
    return sum;
}

// Checks if a number equals the sum of its digits each raised to the
// power of the total digit count (e.g. 153 = 1^3 + 5^3 + 3^3)
bool isArmstrong(int n) {
    int digitCount = countDigits(n);
    int original = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        n = n / 10;
        sum = sum + (int)pow(digit, digitCount);
    }
    return sum == original;
}


// Checks if a number is prime (only divisible by 1 and itself)
bool isPrime(int n) {
    for (int i = 2; i < n; i = i + 1) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// tests below:

int main() {
    std::cout << "countDigits(12345) = " << countDigits(12345) << '\n';
    std::cout << "reverseNumber(123) = " << reverseNumber(123) << '\n';
    std::cout << "isPalindrome(121) = " << isPalindrome(121) << '\n';
    std::cout << "isPalindrome(123) = " << isPalindrome(123) << '\n';
    std::cout << "sumOfDigits(12345) = " << sumOfDigits(12345) << '\n';
    std::cout << "isArmstrong(153) = " << isArmstrong(153) << '\n';
    std::cout << "isArmstrong(123) = " << isArmstrong(123) << '\n';
    std::cout << "isPrime(101) = " << isPrime(101) << '\n';
    std::cout << "isPrime(102) = " << isPrime(102) << '\n';

    return 0;
}