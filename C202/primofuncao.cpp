//Fa�a um algoritmo que leia um inteiro x e diga se ele � primo ou n�o (como no exemplo de sa�da).
//Utilize uma fun��o com par�metro e com retorno.

#include <iostream>
#include <math.h>

using namespace std;

float primo(int p)
{
	int div_exata=0, i;
	
	for(i=1;i<=p;i++){
		if(p%i==0){
			div_exata++;
		}
	}
	
	if(div_exata==2){
		return 2;
	}
	
	else{
		return 0;
	}
}

int main()
{
	int num;
	
	cin>>num;

	int result = primo(num);
	
	if(result==2){
		cout<<"Primo";
	}else{
		cout<<"Not";
	}
	
}
