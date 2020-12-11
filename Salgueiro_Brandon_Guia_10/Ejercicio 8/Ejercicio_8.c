int main()
{
    int i,num1,num2,Aux,sum=0;
    printf("ingrese un numero:");
    scanf("%d", &num1);
    printf("\nIngrese un numero:");
    scanf("%d", &num2);
    if(num1<num2)
    {
         for(num1;num1<=num2;num1=num1+5)
    {
        printf(" %d ",num1);
        sum = sum +num1;
    }
    }

    printf("\nLa suma de los multiplos de 5 es %d ",sum);
   return 0;
}
