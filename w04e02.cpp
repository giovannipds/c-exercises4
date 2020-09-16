#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int number, counter = 0;
	
	for(int i = 0; i < 20; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &number);
		if (number >= 10 && number <= 150)
			++counter;
	}
	
	getch();
	printf("Destes números, %d estão entre 10 e 150.", counter);
	
	return 1;
}
