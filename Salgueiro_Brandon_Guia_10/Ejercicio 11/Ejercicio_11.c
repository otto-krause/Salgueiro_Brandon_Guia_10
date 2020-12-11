#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=0, B=0, C=0, D=0, E=0;
    printf("Ingrese un dividendo: ");
    scanf("%d",&A);
    printf("Ingrese un divisor: ");
    scanf("%d",&B);
    while (A>B)
    {
    C++;
    A = A-B;
    }
    printf("El cociente de la division es: %d\nEl resto es: %d", C, A);
    return 0;
}
