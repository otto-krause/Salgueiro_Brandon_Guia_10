#include <stdio.h>
#include <stdlib.h>

int main()
{
     int NumFac=0, Cant=0, ProUni=0, NumPro=0, I=0, He1=0, Con=0, CaM=0, He2=0, He3=0;
     while(I<999)
     {
         printf("\nIngrese un numero de factura : ");
         scanf("%d",&NumFac);
         printf("\nIngrese la cantidad que figura : ");
         scanf("%d",&Cant);
         printf("\nIngrese el precio por unidad : ");
         scanf("%d",&ProUni);
         printf("\nIngrese el numero de producto : ");
         scanf("%d",&NumPro);
         if(Cant>He1)
         {
             He1=Cant;
             Con=NumPro;
         }
         NumPro=0;
         CaM=(Cant*ProUni);
         if(CaM>He2)
         {
             He2=CaM;
             He3=NumFac;
         }
         CaM=0;

         NumFac=0;
         ProUni=0;

         I++;
     }
     printf("El producto mas vendido tiene el numero de producto : %d\nLa cantidad del producto vendido es : %d\nEl mayor importe realizado es de : %d\nLa informacion del importe corresponde al numero de factura : %d", Con, He1, He2, He3);
    return 0;
}
