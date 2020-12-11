#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ANA=0, SM=0, SF=0, ED=0, Lo=0;
    unsigned char S;
    float PorM=0, CaT=0, CaMe=0;
    long DNI=0;
    do
    {
        printf("Ingrese su sexo : ");
        while ((getchar()) != '\n');
        printf("\nY Confirme su sexo, por favor: ");
        S = getchar();
        switch(S)
        {
        case 'm': case 'M':
            SM++;
        break;
        case 'f': case 'F':
            SF++;
            break;
        default :
            printf("ERROR");
        }
        printf("\nIngrese su año de nacimiento : ");
        scanf("%d" ,&ANA);
        ED=(2020 - ANA);
        CaT++;
        if(ED<19)
        {
            CaMe++;
        }
        printf("Ingrese un DNI con valor cero o negativo para terminar.\nIngrese su DNI :");
        scanf("%d", &DNI);
        if(DNI<30000000)
        {
            Lo++;
        }
    }
    while(DNI>1);
    PorM=(CaMe*100/CaT);
    printf("En el grupo hay %d Masculinos y %d Femeninos\nEl porcentaje de menores del grupo es: %.3f\nLa cantidad con DNI inferior a 30M es: %d", SM, SF, PorM, Lo);
    return 0;
}
