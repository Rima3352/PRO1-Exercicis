#include <iostream>
#include <cmath>

int main(){
    int nat;
    double arrel;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);
    while (std::cin >> nat){
        arrel = sqrt(nat);
        std::cout << nat*nat << ' ' << arrel << std::endl;
    }
}