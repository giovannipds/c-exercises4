#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int age, adults = 0, kids = 0, average;
	
	for(int i = 0; i < 15; i++)
	{
		printf("Digite a idade da pessoa: ");
		scanf("%d", &age);
		
		if (age >= 18)
			++adults;
		else
			++kids;
			
		average += age;
	}
	
	average = round((float)average / 15);
	
	getch();
	printf("\n");
	printf("- %d são maiores de idade;\n", adults);
	printf("- %d são menores de idade;\n", kids);
	printf("- A idade média é de %d anos.\n", average);
	
	return 1;
}
