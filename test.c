#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperature, Result;
    int kind;
    char back;
	int con;    
    printf("==========================================\n");
    printf("A Simple Program To Convert The Temperature\n"); 
    printf("==========================================\n");
    Repeat: {
	printf("\n");
    printf("Select the temperature unit you want to convert(Please insert the number and not the name) : \n"); 
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Reamur\n");
    printf("4. Kelvin\n");
    printf("Please Select : ");
    scanf("%d", &kind);
    switch(kind)
    {
    case 1:
        printf("Insert the large temperature : "); 
        scanf("%f", &temperature);
       Result=(temperature*1.8)+32;
        printf("Farenheit : %.2f Fahrenheit\n",Result);
       Result=temperature*0.8;
        printf("Reamur   : %.2f Reamur\n",Result);
       Result=temperature+273.15;
        printf("Kelvin    : %.2f Kelvin\n",Result);
        break;
    case 2:
        printf("Insert the large temperature : ");
        scanf("%f", &temperature);
        Result=(temperature-32)/1.8;
        printf("Celcius   : %.2f Celcius\n",Result);
       Result=(temperature-32)/2.25;
        printf("Reamur   : %.2f Reamur\n",Result);
       Result=((temperature-32)/1.8)+273.15;
        printf("Kelvin    : %.2f Kelvin\n",Result);
        break;
    case 3:
        printf("Insert the large temperature : "); 
        scanf("%f", &temperature);
       Result=temperature/0.8;
        printf("Celcius   : %.2f Celcius\n",Result);
       Result=(temperature*2.25)+32;
        printf("Farenheit : %.2f Fahrenheit\n",Result);
       Result=(temperature/0.8)+273.15;
        printf("Kelvin    : %.2f Kelvin\n",Result);
        break;
    case 4:
        printf("Insert the large temperature : ");  
        scanf("%f", &temperature);
       Result=temperature-273.15;
        printf("Celcius   : %.2f Celcius\n",Result);
       Result=((temperature-273.15)*1.8)+32;
        printf("Farenheit : %.2f Fahrenheit\n",Result);
       Result=(temperature-273.15)*0.8;
        printf("Reamur   : %.2f Reamur\n",Result);
    	break;
    default:
    	printf("You have entered the wrong number");
    	break;
    
    }
printf("\n");   
printf("Do you want to continue? press 0 to exit or 1 to continue \n");
scanf("%d",&con);
	if (con == 1)
	
	{
		goto Repeat;
	}
	else
	{
		exit(0);
	}
}
}
