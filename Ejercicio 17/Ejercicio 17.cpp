// Online C++ compiler to run C++ program online
#include <iostream>
float sueldo;
int bajo,medio,alto,muyalto;
int main() {
for(int i=0;i<4;i++)
{
    printf("Ingrese sueldo %d: ", i+1);
    scanf("%f",&sueldo);
    
    if(sueldo<1520){
        bajo+=1;
    }
    
    if(sueldo>1520&sueldo<2780){
        medio+=1;
    }
    
    if(sueldo>2780&sueldo<5999){
        alto+=1;
    }
    
    if(sueldo>5999){
        muyalto+=1;
    }
}

printf("Empleados de Bajo salario:%d\nEmpleados de Salario medio:%d\nEmpleados de Salario Alta:%d\nEmpleados de Salario Muy alto:%d\n",bajo,medio,alto,muyalto);

    return 0;
}
