#include <iostream>
#include <string>
#include <sstream>

int main() {
    int numero = 123; // Tu n�mero entero
    std::string numeroComoString = std::to_string(numero);
    std::cout << "El n�mero como string es: " << numeroComoString << std::endl;
    return 0;
}
