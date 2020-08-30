#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

#define TAM 10

int media(int x[])//Fun��o para descobrir a media*
{
	int md,soma=0;
	for(int i=0;i<TAM;++i)
	{
		soma=soma+x[i];
	}
	md=soma/TAM;
	return md;
}

int maiorvalor (int x[], int y)//Fun��o para descobrir se valor > media*
{
	int totalmaior=0;
	for (int i=0;i<TAM;++i)
	{
		if(x[i]>y)
		{
			cout<<"Valor "<<x[i]<<" na posi��o '"<<i+1<<"' � maior que a m�dia. (+1)"<<endl;
			totalmaior++;
		}
		
		else
		{
			cout<<"Valor "<<x[i]<<" na posi��o '"<<i+1<<"' n�o � maior que a m�dia. (+0)"<<endl;
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
		cout<< "Digite o valor para a posi��o '"<<i+1<<"': ";
		cin>>val[i];
		cout<<endl;
	}
	/*
	for (int i=0;i<TAM;++i) //exibir os valores digitados)
	{
		cout<<"Valor digitado na posi��o '"<<setw(2)<<i+1<<"': "<<val[i];
		cout<<endl;
	}
	*/
	int valormedia=media(val);
	
	cout<<endl<<"Valor da M�dia: "<<valormedia<<endl;//exibir o valor da media
	
	cout<<endl;
	
	cout<<endl<<"Quantidade de valor(es) maior(es) do que a m�dia: "<<maiorvalor(val,valormedia)<<endl;//exibir valores > media
	
	return 0;
}