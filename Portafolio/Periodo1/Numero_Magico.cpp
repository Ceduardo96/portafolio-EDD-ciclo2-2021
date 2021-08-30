#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
	int magico;
	int intento;
	srand(time(0));
	magico = rand() % 10 + 1;
	
	std::cout << "Adivine el numero: ";
	std::cin >> intento;
	
	if (magico == intento) {
		std::cout << "Correcto!\n";
	} else if (magico > intento) {
		std::cout << "Lo siento, mi numero (" << magico << ") es mayor.\n";
	} else {
		std::cout << "Lo siento, mi numero (" << magico << ") es menor.\n";
	}
	return 0;
}
