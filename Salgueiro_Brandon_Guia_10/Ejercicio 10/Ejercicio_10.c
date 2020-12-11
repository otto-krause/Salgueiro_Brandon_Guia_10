#include <conio.h>
#include <stdio.h>

int main()
{
    int Coc, A, B, Resto;

    printf( "\n   Introduzca dividendo : " );
    scanf( "%d", &A );
    printf( "\n   Introduzca divisor : " );
    scanf( "%d", &B );

    if ( A > 0 && B > 0 )
    {
        Coc = 0;
        Resto = A;

        while ( Resto >= B )
        {
            Resto -= B;
            Coc++;
        }

        printf( "\n   %d dividido %d = %d ( Resto = %d )", A, B, Coc, Resto );
    }
    else
        printf( "\n   ERROR: Ambos numeros deben ser mayores que cero.", 163 );

    getch();
    return 0;
}
