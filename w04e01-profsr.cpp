#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    for (int i=10; i>0; i--)
       printf("%d\n", i);
		
    return 0;
}
