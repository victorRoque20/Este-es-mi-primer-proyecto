//desarrolle en dev c++ que permita el tipo de cambio de $ a Q o de a $.
//Victor Benjamin Roque Recinos 
//carnet: 0909-21-4018
#include <iostream>
using namespace std;
int main() {
	
	double precioActual, dolares, Quetzales;
	
	cout <<"Ingrese el precio actual del dolar en quetzales: " <<endl;
	cin >>precioActual;
	cout <<"Ingrese la cantidad de dolares: " <<endl;
	cin >>dolares;
	
	cout <<"Ingrese el precio actual del quetzales en dolares: " <<endl;
	cin >>precioActual;
	cout <<"Ingrese la cantidad de quetzales: " <<endl;
	cin >>Quetzales;
	
	Quetzales = dolares * precioActual;
	
	cout << dolares <<"dolares equivalen a " << Quetzales <<"Quetzles. " << endl;
	
	cout <<Quetzales <<"quetzales equivalen a " << dolares <<"dorales. " << endl;
	return 0;
}