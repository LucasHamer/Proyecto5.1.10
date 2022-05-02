#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,cant,pos=0,neg=0,ceros=0,sumapos=0,sumaneg=0;
    float prompos=0,promneg=0;

    printf("Ingrese la cantidad de numeros a calcular: ");
    scanf("%d",&cant);
    printf("\n");

    for(i=0;i<cant;i++)
    {
        printf("Ingrese valores enteros menores que 12: ");
        scanf("%d",&num);

        if(num>12)
        {
            printf("VALOR EXCEDIDO\n");
        }
        else
        {
            if(num>0)
            {
                pos++;
                sumapos=sumapos+num;
                prompos=(float)sumapos/pos;
            }
            if(num<0)
            {
                neg++;
                sumaneg=sumaneg+num;
                promneg=(float)sumaneg/neg;
            }
            if(num==0)
            {
                ceros++;
            }
        }
    }
        printf("Promedio de positivos: %.2f\n",prompos);
        printf("Promedio de negativos: %.2f\n",promneg);
        printf("Cantidad de ceros: %d\n",ceros);

    return 0;
}
