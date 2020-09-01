#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

#define LIN 3
#define COL 3

void ExibirMatriz(int *mat[])//Exibir Matriz
{
	for(int i=0;i<LIN;++i)
	{
		for(int j=0;j<COL;++j)
		{
			cout<<mat[i][j]<<" | ";
		}
		cout<<endl;		
	}
}

void VerificarMatrizes(int *mat1[], int *mat2[])//Comparar e exibir matrizes
{
	for(int i=0;i<LIN;++i)
	{
		for(int j=0;j<COL;++j)
		{
			if(mat1[i][j]==mat2[i][j])
			{
				cout<< mat1[i][j]<<" | ";
			}
			else
			{
				cout<< "X"<<" | ";
			}
		}
		cout<<endl;
	}
}

string ConfirmarMatrizes(int *mat1[], int *mat2[])//Frase de comparação matrizes
{
	for(int i=0;i<LIN;++i)
	{
		for(int j=0;j<COL;++j)
		{
			if(mat1[i][j]!=mat2[i][j])
			{
				return "As duas matrizes são diferentes!";
				break;
			}
		}
	}
	return "As duas matrizes são iguais!";
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	int i, j;
	int **mat1= new int*[LIN];
	int **mat2= new int*[LIN];
		
	cout<<"Matriz 1:"<<endl;//Prenchendo matriz 1
		
	for(i=0;i<LIN;++i)
	{
		mat1[i]=new int[COL];
		for(j=0;j<COL;++j)
		{
			cout<<"Insira um valor para a linha '"<<i+1<<"' coluna '"<<j+1<<"' :";
			cin>>mat1[i][j];
		}
		cout<<endl;
	}
	
	ExibirMatriz(mat1);
	
	cout<<endl<<"Matriz 2:"<<endl;//Preenchendo matriz 2
		
	for(i=0;i<LIN;++i)
	{
		mat2[i]=new int[COL];
		for(j=0;j<COL;++j)
		{
			cout<<"Insira um valor para a linha '"<<i+1<<"' coluna '"<<j+1<<"' :";
			cin>>mat2[i][j];
		}
		cout<<endl;
	}

	ExibirMatriz(mat2);	
	
	cout<<endl<<"Comparação das duas matrizes (aparecerá um 'X' caso o número não seja repetido):"<<endl;
	
	VerificarMatrizes(mat1,mat2);
	
	cout<<endl<<ConfirmarMatrizes(mat1,mat2)<<endl;
	
	delete[] mat1;
	delete[] mat2;
	
	return 0;
}