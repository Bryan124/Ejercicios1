// Tarea1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	int valor,mayor = 0,menor = 1001,n1,num1,num2,op = 1,pali;
	double pago = 200, ventas = 0;
	double salario, total, tarifa,pi = 3.14159,radio;
	string cadena = "";
	int m1, m2, m3 = 0;
	int hora, hora2 = 0;
	int* arreglo;
	double kilo, litro, kilo1 = 0, litro1 = 0,KPL = 0,KPLT = 0;
	arreglo = new int[5];
	int opcion;


	do {
		cout << "***** MENU *****" << "\n1.Menor y mayor" << "\n2.Par o Impar" << "\n3.Multiplos" << endl;
		cout <<	"4.Kilometraje" << "\n5.Comisiones" << "\n6.Salario" << "\n7.Palindromo" << "\n8.Circulo" << "\n9.Salir" <<endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			for (int i = 0; i < 5; i++) {
				cout << "Ingrese un numero entre 0 - 1000: " << endl;
				cin >> arreglo[i];
			}
			for (int i = 0; i < 5; i++) {
				if (arreglo[i] > mayor)
					mayor = arreglo[i];
				if (arreglo[i] < menor)
					menor = arreglo[i];
			}
			cout << "El numero mayor es: " << mayor << endl;
			cout << "El numero menor es: " << menor << endl;
			break;

		case 2:
			cout << "Ingrese un numero: " << endl;
			cin >> n1;
			if (n1 % 2 == 0)
				cout << "El numero es par" << endl;
			else
				cout << "El numero es impar" << endl;
			break;

		case 3:
			cout << "Ingrese un numero: " << endl;
			cin >> num1;
			cout << "Ingrese un numero: " << endl;
			cin >> num2;
			if (num2 % num1 == 0)
				cout << num1 << " es un multiplo de " << num2 << endl;
			else
				cout << num1 << " no es un multiplo de " << num2 << endl;
			break;

		case 4:
			while (op != 0) {
				cout << "Ingrese el kilometraje del carro(Ingrese -1 para salir): " << endl;
				cin >> kilo;
				if (kilo == -1) {
					op = 0;
					break;
				}	
				cout << "Ingrese los litros: " << endl;
				cin >> litro;
				kilo1 = kilo1 + kilo;
				litro1 = litro1 + litro;
				KPL = KPL + (kilo / litro);
				KPLT = KPLT + (kilo1 / litro1);
				cout << "KPL en este reabastablecimiento: " << KPL << endl;
				cout << "Total KPL: " << KPLT << endl;
			}
			op = 1;
			break;

		case 5:
			while (op != 0) {
				cout << "Ingrese sus ventas de la semana(Ingrese -1 para salir): " << endl;
				cin >> ventas;
				if (ventas == -1) {
					op = 0;
					break;
				}
				pago = pago + (ventas * 0.09);
				cout << "El salario es de: $" << pago << endl;
				ventas = 0;
				pago = 200;
			}
			op = 1;
			break;

		case 6:
			while (op != 0) {
				cout << "Ingrese las horas trabajadas(Ingrese -1 para salir): " << endl;
				cin >> hora;
				if (hora == -1) {
					op = 0;
					break;
				}
				if (hora > 40) {
					hora2 = hora2 + (hora - 40);
					hora = 40;			
				}
				cout << "Ingrese la tarifa por horas del empleado: " << endl;
				cin >> tarifa;
				salario = (hora * tarifa) + (hora2 * (tarifa * 1.5));
				cout << "El salario es de $" << salario << endl;
			}
			op = 1;
			break;
			
		case 7:
			cout << "Ingrese un numero: " << endl;
			cin >> pali;
			cadena = to_string(pali);
			for (int i = 0; i <= cadena.length; i++) {
				int xtra = cadena.length;
				
			}
			break;

		case 8:
			cout << "Ingrese el radio del circulo: " << endl;
			cin >> radio;
			cout << "El diametro del circulo es: " << pi * 2 << endl;
			cout << "El diametro del circulo es: " << 2 * pi * radio << endl;
			cout << "El area del circulo es: " << pi * (radio * radio) << endl;

			break;
		}
	} while (opcion != 9);

	system("pause");

    return 0;
}

