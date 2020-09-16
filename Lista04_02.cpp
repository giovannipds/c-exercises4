#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    int num,qtdIntervalo;
    
    qtdIntervalo = 0;
    for (int i=1; i<=20; i++)
    {
    	printf("Escreva um número: ");
    	scanf("%d", &num);
    	if (num>=10 && num<=150)
    		qtdIntervalo++;
    }
    printf("Foram informados %d no intervalo [10-150].", qtdIntervalo);
		
    return 0;
}
