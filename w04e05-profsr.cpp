#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    int n,num;
    
    printf("Informe a quantidade de n�meros (n) desejada: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i=i+1)
    {
    	printf("Informe o %d� n�mero: ", i);
    	scanf("%d", &num);
    	if (num%2==0)
      	    printf("A raiz quadrada de %d � %f\n", num, sqrt(num));
    	else
    		printf("O quadrado de %d � %f\n", num, pow(num,2));
    }
    return 0;
}
