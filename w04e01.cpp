#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	printf("Números inteiros de 100 a 1:\n");
	
	for(int i = 100; i >= 1; i--)
	{
		printf("%i", i);
		printf(i != 1 ? ", " : ".");
	}
	
	return 1;
}
