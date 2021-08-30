#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>


void procesarTipoTriangulo(long double a, long double b, long double c);
double IngresarLados();
double promedio();
void respuestaPro(double p);
double IngresarDatos();
void datoMayor(double m);

//-------------------------------------------------------------------------------------------
double IngresarLados(){
	using namespace std;
	cout << "\n Ingrese los 3 lados del Triangulo \n \n";
			cout << "\n Lado A: ";
			long double a=0;
			cin >> a;
			cout << "\n Lado B: ";
			long double b=0;
			cin >> b;
			cout << "\n Lado C: ";
			long double c=0;
			cin >> c;
			procesarTipoTriangulo(a,b,c);
	return 0;		
}


void procesarTipoTriangulo(long double a, long double b, long double c){
	using namespace std;
	long double z=0,y=0,x=0;
	
	if (a==b && c==b){
		cout << "\n El Triangulo es Equilatero \n";
		z=sqrt(3);
		y=(z*a)/2;
		x=(a*y)/2;
//		cout << "\n El Area es: " << x;
	}else if (a==b || b==c || a==c){
		cout << "\n El Triangulo es Isosceles \n";
		z= (a+b+c)*0.5;
		y= (z)*((z-a)*(z-b)*(z-c));
		x= sqrt(y);
	}else {
		cout << "\n El Triangulo es Escaleno \n";
		z= (a+b+c)*0.5;
		y= (z)*((z-a)*(z-b)*(z-c));
		x= sqrt(y);
	}

	cout << "\n El Area es: " << x;
}
//--------------------------------------------------------------------------------------------

double promedio(){
	using namespace std;
   double pro=0,suma=0,entrada=0,comp=0;
   int i=0;
   
   do{
   	cout << "\n ingrese dato (para salir escriba una letra) \n";
   	cin >> entrada;
   	suma=suma + entrada;
   	comp=entrada/entrada;
   	if(comp == 1){
   		i++;	
	}
   }
   while(comp == 1);
   		pro= suma / i;
   	respuestaPro(pro);
   return 0;	
}

void respuestaPro(double p){
	using namespace std;
	cout << "\n El promedio de los datos ingresados es: " << p;
   	
}
//--------------------------------------------------------------------------------------------

double IngresarDatos(){
	using namespace std;
	cout << "\n Ingrese los 5 datos para saber cual es el mayor \n \n";
	double num,mayor;
	for(int i=0; i<5; i++){
		cout << "\n numero " << i+1 <<": ";
		cin >> num;
		if (i==0){
			mayor=num;
		} else{
			if (num>mayor)mayor=num;
		}
	}
	datoMayor(mayor);
	return 0;
}


void datoMayor(double m){
	using namespace std;
	cout << "\n El numero mayor es: " << m;	
}
