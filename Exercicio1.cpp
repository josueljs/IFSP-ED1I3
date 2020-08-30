#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

#define TAM 10

int media(int x[])//Função para descobrir a media*
{
	int md,soma=0;
	for(int i=0;i<TAM;++i)
	{
		soma=soma+x[i];
	}
	md=soma/TAM;
	return md;
}

int maiorvalor (int x[], int y)//Função para descobrir se valor > media*
{
	int totalmaior=0;
	for (int i=0;i<TAM;++i)
	{
		if(x[i]>y)
		{
			cout<<"Valor "<<x[i]<<" na posição '"<<i+1<<"' é maior que a média. (+1)"<<endl;
			totalmaior++;
		}
		
		else
		{
			cout<<"Valor "<<x[i]<<" na posição '"<<i+1<<"' não é maior que a média. (+0)"<<endl;
		};
	}
	return totalmaior;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	int val[TAM];
	
	for(int i=0;i<TAM;++i) //Receber os valores de um vetor*
	{
		cout<< "Digite o valor para a posição '"<<i+1<<"': ";
		cin>>val[i];
		cout<<endl;
	}
	/*
	for (int i=0;i<TAM;++i) //exibir os valores digitados)
	{
		cout<<"Valor digitado na posição '"<<setw(2)<<i+1<<"': "<<val[i];
		cout<<endl;
	}
	*/
	int valormedia=media(val);
	
	cout<<endl<<"Valor da Média: "<<valormedia<<endl;//exibir o valor da media
	
	cout<<endl;
	
	cout<<endl<<"Quantidade de valor(es) maior(es) do que a média: "<<maiorvalor(val,valormedia)<<endl;//exibir valores > media
	
	return 0;
}