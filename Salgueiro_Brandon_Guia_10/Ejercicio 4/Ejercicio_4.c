#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I=0, TPN=0, N=0, w_cont=0, NT=0, H=0, H_alu=0, su_tp_ap=0, su_ca_n=0, co_alu=0;
    float proG=0, cont=0, proC=0, suPro=0;
    for(I=0;I<50;I++)
    {
        printf("\nIngrese la nota del trabajo practico : ");
        scanf("%d",&TPN);
        if(TPN>6)
            {
                su_tp_ap++;
            }
        do
        {
            cont++;
            printf("Ingrese su nota : ");
            scanf("%d",&N);
            printf("Si no desea agregar mas notas ingrese un numero negativo, de lo contrario positivo : ");
            scanf("%d",&w_cont);
            su_ca_n++;

            NT=NT+N;
        }
        while(0<=w_cont);
         if(su_ca_n<=2)
            {
               co_alu++;
            }
        su_ca_n=0;
        proG= (NT+TPN)/(cont+1);
        printf("\nEL promedio general del alumno %d es de : %.3f", I, proG);
        cont=0;
        NT=0;
        if(proG>H)
        {
            H=proG;
            H_alu=I;
        }
        suPro=suPro+proG;
        proC=(suPro/50);
    }
    printf("\nEl alumno %d tiene el mayor promedio\nEl promedio general del curso es de : %.3f\nLa cantidad de alumnos con dos o menos notas ingresadas es : %d\nLa cantidad de alumnos con el tp aprobado es : %d", H_alu, proC, co_alu, su_tp_ap);
    return 0;
}
