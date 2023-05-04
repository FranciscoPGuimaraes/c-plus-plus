#include <math.h>
#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
	int main(){
		int vendas;
		float preco;
		setlocale(LC_ALL, "Portuguese");
		cout<<fixed<<setprecision(2);
		cin>>vendas>>preco;
		if(vendas<0 || preco<0){
			cout<<"Erro de entrada";
		}else{
		if(vendas==0){
			float NP1 = (preco - (preco*0.1));
			cout<<"Novo pre�o = R$"<<NP1<<" (pre�o reduzido)";
		}else if(vendas> 0 && vendas<500){
			cout<<"Novo pre�o = R$"<<preco<<" (pre�o sem reajuste)";
		}else if(vendas>=500 && vendas<1000){
			float NP2 = (preco + (preco*0.1));
			cout<<"Novo pre�o = R$"<<NP2<<" (pre�o aumentado)";
		}else{
			float NP3 = (preco + (preco*0.15));
			cout<<"Novo pre�o = R$"<<NP3<<" (pre�o aumentado)";
		}}
		return 0;
	}