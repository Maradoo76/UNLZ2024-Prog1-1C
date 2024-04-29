#include <iostream>
#include <string>
#include <sstream>

int main() {
    int numero = 123; // Tu número entero
    std::string numeroComoString = std::to_string(numero);
    std::cout << "El número como string es: " << numeroComoString << std::endl;
    return 0;
}
