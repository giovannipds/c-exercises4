#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n, i, number;
	float sqOrSqrt;
	bool even;
	
	// ask for n
	printf("Digite quantos números você quer ler: ");
	scanf("%d", &n);
	
	// iterate
	i = n;
	while (i > 0)
	{
		// ask for number
		system("cls");
		printf("Digite um número: ");
		scanf("%d", &number);
		
		// calc
		even = number % 2 == 0;
		sqOrSqrt = even ? sqrt(number) : (number*number);
		
		// output
		if (even)
			printf("Número par, raiz quadrada %.2f.", sqOrSqrt);
		else
			printf("Número ímpar, o quadrado de %d é %d.", number, (int)sqOrSqrt);
		getch();
		i--;
	}
	return 1;
}
