//desarolle un programa en c++ que permita el ingreso del nombre y 3 notas de un alumno y calcule su promedio, al final debe de mostrar,
//el nombre y el promedio del alumno,
//victor Benjamin Roque Recinos
//carnet: 0909-21-4018.

#include <iostream>
using namespace std;
int main (){
	
	float n1,n2,n3,promedio,alumno;
	
	cout<<"Ingrese la primera nota"<<endl;
	cin>>n1;
	cout<<"Ingrese la segunda nota"<<endl;
	cin>>n2;
	cout<<"Ingrese la tercera nota"<<endl;
	cin>>n3;
	promedio=(n1+n2+n3)/3;
	cout<<"la nota promedio es"<<promedio<<endl;
	if(promedio>=10.5)
	    cout<<"aprobado"<<endl;
    else
        cout<<"desaprobado"<<endl;
        cout<<"Ingrese su nombre"<<endl;
	cin>>alumno;
	return 0;
}