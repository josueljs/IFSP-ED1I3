#include <stdio.h>
#include <stdlib.h>

int **pipoca;
int carro, tipo, op, car, pip;

void Memoria(), MostrarFaturamento(), VenderPipoca(), Menu();

int main(int argc, char** argv)
{
	Memoria();

	Menu();

	return 0;
}

void Memoria()
{
	pipoca = (int**)malloc(15 * sizeof(int));
	if (pipoca == NULL)
	{
		exit(1);
	}

	for(carro = 0; carro < 15; ++carro)
	{
		pipoca[carro] = (int*)malloc(2 * sizeof(int));
		if (pipoca == NULL)
		{
			exit(1);
		}
	}

	for (carro = 0; carro < 15; ++carro)
	{
		for(tipo = 0; tipo < 2; ++tipo)
		{
			pipoca[carro][tipo] = 0;
		}
	}
}

void MostrarFaturamento()
{
	printf("%-8s","Car.:");
	printf("%-8s","Sal:");
	printf("%-8s","VSal:");
	printf("%-8s","Doc:");
	printf("%-8s","VDoc:");
	printf("%-8s","Tpip:");
	printf("%-8s","VTot:");
	printf("\n");
	for (carro = 0; carro < 15; ++carro)
	{
		printf("%-8i", carro + 1);
		for(tipo = 0; tipo < 2; ++tipo)
		{
			printf("%-2i\t", pipoca[carro][tipo]);
			if(tipo == 0)
			{
				printf("R$%-5.2f\t", pipoca[carro][tipo] * 5.0);
			}
			else
			{
				printf("R$%-5.2f\t", pipoca[carro][tipo] * 7.5);
			}
		}
		printf("%-5i\t", pipoca[carro][0] + pipoca[carro][1]);
		printf("R$%-5.2f\t", (pipoca[carro][0] * 5.0) + (pipoca[carro][1] * 7.5));
		printf("\n");
	};
	printf("\n");
	printf("\n");

	Menu();
}

void Menu()
{

	do
	{
		puts("Escolha uma opcao:");
		puts("1 - Vender pipoca");
		puts("2 - Mostrar faturamento");
		puts("3 - Fechar programa");
		printf("\n");
		scanf(" %i", &op);
		while(getchar() != '\n');
		printf("\n");
	}
	while(op != 1 && op != 2 && op != 3);

	switch(op)
	{
	case 1:
		VenderPipoca();
		break;
	case 2:
		MostrarFaturamento();
		break;
	case 3:
		puts("Goodbye!");
	default:
		break;
	}
}

void VenderPipoca()
{

	do
	{
		puts("Escolha o numero do carrinho entre '1' e '15': ");
		printf("\n");
		scanf("%i", &car);
		while(getchar() != '\n');
	}
	while(car < 1 || car > 15);
	printf("\n");

	do
	{
		puts("Escolha o tipo de pipoca: ");
		puts("1 - Salgada = R$5,00");
		puts("2 - Doce = R$7,50");
		printf("\n");
		scanf("%i", &pip);
		while(getchar() != '\n');
	}
	while(pip != 1 && pip != 2);

	pipoca[car - 1][pip - 1]++;

	printf("\n");

	if(pip == 1)
	{
		printf("Comprou uma pipoca salgada no carrinho %d.", car);
		printf("\n");
	}
	else
	{
		printf("Comprou uma pipoca doce no carrinho %d.", car);
		printf("\n");
	}

	printf("\n");
	printf("\n");

	Menu();
}
