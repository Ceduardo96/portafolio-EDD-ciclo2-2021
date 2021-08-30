#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main() {
	using namespace std;
	cout << "\n Cesar Eduardo Alfaro Parada AP102416 \n \n";
		
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}

// Implementacion
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	// Genero numero aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	
	switch(numeroAleatorio){
		case 1:
			movimiento = "Piedra";
			break;
		case 2:
			movimiento = "Papel";
			break;
		case 3:
			movimiento = "Tijera";
			break;
		case 4:
			movimiento = "Lagarto";
			break;
		case 5:
			movimiento = "Spock";
			break;
	}
	std::cout << "La Computadora escogio: " << movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout << "Piedra, Papel, Tijera, Lagarto, Spock (para terminar el juego, escriba salir)? \n \n";
	cin >> movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	
	if (computadora == jugador){
		std::cout << "Empate \n";
	} 
	else if (jugador == "Piedra"){
		procesarEntradaJugadorPiedra(computadora);
	} 
	else if (jugador == "Papel"){
		procesarEntradaJugadorPapel(computadora);
	} 
	else if (jugador == "Tijera"){
		procesarEntradaJugadorTijera(computadora);
	} 
	else if (jugador == "Lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	} 
	else if (jugador == "Spock"){
		procesarEntradaJugadorSpock(computadora);
	} 
	else if (jugador == "salir"){
		std::cout << "Fin del juego \n";
	}
	else {
		std::cout << "Entrada no valida. ingrese Piedra, Papel, Tijera, Largarto, Spock. \n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora){
	if (computadora == "Lagarto"){
		std::cout << "Usted gana. Piedra aplasta el Lagarto. \n";
	}
	else if (computadora == "Tijera"){
		std::cout << "Usted gana. Piedra aplasta Tijeras. \n";
	}
	else if (computadora == "Papel"){
		std::cout << "La computadora gana. papel cubre piedra. \n";
	}
	else if (computadora == "Spock"){
		std::cout << "La computadora gana. Spock desintegra piedra. \n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	if (computadora == "Lagarto"){
		std::cout << "La computadora gana. Lagarto come Papel. \n";
	}
	else if (computadora == "Tijera"){
		std::cout << "La computadora gana. Tijeras corta Papel. \n";
	}
	else if (computadora == "Piedra"){
		std::cout << "Usted gana. papel cubre piedra. \n";
	}
	else if (computadora == "Spock"){
		std::cout << "Usted gana. papel desaprueba Spock. \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	if (computadora == "Lagarto"){
		std::cout << "Usted gana. Tijeras decapitan lagarto. \n";
	}
	else if (computadora == "Papel"){
		std::cout << "Usted gana. Tijeras corta Papel. \n";
	}
	else if (computadora == "Piedra"){
		std::cout << "La computadora gana. Piedra aplasta Tijeras. \n";
	}
	else if (computadora == "Spock"){
		std::cout << "La computadora gana. Spock aplasta tijeras. \n";
	}
}	

void procesarEntradaJugadorLagarto(std::string computadora){
	if (computadora == "Tijera"){
		std::cout << "La computadora gana. Tijeras decapitan lagarto. \n";
	}
	else if (computadora == "Papel"){
		std::cout << "Usted gana. Lagarto come Papel. \n";
	}
	else if (computadora == "Piedra"){
		std::cout << "La computadora gana. Piedra aplasta el Lagarto. \n";
	}
	else if (computadora == "Spock"){
		std::cout << "Usted gana. Lagarto envenena Spock. \n";
	}
}
	
void procesarEntradaJugadorSpock(std::string computadora){
	if (computadora == "Lagarto"){
		std::cout << "La computadora gana. Lagarto envenena Spock. \n";
	}
	else if (computadora == "Papel"){
		std::cout << "La computadora gana. papel desaprueba Spock. \n";
	}
	else if (computadora == "Piedra"){
		std::cout << "Usted gana. Spock desintegra piedra. \n";
	}
	else if (computadora == "Tijeras"){
		std::cout << "Usted gana. Spock aplasta tijeras. \n";
	}
}	
