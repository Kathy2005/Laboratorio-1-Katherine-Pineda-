//Realiza un programa que muestre �nicamente, los n�meros pares en el rango del 1 al 100.
#include<iostream>
using namespace std;

int main(){
	int numero = 0;
	while (numero <= 100){
		if (numero % 2 == 0){
			cout << numero << endl;
		}
		numero = numero + 1;
	}
}
