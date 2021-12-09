#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n1, n2, opcion;
	char otra_operacion;
	cout << "Bienvenido al programa calculador.\n";	

	cout << "Introduce dos números: \n";
	cin >> n1;
	cin >> n2;		

	//Muestra menú de opciones
	cout	
		<< "Éstas son las opciones: \n"
		<< "1) Sumar " << n1 << "+" << n2 << "\n" 
		<< "2) Restar " << n1 << "-" << n2 << "\n" 
		<< "3) Multiplicar " << n1 << " x " << n2 << "\n" 
		<< "4) Dividir " << n1 << " / " << n2 << "\n";
	
	//Asegura que introduce opción válida
	do {
		cout << "Introduce una opción entre 1 y 4: \n";
		cin >> opcion;
	}while (opcion<1 || opcion>4);
	
	//Según la opción introducida, realiza el cálculo correcto
	cout << "Ha elegido la opción " << opcion << "\n";
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
