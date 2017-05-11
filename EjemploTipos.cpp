#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
	char opcion;
	
	Menu:
	system ("CLS");	
	cout << "Ejemplo de uso de variables en C++\n" << endl;
	
	cout << "Algunas de las variables en C++ son:" << endl;
	cout << "-BOOL: Almacena el 1 o el 0.\n";
	cout << "-CHAR: Almacena caracteres.\n";
	cout << "-UNSIGNED: Almacena numeros positivos y el 0.\n";
	cout << "-INT: Amacena números enteros.\n";
	cout << "-DOUBLE: Almacena números reales.\n";
	cout << "-STRING: Almacena una cadena de caracteres.\n" << endl;

	cout << "Seleccione una opcion de las letras siguientes para ver un ejemplo:" << endl;
	cout << "-B: Para variables BOOL.\n";
	cout << "-C: Para variables CHAR.\n";
	cout << "-U: Para variables UNSIGNED.\n";
	cout << "-I: Para variables INT.\n";
	cout << "-D: Para variables DOUBLE.\n";
	cout << "-S: Para variables STRING." << endl;
	
	cout << endl << "Para salir introduzca Q.\n" << endl;
	
	Comienzo:
	cout << "Su opción es: ";
	cin >> opcion;
	cout << endl;
	
	if (opcion == 'B' or opcion == 'b')
	{
		system ("CLS");
		goto B;
	}
	if (opcion == 'C' or opcion == 'c')
	{
		system ("CLS");
		goto C;
	}
	if (opcion == 'U' or opcion == 'u')
	{
		system ("CLS");
		goto U;
	}
	if (opcion == 'I' or opcion == 'i')
	{
		system ("CLS");
		goto I;
	}
	if (opcion == 'D' or opcion == 'd')
	{
		system ("CLS");
		goto D;
	}
	if (opcion == 'S' or opcion == 's')
	{
		system ("CLS");
		goto S;
	}
	if (opcion == 'Q' or opcion == 'q')
	{
		system ("CLS");
		goto Q;
	}
	else
	{
		cout << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto Comienzo;
	}
			
	B:	
	cout << "Variables del tipo BOOL\n" << endl;
	cout << "BOOL: Puede contener los valores 1 o 0, TRUE o FALSE.\n" << endl;
	cout << "Introduzca M para volver al menú principal.\n" << endl;
	cin >> opcion;
	
	if (opcion == 'M' || opcion == 'm')
	{
		system ("CLS");
		goto Menu;
	}
	else
	{
		cout << endl << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto B;
	}
	
	C:	
	cout << "Variables del tipo CHAR\n" << endl;
	cout << "CHAR: Puede contener un solo caracter, sea cual sea el introducido.\n" << endl;
	cout << "Introduzca M para volver al menú principal.\n" << endl;
	cin >> opcion;
	
	if (opcion == 'M' || opcion == 'm')
	{
		system ("CLS");
		goto Menu;
	}
	else
	{
		cout << endl << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto C;
	}
			
	U:
	cout << "Variables del tipo UNSIGNED\n" << endl;
	cout << "UNSIGNED: Puede contener los números naturales incluyendo el 0.\n" << endl;
	cout << "Introduzca M para volver al menú principal.\n" << endl;
	cin >> opcion;
	
	if (opcion == 'M' || opcion == 'm')
	{
		system ("CLS");
		goto Menu;
	}
	else
	{
		cout << endl << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto U;
	}
	
	I:
	cout << "Variables del tipo INT\n" << endl;
	cout << "INT: Puede contener valores numéricos enteros, positivos o negativos.\n" << endl;
	cout << "Introduzca M para volver al menú principal.\n" << endl;
	cin >> opcion;
		
	if (opcion == 'M' || opcion == 'm')
	{
		system ("CLS");
		goto Menu;
	}
	else
	{
		cout << endl << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto I;
	}
		
	D:
	cout << "Variables del tipo DOUBLE\n" << endl;
	cout << "DOUBLE: Pueden contener números reales, con la limitación de 8 bytes.\n" << endl;
	cout << "Introduzca M para volver al menú principal.\n" << endl;
	cin >> opcion;
			
	if (opcion == 'M' || opcion == 'm')
	{
		system ("CLS");
		goto Menu;
	}
	else
	{
		cout << endl << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto D;
	}
		
	S:
	cout << "Variables del tipo STRING\n" << endl;
	cout << "STRING: Pueden contener cadenas de caratéres.\n" << endl;
	cout << "Introduzca M para volver al menú principal.\n" << endl;
	cin >> opcion;
	
	if (opcion == 'M' || opcion == 'm')
	{
		system ("CLS");
		goto Menu;
	}
	else
	{
		cout << endl << "No ha introducido una opción válida, por favor vuelva a intentar.\n" << endl;
		goto S;
	}
	
	Q:
	system ("CLS");
	cout << "Se ha salido del programa.\n" << endl;
	system ("PAUSE");
}
