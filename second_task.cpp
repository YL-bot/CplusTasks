#include <iostream>
#include <string>
 
int main() {
    int a;
    int b;
    int value;
    std::cin >> a >> b; //вводим два числа и передаем их в A и B
    value = a + b; // сумма 
    std::cout << value << "\n"; //печатаем - можно и так: std::cout << a + b << "\n"; 
}