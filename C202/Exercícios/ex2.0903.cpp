#include <iostream> // entrada e sa�da
#include <locale> //acento
// Ler o nome e a idade de uma pessoa e apresentar na tela.

using namespace std; //facilita entrada e sa�da

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilitar o PT_BR
	int ano_atual;
	int ano_nascimento;
	cout<<"Qual o ano atual? "<<endl;
	cin>>ano_atual;
	cout<<"Qual seu ano de nascimento? "<<endl;
	cin>> ano_nascimento;
	cout<<"Ent�o sua idade no final do ano ser�: "<< ((ano_atual) - (ano_nascimento));
	return 0;
}
