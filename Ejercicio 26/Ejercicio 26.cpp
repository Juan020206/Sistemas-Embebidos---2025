#include <iostream>

int main() 
{

 struct Contenedor{
    int Iden=0,Peso=0,Puerto=0;
 };
 int Pesototal=0,contador=0,contador2=0,contador3=0,PesoMayor=0,idenMayor=0;
 struct Contenedor Contenedores[5];
 for(int a=0;a<5;a++)
 {
    struct Contenedor Conts;
    printf("ingrese Indentificacion del container %d:", a+1);
    scanf("%d", &Conts.Iden);
    printf("ingrese el peso:");
    scanf("%d", &Conts.Peso);
    printf("ingrese el puerto:");
    scanf("%d", &Conts.Puerto);
    Contenedores[a]=Conts;
    Pesototal+=Conts.Peso;
    if(Conts.Puerto == 1)
    {
        contador+=1;
    }
    if(Conts.Puerto == 2)
    {
        contador2+=1;
    }  
    if(Conts.Puerto == 3)
    {
        contador3+=1;
    }
    if (Conts.Peso > PesoMayor) {
        PesoMayor=Conts.Peso;
        idenMayor=Conts.Iden;
    }
    
    
 }
printf("El peso total a transportar en el busque es de: %d", Pesototal);
printf("\nCantidad de contenedores por puertos:\nPuerto 1: %d\nPuerto 2: %d\nPuerto 3: %d",contador,contador2,contador3);
printf("\nEl contenier con mayor peso es el: %d",idenMayor);
    return 0;
}
