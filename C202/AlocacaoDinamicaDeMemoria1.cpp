#include <iostream>
using namespace std;

struct notas
{
	int nota1;
	int nota2;
	int nota3;
	int nota4;

};

int main()
{

	notas *media; //ponteiro para uma struct
	float soma = 0;

//aloca��o din�mica
	media = new notas; // por ser 1 s� n precisa do []

	cin >> media->nota1;
	soma = soma + media->nota1;
	cin >> media->nota2;
	soma = soma + media->nota2;
	cin >> media->nota3;
	soma = soma + media->nota3;
	cin >> media->nota4;
	soma = soma + media->nota4;

	cout << soma / 4;

	delete media; //liberar mem�ria usada pelo vetor
	return 0;
}
