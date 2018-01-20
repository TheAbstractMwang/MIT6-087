/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Michael Wang
 *
 * Created on January 20, 2018, 1:30 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Section 1.2
 */
int main(int argc, char** argv) {
    
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("FAHRENHEIT TO CELSIUS CONVERSION TABLE \n\n");
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n\n");
    
    printf("CELSIUS TO FAHRENHEIT CONVERSION TABLE \n\n");
    celsius = lower;
    while(celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.1f\t%3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return (EXIT_SUCCESS);
}

