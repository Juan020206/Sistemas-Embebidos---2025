#include <iostream>
int main() 
{
int a,valor=0,mayor=0,amayor=0,cant=0,menor=0,amenor=0;
printf("Ingrese la cantidad de valores:");
scanf("%d",&cant);
if (cant>1) 
{
    printf("Ingrese un valor 1: ");
    scanf("%d", &valor);
    mayor=menor=valor;  
    amayor=amenor=1;    
}
for(a=1;a<cant;a++)
{
    printf("Ingrese un valor %d:",a+1);
    scanf("%d",&valor);
    if(valor>mayor)
    {
        mayor=valor;
        amayor=a+1;
    }
    if(valor<menor)
    {
        menor=valor;
        amenor=a+1;
    }
}

printf("El numero de mayor es el: %d\nen el valor %d",mayor,amayor);
printf("\nEl numero de menor es el: %d\nen el valor %d",menor,amenor);
    return 0;
}
