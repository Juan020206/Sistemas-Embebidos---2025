#include <stdio.h>
#include<string>
int num=0,cont=0;
using namespace std;
struct Persona{
    int edad;
    char comp,genero,estudios,casa,name[50];
};
struct Familia{
    Persona integrantes[4];
};


void parse_datos(Persona *reglon_vacio){
    printf("Ingrese su tipo de vivienda: ");
    getchar();
    scanf("%c", &reglon_vacio->casa);
    printf("Ingrese su nombre: ");
    scanf("%s", &reglon_vacio->name);
    printf("Ingrese su edad: ");
    scanf("%d", &reglon_vacio->edad);
    printf("Ingrese su sexo: ");
    getchar();
    scanf("%c", &reglon_vacio->genero);
    printf("Ingrese sus estudios \n(N: no posee, P: primario, S: secundario, T: terciario, U: universitario):");
    getchar();
    scanf("%c", &reglon_vacio->estudios);
    printf("Lo completo ese titulo? (I: incompleto,C: completo):");
    getchar();
    scanf("%c", &reglon_vacio->comp);
};
int get_print_information(Persona persona){
    char print_information = persona.casa;
    printf("%c",Persona.casa);
}



int main(){
    Familia familia;
    Persona persona[1];
    for(int a=0;a<1;a++)
    {
        printf("Intengrante %d:\n",a+1);
        parse_datos(&persona[a]);  
    }
    return 0;
}
