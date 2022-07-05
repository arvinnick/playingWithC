//
// Created by Arvin Nick on 7/5/2022.
//

#include <stdio.h>

/*print Fahrenheit-Celsius tale
 * for fhr = 0 , 20, ... , 300. floating point version*/


main(){
    printf("This is the table of conversion for Celsius to Fahrenheit\n\n\n\n\n\n\n\n");
    float fahr, celsius;
    int lower, upper,step;

    lower = 0;
    upper = 330;
    step = 20;


    for (celsius = upper; celsius >= lower; celsius = celsius - step){
        printf("%f\t%f\n", celsius,(celsius * (9.0/5.0)) + 32);
    }
}