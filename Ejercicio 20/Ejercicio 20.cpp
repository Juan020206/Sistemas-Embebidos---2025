#include <iostream>
int main() 
{
int a,valor=0,mayor=0,amayor=0;
for(a=0;a<10;a++)
{
    printf("Ingrese un valor %d:",a+1);
    scanf("%d",&valor);
    if(valor>mayor)
    {
        mayor=valor;
        amayor=a+1;
    }
}

printf("El numero de mayor valor es el: %d",amayor);
    return 0;
}
