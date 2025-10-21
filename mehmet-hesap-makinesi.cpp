#include <iostream>
#include <limits>

int main() {
    std::cout << "İki adet sayı giriniz: ";
    
    double firstNumber;
    double secondNumber;
    std::cin >> firstNumber >> secondNumber;

    std::cout << "İşlem operatörünü giriniz: (+,-,*,/)";
    char operatorChar;
    std::cin >> operatorChar;
    double result = 0;

    switch (operatorChar) {
        case '+':
            result = firstNumber + secondNumber;
            break;

        case '-':
            result = firstNumber - secondNumber;
            break;

        case '*':
            result = firstNumber * secondNumber;
            break;

        case '/':
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
            } else {
                std::cout << "Bölme hatası: Sıfıra bölme!" << std::endl;
                return 1;
            }
            break;

        default:
            std::cout << "Yanlış operatör seçimi!" << std::endl;
            return 1;
    }
    std::cout << firstNumber << " " << operatorChar << " " << secondNumber << " = " << result << std::endl;
    return 0;
}