#include <iostream> // entrada e sa�da
#include <locale> //acento
#include <cmath>
// calcular a raiz quadrada e c�bica usando o pow

using namespace std; //facilita entrada e sa�da

int main(){

	float x;
	cout << "Escola um n�mero" << endl;
	cin >> x;
	float raiz_quadrada = pow(x, (0.5));
	float raiz_cubica = pow(x, (0.333));
	cout << "A raiz quadrada �: " << raiz_quadrada << endl;
	cout << "A raiz c�bica �: " << raiz_cubica;
}

