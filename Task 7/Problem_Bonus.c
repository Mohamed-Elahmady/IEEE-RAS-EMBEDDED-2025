#include <stdio.h>
#include <stdlib.h>

typedef union
{
    int Temp;
    float Pressure;
    float Distance;
    char Status;
}Sensor_Value;

typedef enum{
    Temperature = 'T',
    Pressure = 'P', 
    Displacment = 'D',
}Sen_type;

typedef struct
{
    int Sensor_id;
    char Sensor_Type;
    Sensor_Value Val;
}Sensor_Data;

void Sensor_init(Sensor_Data *Sensor);
void print_sensor_data(Sensor_Data Sensor);    

int main(){
    Sensor_Data Sen1;
    Sensor_init(&Sen1);
    print_sensor_data(Sen1);
    return 0;
}

void Sensor_init(Sensor_Data *Sensor){
    printf("Enter Sensor id : ");
    scanf("%d", &(Sensor->Sensor_id));
    printf("Enter Sensor Type \"T,P,D\" : ");
    scanf(" %c", &(Sensor->Sensor_Type));
    switch (Sensor->Sensor_Type)
    {
    case 'T':
        Sensor->Val.Temp = 22;
        break;
    case 'P':
        Sensor->Val.Pressure = 131.4;
        break;
    case 'D':
        Sensor->Val.Distance = 13;
        break;
    default:
        printf("invalid Sensor Type ;(\n");
        break;
    }
}

void print_sensor_data(Sensor_Data Sensor){
    printf("===================================================\n");
    printf("Sensor id = %d\n", Sensor.Sensor_id);
    printf("Sensor Type = %s\n", (Sensor.Sensor_Type == 'T')? "Temperature" : (Sensor.Sensor_Type == 'P') ? "Pressure" : "Distance");
    switch (Sensor.Sensor_Type)
    {
    case 'T':
        printf("Temperature = %d\n",Sensor.Val.Temp);
        break;
    case 'P':
        printf("Pressure = %f\n",Sensor.Val.Pressure);
        break;
    case 'D':
        printf("Distance = %f\n",Sensor.Val.Distance);
        break;
    
    default:
        break;
    }
    printf("===================================================\n");
}