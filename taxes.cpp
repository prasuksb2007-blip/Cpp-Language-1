#include <iostream>
#include <iomanip> // for setprecision


int main(void) {
    float grossprice, taxrate, netprice, taxvalue;
    
    std::cout << "Enter a gross price: ";
    std::cin >> grossprice;
    std::cout << "Enter a tax rate: ";
    std::cin >> taxrate;
    
    if(grossprice <= 0.0 || taxrate < 0.0 || taxrate > 100.0) {
        std::cout << "Input data doesn't look correct - I refuse calculations." << std::endl;
    } else {
        netprice = grossprice / (1.0 + taxrate / 100.0);
        taxvalue = grossprice - netprice;
        
        std::cout << std::fixed << std::setprecision(4); // std::Set precision to 4 decimal places
        std::cout << "Net price: " << netprice << std::endl;
        std::cout << "Tax value: " << taxvalue << std::endl;
    }
    
    return 0;
}
