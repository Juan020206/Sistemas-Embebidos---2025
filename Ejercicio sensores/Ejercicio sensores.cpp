#include <iostream>
#define num 5
using namespace std;
string sensorvacio;
int suma=0;
float prom=0;
 struct Sensor{
    int sensor_id=0,timestamp=0,value_type=0,value=0;
 };
void llenar(Sensor *sensorvacio){
    printf("\ningrese Indentificacion del sensor:");
    scanf("%d", &sensorvacio->sensor_id);
    printf("ingrese la Fecha y hora:");
    scanf("%d", &sensorvacio->timestamp);
    printf("ingrese el tipo de valor:");
    scanf("%d", &sensorvacio->value_type);
    printf("ingrese el valor:");
    scanf("%d", &sensorvacio->value);
}
int get_highest_value(Sensor sensores[])
{
    int get_highest_value=sensores[0].value,get_highest_id=0;
    for(int i=0;i<5;i++)
    {
        if(sensores[i].value>get_highest_value)
        {
            get_highest_value=sensores[i].value;
            get_highest_id=sensores[i].sensor_id;
        }
        
    }
    
}
int get_lowest_value(Sensor sensores[])
{
    int get_lowest_id=0,get_lowest_value=sensores[-50];
    for(int i=0;i<5;i++)
    {
        if(sensores[i].value<get_lowest_value)
        {
            get_lowest_value=sensores[i].value;
            get_lowest_id=sensores[i].sensor_id;
        }
        
    }

}
 
int main() 
{
int sensorvacio = 0;
struct Sensor sensores[num];
struct Sensor sen;
for(int a=0;a<num;a++)
{
    printf("Sensor %d",a+1);
    llenar(&(sensores[a]));
    get_highest_value(&(sensores[]))
    get_lowest_value(&(sensores[]))
    
    suma+=sensores[a].value;
}
prom=suma/5;
printf("El sensor %d tiene el valor mas alto el cual es: %d",get_highest_id,get_highest_value);
printf("\nEl sensor %d tiene el valor mas bajo el cual es: %d",get_lowest_id,get_lowest_value);
printf("\nEl promedio de los valores es: %d",prom);
return 0;
}
