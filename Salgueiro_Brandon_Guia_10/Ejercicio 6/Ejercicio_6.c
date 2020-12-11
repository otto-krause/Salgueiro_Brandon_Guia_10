#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Fac, num1=0, H=1;
    printf("ingrese un numero: ");
    scanf("%d",&Fac);
    while(Fac>0)
    {
         num1=num1+1;
        H=H*num1;
        Fac--;
    }
    printf("El factorial es: %d", H);

    return 0;

}
