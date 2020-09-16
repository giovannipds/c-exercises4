#include <stdio.h>
#include <windows.h>
#include <unistd.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	printf("Números inteiros de 100 a 1:\n\n");
	
	for(int i = 100; i >= 1; i--)
	{
		printf("%d", i);
		usleep(25 * 1000);
		printf(i != 1 ? ", " : ".");
	}
	
	return 1;
}
