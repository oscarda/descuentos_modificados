#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n1, n2, opcion;
	char otra_operacion;
	cout << "Bienvenido al programa calculador.\n";	

	cout << "Introduce dos n�meros: \n";
	cin >> n1;
	cin >> n2;		

	//Muestra men� de opciones
	cout	
		<< "�stas son las opciones: \n"
		<< "1) Sumar " << n1 << "+" << n2 << "\n" 
		<< "2) Restar " << n1 << "-" << n2 << "\n" 
		<< "3) Multiplicar " << n1 << " x " << n2 << "\n" 
		<< "4) Dividir " << n1 << " / " << n2 << "\n";
	
	//Asegura que introduce opci�n v�lida
	do {
		cout << "Introduce una opci�n entre 1 y 4: \n";
		cin >> opcion;
	}while (opcion<1 || opcion>4);
	
	//Seg�n la opci�n introducida, realiza el c�lculo correcto
	cout << "Ha elegido la opci�n " << opcion << "\n";
	switch (opcion) {
	case 1:
		cout << n1 << "+" << n2 << "=" << n1+n2 <<"\n";
		break;
	case 2:
		cout << n1 << "-" << n2 << "=" << n1-n2 <<"\n";
		break;
	case 3:
		cout << n1 << "x" << n2 << "=" << n1*n2 <<"\n";
		break;
	case 4:
		cout << n1 << "/" << n2 << "=" << n1/n2 <<"\n";
	}
		
	return 0;
}
