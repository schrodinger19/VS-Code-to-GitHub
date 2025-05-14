#include<stdio.h>
#include<stdbool.h>

float convertToCelcius(float fahrenheit){
    float celcius = (5.0/9.0)*(fahrenheit - 32.0);
    return celcius;
}

int main(){

    float tempC[10];
    float tempF[10];
    
    printf("Type the temperature in fahrenheit: ");

    for(int i = 0; i < 10; i++){
        float x;
        scanf("%f", &x);
        tempF[i] = x;
        tempC[i] = convertToCelcius(x);
    }

    for (int i = 0; i<10; i++){
        printf("Temperature in celcius is %0.2f corressponding to %0.1f temperature in fahrenheit\n", tempC[i], tempF[i]);
    }



    return 0;
}