//desarrolle un programa en c++ que permita calcular la hipotenusa de un triangulo rectangulo, debe validar que los numeros sean positivos y mayores a 0.
//(utilice libreria matematica)
//Victor Benjamin Roque Recinos.
//carnet: 0909-21-4018.
#include <iostream>
#include <math.h>

using namespace std;

int main (){
	
	int co,ca;
	float h;
	
	cout<<"digitate cateto opuesto: ";
	cin>>co;
	
	cout<<"digitate cateto adyacente: ";
	cin>>ca;
	
	h= sqrt (pow(co,2)+pow(ca,2));
	cout<<"la hipotenusa es: "<<h;
	if (ca>0&& co>0){
		cout<<"\n calcular la hipotenusa... "<<endl;
	}
	
	
	cin.get();
    return 0;
}