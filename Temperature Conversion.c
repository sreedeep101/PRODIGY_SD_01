#include<stdio.h>

int main()
{
    float celsius , kelvin , fahrenheit ;
    int choice ;
    printf("1. kelvin-->degree celcius\n \n");
    printf("2. kelvin-->Fahrenheit\n \n");
    printf("3. Fahrenheit-->degree celcius\n \n");
    printf("4. Fahrenheit-->kelvin\n \n");
    printf("5. degree celcius-->Fahrenheit\n \n");
    printf("6. degree celcius-->kelvin\n \n");
    printf("select any temperature conversion from it.\n");
    scanf("%d",&choice);
    switch (choice){
    case 1:
    printf("\nenter temperature value \nin kelvin scale \n");
    scanf("%f",& kelvin);
    celsius = kelvin - 273.15;
    printf("\nconverted temperature in celcius scale\n %.2f",celsius);
    break;
    case 2:
    printf("\nenter temperature value \nin kelvin scale \n");
    scanf("%f",& kelvin);
    fahrenheit = (kelvin-273.15) * 1.8 + 32;
    printf("\nconverted temperature in Fahrenheit scale\n");
    printf(" %.2f ",fahrenheit);
    break;
    case 3:
    printf("\nenter temperature value \nin fahrenheit scale \n");
    scanf("%f",& fahrenheit);
    celsius =  (fahrenheit-32)* 0.5555555555555;
    printf("\nconverted temperature in \ndegree celcius \n");
    printf(" %.2f ",celsius);
    break;
    case 4:
    printf("\nenter temperature value \nin fahrenheit scale \n");
    scanf("%f",& fahrenheit);
    kelvin = (fahrenheit-32) * 0.5555555555555 + 273.15;
    printf("\nconverted temperature in \nkelvin scale \n");
    printf(" %.2f ",kelvin);
    break;
    case 5:
    printf("\nenter temperature value \nin degree celcius \n");
    scanf("%f",& celsius );
    fahrenheit = (celsius * 1.8) + 32 ;
    printf("\nconverted temperature in \nfahrenheit scale \n");
    printf(" %.2f ",fahrenheit);
    break;
    case 6:
    printf("\nenter temperature value \nin degree celcius \n");
    scanf("%f",& celsius );
    kelvin = celsius + 273.15 ;
    printf("\nconverted temperature in \nkelvin scale \n");
    printf(" %.2f ", kelvin);
    break;
    default:
    printf("\nthere are no such choice\n");
    break;
}
}
