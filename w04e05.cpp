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
	printf("Digite quantos n�meros voc� quer ler: ");
	scanf("%d", &n);
	
	// iterate
	i = n;
	while (i > 0)
	{
		// ask for number
		system("cls");
		printf("Digite um n�mero: ");
		scanf("%d", &number);
		
		// calc
		even = number % 2 == 0;
		sqOrSqrt = even ? sqrt(number) : (number*number);
		
		// output
		if (even)
			printf("N�mero par, raiz quadrada %.2f.", sqOrSqrt);
		else
			printf("N�mero �mpar, o quadrado de %d � %d.", number, (int)sqOrSqrt);
		getch();
		i--;
	}
	return 1;
}
