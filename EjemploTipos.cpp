#include <iostream>

using namespace std;

int main ()
{
	char opcion;
		
	cout << "Ejemplo de uso de variables en C++\n" << endl;
	
	cout << "Algunas de las variables en C++ son:" << endl;
	cout << "-BOOL: Almacena el 0 o el 1.\n";
	cout << "-CHAR: Almacena caracteres.\n";
	cout << "-UNSIGNED: Almacena numeros positivos.\n";
	cout << "-INT: Amacena números enteros.\n";
	cout << "-DOUBLE: Almacena números reales.\n";
	cout << "-STRING: Almacena una cadena de caracteres.\n" << endl;

	cout << "Seleccione una opcion de las letras siguientes:" << endl;
	cout << "-B: Para ver un ejemplo de variables BOOL.\n";
	cout << "-C: Para ver un ejemplo de variables CHAR.\n";
	cout << "-U: Para ver un ejemplo de variables UNSIGNED.\n";
	cout << "-I: Para ver un ejemplo de variables INT.\n";
	cout << "-D: Para ver un ejemplo de variables DOUBLE.\n";
	cout << "-S: Para ver un ejemplo de variables STRING." << endl;
	
	cout << "Para salir presione Q.\n" << endl;
	
	Comienzo:
	cout << "Su opción es: ";
	cin >> opcion;
	
	if (opcion == 'B' or opcion == 'b')
	{
		goto B;
	}
	if (opcion == 'C' or opcion == 'c')
	{
		goto C;
	}
	if (opcion == 'U' or opcion == 'u')
	{
		goto U;
	}
	if (opcion == 'I' or opcion == 'i')
	{
		goto I;
	}
	if (opcion == 'D' or opcion == 'd')
	{
		goto D;
	}
	if (opcion == 'S' or opcion == 's')
	{
		goto S;
	}
	if (opcion == 'Q' or opcion == 'q')
	{
		goto Q;
	}
	else
	{
		cout << "No ha introducido una opción válida, por favor vuelva a intentar." << endl;
		goto Comienzo;
	}
			
	B:
	cout << "BOOL: Por lo general utiliza 1 byte de memoria, valores: true o false.\n";
	cout << endl;
	goto Comienzo;
	
	C:
   	cout << "CHAR: Utiliza generalmente 1 byte de memoria, permite almacenar un carácter, valores; 256 caracteres.\n";
	cout << endl;
	goto Comienzo;
				
	U:
	cout << "UNSIGNED: Utiliza generalmente 2 bytes de memoria, valores: de 0 a 65535.\n";
	cout << endl;
	goto Comienzo;
		
	I:
	cout << "INT: Utiliza generalmente 4 bytes de memoria, valores: de -2147483648 a 2147483647.\n";
	cout << endl;
	goto Comienzo;
		
	D:
	cout << "DOUBLE: Utiliza generalmente 8 bytes de memoria, valores: de 2.2e-308 a 3.4e-38.\n";
	cout << endl;
	goto Comienzo;
		
	S:
	cout << "STRING: Son cadenas de texto que pueden almacenar la cantidad que uno determine al establecerlas.\n";
	goto Comienzo;
	
	Q:
	cout << "Saliste." << endl;
	system ("PAUSE");
}
