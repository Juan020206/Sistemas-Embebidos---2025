#include <iostream>
int Pesototal=0,contador=0,contador2=0,contador3=0,PesoMayor=0,idenMayor=0,Contvacio=0,a=0;
 struct Contenedor{
    int Iden=0,Peso=0,Puerto=0;
 };
void llenar(Contenedor *Contvacio){

    printf("ingrese Indentificacion del container %d:", a+1);
    scanf("%d", &Contvacio->Iden);
    printf("ingrese el peso:");
    scanf("%d", &Contvacio->Peso);
    printf("ingrese el puerto:");
    scanf("%d", &Contvacio->Puerto);

}

 
int main() 
{

int Contvacio = 0;
struct Contenedor Contenedores[5];
struct Contenedor Conts;
for(int a=0;a<5;a++)
{
    llenar(&(Contenedores[a]));
    
    Pesototal+=Contenedores[a].Peso;
    
    if(Contenedores[a].Puerto == 1)
    {
        contador+=1;
    }
    if(Contenedores[a].Puerto == 2)
    {
        contador2+=1;
    }  
    if(Contenedores[a].Puerto == 3)
    {
        contador3+=1;
    }
    if (Contenedores[a].Peso > PesoMayor) {
        PesoMayor=Contenedores[a].Peso;
        idenMayor=Contenedores[a].Iden;
    }
}
printf("El peso total a transportar en el busque es de: %d", Pesototal);
printf("\nCantidad de contenedores por puertos:\nPuerto 1: %d\nPuerto 2: %d\nPuerto 3: %d",contador,contador2,contador3);
printf("\nEl contenier con mayor peso es el: %d",idenMayor);
    

return 0;
}
