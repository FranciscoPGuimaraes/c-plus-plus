#include<iostream>
#include<cmath> //Fun��es matem�ticas
#include<iomanip>//Manipular ponto flutuante

using namespace std;

int main() {
	
	//Opera��es b�sicas: +, -, /, *
	int x = 10;
	int y = 2;
	int potencia;
	float raiz; //valor real pois ra�z nem sempre � inteira

	//pot�ncia
	potencia = pow(x, y); //(base, expoente)

	//Ra�z quadrada
	raiz = sqrt(x);

	cout << x << " elevado a " << y << " = " << potencia << endl;
	// Definindo pontos flutuantes
	cout << fixed << setprecision(2);
	cout << "Raiz de " << x << " = " << raiz<<endl;

	float pi;
	pi = 3.1415;
	cout << "Pi arredondado para cima " << ceil(pi) << endl;
	cout << "Pi arredondado para baixo " << floor(pi) << endl;

	int num, den; //numerador e denominador
	float res; //resultado
	
	num = 10;
	den = 3;
	
	res = (num*1.0)/den;
	cout<<"Resultado: "<<res;
	
	return 0;
}


