#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=0, B=0, C=0, D=0, I=1;
    printf("Ingrese un numero: ");
    scanf("%d", &A);
    printf("Ingrese un numero: ");
    scanf("%d", &B);
    for(I=1;I<=B;I++)
    {
        C=C+A;
        D=D+C;
        C=0;
    }
    printf("Total :%d",D);

    return 0;
}
