#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    int idade,maiores,menores;
	float media;
    
    maiores = 0;
    menores = 0;
    media = 0;
    for (int i=1; i<=15; i++)
    {
    	printf("Informe a idade da %dª pessoa: ", i);
    	scanf("%d", &idade);
    	if (idade<18)
    	    menores++;
    	else
    		maiores++;
    	media += idade;
    }
    media/=15;
    printf("Foram informadas:\n");
    printf("   %d pessoas menores de idade.\n", menores);
    printf("   %d pessoas maiores de idade.\n", maiores);
    printf("   A idade média das pessoas informadas é %4.1f.\n", media);
		
    return 0;
}
