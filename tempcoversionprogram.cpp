#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "Enter the tempreture unit C/F : ";
    std::cin >> unit;

    if (unit =='C'){
        std::cout << "Enter the tempreture: ";
        std::cin >> temp;
        std::cout << "Convert from celsius to fahrenheit: " << (temp * 9/5) + 32 << '\n'; 
        std::cout << "The tempreture is " << (temp * 9/5) + 32 << " *" << 'F';
    }
    else if (unit == 'F'){
        std::cout << "Enter the tempreture: ";
        std::cin >> temp;
        std::cout << "Convert from faherheit to celsius: " << (temp - 32) * 5/9 << '\n'; 
        std::cout << "The tempreture is " << (temp - 32) * 5/9 << " *" << 'C';
    }
    else {
        std::cout << "Enter a valid unit";
    }
    

    return 0;
}
