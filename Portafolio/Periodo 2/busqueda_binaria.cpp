#include <iostream>
#include <array>

using namespace std;

//Cesar Eduardo Alfaro Parada AP102416
int main(){
	array<int, 5> numeros={1, 2, 3, 4, 5};
	int inf = 0;
	int sup = (int) numeros.size() -1;
	int med;
	int valor = 4, indice = -1;
	
	while (inf <= sup){
		med = inf + (sup -inf) / 2;
		if 		(valor < numeros[med]) sup = med - 1;
		else if (valor > numeros[med]) inf = med + 1;
		else {
			indice = med;
			break;
		}
	}

	cout << "El valor " << valor << " esta en el indice: " << indice << endl;
	return 0;
}
