#include <iostream>
#include <iomanip>
 
int main() 
{
    std::cout << "Default boolalpha setting: " << std::boolalpha << true << '\n';
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha setting: " << true << '\n';
    std::cout << std::showbase;
    std::cout << "showbase setting: " << 20 << '\n';
    std::cout << std::noshowbase;
    std::cout << "noshowbase setting: " << 20 << '\n';
    std::cout << std::showpoint;
    std::cout << "showpoint setting: " << 1.0 << '\n';
    std::cout << std::noshowpoint;
    std::cout << "noshowpoint setting: " << 1.0 << '\n';
    std::cout << std::showpos;
    std::cout << "showpos setting: " << 10 << '\n';
    std::cout << std::noshowpos;
    std::cout << "noshowpos setting: " << 10 << '\n';
    return 0;
}