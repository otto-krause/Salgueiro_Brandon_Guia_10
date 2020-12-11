#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n=0;
    char str[10];
    for(i=0; i<15; i++)
    {
        printf("\nIngresa tu nombre : ");
        scanf("%s", &str);
        printf("\nIngresa tu nota : ");
        scanf("%d", &n);
        if (n>=8)
        {
            printf("\nEl alumno %s obtuvo una calificacion mayor o igual a ocho\n" ,str);
        }
        else
        {
            printf("\nCalificacion insufuciente\n");
        }

    }
    return 0;
}
