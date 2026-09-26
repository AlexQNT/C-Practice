#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

class Instrument {
    private:
    std::string symbol;
    double price;

    public:
    Instrument(std::string symbol, double price)
    : symbol(symbol), price(price) {}

    std::string get_symbol() const{ return symbol; }
    double get_price() const{ return price; }

    void printAll() const {
        std::cout << get_symbol() << " " << get_price() << std::endl;
    }
};
class Stock :public Instrument {
    private:
    double dividend;

    public:
    Stock(std::string symbol, double price, double dividend)
        :Instrument(symbol, price), dividend (dividend) {}
    ~Stock() {}

    double get_dividend() const { return dividend; }

    void printAll() const {
        Instrument::printAll();
        std::cout << get_dividend() << std::endl;
    }
};


int main() {
    Instrument ins1("S", 2000);
    Stock stock1("S", 2000, 30000);
    stock1.printAll();
}