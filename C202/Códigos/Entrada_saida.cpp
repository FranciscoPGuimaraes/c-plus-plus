//Bibliotecas

#include <iostream> // Entrada e sa�da
#include <locale> //Usar acento

using namespace std; //Facilitar entrada e sa�da de dados

//Programa principal
int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Habilitar o PT_BR
	
	//Coment�rio de uma linha
	
	/* Este
	coment�rio
	est� em v�rias linhas
	*/
	
	//Sa�da
	cout<<"Hello World!"<<endl;
	cout<<"Bem vindos ao Lab de C202";
	
	//Declarar vari�veis
	// tipo nome ; ou tipo nome = valor;
	//int idade, n_irmaos;
	int idade = 20;
	float nota;
	// float nota = 50.8;
	char nome[20];
	
	//Sa�da de dados com vari�vel
	cout<<endl<<"A idade do programa �: "<<idade<<endl;
	
	//Entrada de dados
	cout<<"Digite sua idade: ";
	cin>>idade;
	cout<<"A minha idade �: "<<idade<<endl;
	
	cout<<"Digite seu nome: ";
	cin.ignore(); //Ler char depois de um numero
	cin.getline(nome,20);
	cout<<"Ol� "<<nome<<endl;
	
	//Sa�da com vari�vel no meio
	cout<<"O aluno "<<nome<<" tem "<<idade<<" anos"<<endl;
	
	
	return 0;
}





