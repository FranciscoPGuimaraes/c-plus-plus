#include <iostream>
#include <iomanip>
#include<locale>
using namespace std;

struct loja
{
	char nome[41];
	double peso;
	double preco;
};
int main()
{
	setlocale(LC_ALL, "Portuguese"); //habilitar o PT-BR

	loja barracas[100];
	int N, i;
	double somaprecos;

	do
	{
		cout << "Numero barracas: ";
		cin >> N;
	}
	while(N <= 0 || N > 50);

	for(i = 0; i < N; i++)
	{
		cin.ignore();
		cout << "Nome: " << endl;
		cin.getline(barracas[i].nome, 41);
		cout << "Peso: " << endl;
		cin >> barracas[i].peso;
		cout << "Preco: " << endl;
		cin >> barracas[i].preco;

		somaprecos = somaprecos + barracas[i].preco;
	}
	float media = somaprecos / N;

	cout << fixed << setprecision(2) << "O pre�o m�dio �: " << media << endl;

	cout << "As barracas que possuem o pre�o menor que o pre�o m�dio s�o: " << endl;
	for(i = 0; i < N; i++)
	{
		if(barracas[i].preco < media)
		{
			cout << barracas[i].nome << endl;
		}
	}
	return 0;
}
