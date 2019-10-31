#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

void menu();
void suma();
void resta();
void multiplicacion();
void division();
void pausa();


int main()
{
	menu();
	return 0;
}

void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora con funciones" << endl;
		cout << "-------------------------" << endl;
		cout << "\t1.- Sumar" << endl;
		cout << "\t2.- Restar" << endl;
		cout << "\t3.- Multiplicar" << endl;
		cout << "\t4.- Dividir" << endl;
		cout << "\t5.- Salir" << endl;

		cout << "elije una funcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;

		case '2':
			system("cls");
			resta();
			break;

		case '3':
			system("cls");
			multiplicacion();
			break;

		case '4':
			system("cls");
			division();
			break;

		case '5':
			bandera = true;
			break;

		default:
			system("cls");
			cout << "opcion no valida" << endl;
			pausa();
			break;
		}
	} while (bandera != true);
}
void pausa()
{
	cout << endl << "pulpa cualquier tecla para continuar...";
	getwchar();
	getwchar();
}

void suma()
{
	int a, b, suma;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	suma = a + b;
	cout << "la suma es: " << suma;
	pausa();
	
}

void resta()
{

}

void multiplicacion()
{

}

void division()
{

}



