#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y=0, m=0, d=0, i=0, mm=0;
    do
    {
        printf("Ingrese un año : ");
        scanf("%d", &y);
         if (y%4==0)
        {
            printf("Ingrese un mes : ");
            scanf("%d", &m);
            switch(m)
            {
                  case 1:
                    mm=1;
                break;
                case 2:
                    mm=3;
                break;
                case 3:
                    mm=1;
                break;
                case 4:
                    mm=2;
                break;
                case 5:
                    mm=1;
                break;
                case 6:
                    mm=2;
                break;
                case 7:
                    mm=1;
                break;
                case 8:
                    mm=1;
                break;
                case 9:
                    mm=2;
                break;
                case 10:
                    mm=1;
                break;
                case 11:
                    mm=2;
                break;
                case 12:
                    mm=1;
                break;
                default:
                    printf("Error");
            }

            switch(mm)

                {    case 1:
                            printf("Ingrese un dia : ");
                            scanf("%d", &d);
                            if (d<32&&d>0)
                            {
                                 printf("\nLa siguiente fecha %d /%d /%d Es valida. Y el año es bisiesto",d,m,y);
                            }
                            else
                            {
                                printf("Error");
                            }
                     break;
                     case 2:
                            printf("Ingrese un dia : ");
                            scanf("%d", &d);
                            if (d<31&&d>0)
                            {
                                 printf("\nLa siguiente fecha %d /%d /%d Es valida. Y el año es bisiesto",d,m,y);
                            }
                            else
                            {
                                printf("Error");
                            }
                     break;
                     case 3:
                            printf("Ingrese un dia : ");
                            scanf("%d", &d);
                            if (d<30&&d>0)
                            {
                                 printf("\nLa siguiente fecha %d /%d /%d Es valida. Y el año es bisiesto",d,m,y);
                            }
                            else
                            {
                                printf("Error");
                            }
                     break;
                }

        }
        else
        {
             printf("Ingrese un mes : ");
            scanf("%d", &m);
            switch(m)
            {
                  case 1:
                    mm=1;
                break;
                case 2:
                    mm=3;
                break;
                case 3:
                    mm=1;
                break;
                case 4:
                    mm=2;
                break;
                case 5:
                    mm=1;
                break;
                case 6:
                    mm=2;
                break;
                case 7:
                    mm=1;
                break;
                case 8:
                    mm=1;
                break;
                case 9:
                    mm=2;
                break;
                case 10:
                    mm=1;
                break;
                case 11:
                    mm=2;
                break;
                case 12:
                    mm=1;
                break;
                default:
                    printf("Error");
            }

            switch(mm)

                {    case 1:
                            printf("Ingrese un dia : ");
                            scanf("%d", &d);
                            if (d<32&&d>0)
                            {
                                 printf("\nLa siguiente fecha %d /%d /%d Es valida.",d,m,y);
                            }
                            else
                            {
                                printf("Error");
                            }
                     break;
                     case 2:
                            printf("Ingrese un dia : ");
                            scanf("%d", &d);
                            if (d<31&&d>0)
                            {
                                 printf("\nLa siguiente fecha %d /%d /%d Es valida.",d,m,y);
                            }
                            else
                            {
                                printf("Error");
                            }
                     break;
                     case 3:
                            printf("Ingrese un dia : ");
                            scanf("%d", &d);
                            if (d<29&&d>0)
                            {
                                 printf("\nLa siguiente fecha %d /%d /%d Es valida.",d,m,y);
                            }
                            else
                            {
                                printf("Error");
                            }
                     break;
                }

        }
        printf("\nIngrese un valor negativo para terminar, de lo contrario ingrese uno positivo : ");
        scanf("%d", &i);
    }
    while(i>0);
    return 0;
}
