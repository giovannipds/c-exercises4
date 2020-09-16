#include <stdio.h>
#include <windows.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    int qtdSxMasculino,qtdSxFeminino;
    char nome[30];
	char sexo;
    
    qtdSxMasculino = 0;
    qtdSxFeminino = 0;
    for (int i=1; i<=10; i++)
    {
    	fflush(stdin);
    	printf("Informe o nome da %dª pessoa: ", i);
    	scanf("%29[^\n]s", nome);
    	fflush(stdin);
		printf("Informe o sexo da %dª pessoa M/F: ", i);
    	scanf("%c", &sexo);
    	if (toupper(sexo)=='M')
      	    qtdSxMasculino++;
    	else
    		qtdSxFeminino++;
    }
    printf("Foram informadas:\n");
    printf("   %d pessoas do sexo masculino.\n", qtdSxMasculino);
    printf("   %d pessoas do sexo feminino.\n", qtdSxFeminino);		
    return 0;
}
