//
// Created by Arvin Nick on 7/5/2022.
//

#include <stdio.h>

/*print Fahrenheit-Celsius tale
 * for fhr = 0 , 20, ... , 300. floating point version*/


main(){
    printf("This is the table of conversion for Fahrenheit to Celsius\n\n\n\n\n\n\n\n");
    float fahr, celsius;
    int lower, upper,step;

    lower = 0;
    upper = 330;
    step = 20;

    fahr = lower;

    while (fahr <= upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%f\t%f\n", fahr,celsius);
        fahr = fahr + step;
    }
}