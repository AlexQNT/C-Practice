#include <iostream>
#include <string>

long long conjectureSim(long long n) {
    long long steps=0;
    while (n>1) {
        if (n % 2 == 0) {
            n=n/2;
        }else {
            n=(n*3)+1;
        }
        steps++;
    }
    return steps;
}

int main() {
    long long n;
    std::cout<<"enter number:"<<'\n';
    std::cin >>n;
    if (n<=0) {
        std::cout<<"not a number"<<'\n';
        return 1;
    }
    std::cout<<conjectureSim(n)<<'\n';
}
//-----------------------------

if (a%n==0 && b%n==0) {
    
}