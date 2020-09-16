#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	char name[255], sex;
	int men = 0, women = 0, n = 10;
	bool validSex;
	
	for(int i = 0; i < n; i++)
	{
		system("cls");
		
		// ask name
		printf("Digite o nome da pessoa: ");
		fflush(stdin);
		scanf("%254[^\n]s", &name);
		
		// ask sex
		do
		{
			printf("Digite o sexo (m ou f): ");
			fflush(stdin);
			scanf("%c", &sex);
			validSex = sex == 'f' || sex == 'm';
			if ( ! validSex)
				printf("Erro, digite f ou m.\n");
		} while ( ! validSex);
		
		// count sex
		sex == 'm' ? ++men : ++women;
		
		if (i + 1 != n)
			printf("\nPressione enter para adicionar mais uma pessoa.");
		getch();
	}
	
	system("cls");
	printf("Entre essas pessoas:\n\n");
	printf("- Homens: %d;\n", men);
	printf("- Mulheres: %d.\n", women);
	
	return 1;
}
