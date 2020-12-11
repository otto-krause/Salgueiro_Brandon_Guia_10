#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, N;
        printf("Introduzca un numero: ");
        scanf("%d", &N);
        if(N<11&&N>0)
        {
              printf("La tabla de multiplicar de %d es:\n", N);
        for (I=1;I<=10;I++)
        {
            printf( "\n%d*%d=%d", I, N, I*N);
        }

        }

    return 0;
}

