#include <iostream>
 
int main() {
    double temperatura;
    char opcja;
 
    // Wprowadzenie temperatury w stopniach Celsjusza
    std::cout << "Podaj temperature w stopniach Celsjusza: ";
    std::cin >> temperatura;
 
    // Wprowadzenie jednostki docelowej
    std::cout << "Wybierz jednostke docelowa (K dla Kelvina, F dla Fahrenheit): ";
    std::cin >> opcja;
 
    // Instrukcja switch obsługująca wybór
    switch (opcja) {
        case 'K': // Konwersja do Kelvina
        case 'k':
            std::cout << "Temperatura w stopniach Kelvina: " << temperatura + 273.15 << std::endl;
            break;
        case 'F': // Konwersja do Fahrenheita
        case 'f':
            std::cout << "Temperatura w stopniach Fahrenheita: " << (temperatura * 9 / 5) + 32 << std::endl;
            break;
        default: // Obsługa nieprawidłowego wyboru
            std::cout << "Nieprawidlowa opcja! Wybierz K lub F." << std::endl;
    }
 
    return 0;
}