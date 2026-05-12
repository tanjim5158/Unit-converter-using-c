#include <stdio.h>
#include <stdlib.h>

void convertLength(void);
void convertWeight(void);
void convertTemperature(void);

int main(void) {
    int choice;
    
    printf("WELCOME TO UNIT CONVERTER\n");
    printf("'1' for length convert\n");
    printf("'2' for weight converter\n");
    printf("'3' for temperature converter\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: convertLength(); break;
        case 2: convertWeight(); break;
        case 3: convertTemperature(); break;
        default: printf("Invalid choice!\n");
    }
    
    return 0;
}

void convertLength(void) {
    int opt;
    double val, result;
    
    printf("'1' for mile to km\n");
    printf("'2' for inch to cm\n");
    printf("'3' for km to mile\n");
    printf("'4' for cm to inch\n");
    printf("Your choice? ");
    scanf("%d", &opt);  // Removed \n
    printf("Enter the value: ");
    scanf("%lf", &val);  // Removed \n
    
    switch(opt) {
        case 1: 
            result = val * 1.609;
            printf("%.4g mile = %.6g km\n", val, result);
            break;
        case 2: 
            result = val * 2.54;
            printf("%.4g inch = %.6g cm\n", val, result);
            break;
        case 3: 
            result = val * 0.621371;  // Fixed conversion factor
            printf("%.4g km = %.6g mile\n", val, result);
            break;
        case 4: 
            result = val * 0.393701;  // More accurate (1 cm = 0.393701 inch)
            printf("%.4g cm = %.6g inch\n", val, result);
            break;
        default: 
            printf("Invalid option!\n");
    }
}

void convertWeight(void) {
    int opt;
    double val, result;
    
    printf("'1' for kg to pound\n");
    printf("'2' for pound to kg\n");
    printf("Your choice: ");
    scanf("%d", &opt);
    printf("Enter value: ");
    scanf("%lf", &val);
    
    switch(opt) {
        case 1: 
            result = val * 2.20462;  // More accurate
            printf("%.4g kg = %.6g pound\n", val, result);
            break;
        case 2: 
            result = val * 0.453592;  // More accurate (1 lb = 0.453592 kg)
            printf("%.4g pound = %.6g kg\n", val, result);
            break;
        default: 
            printf("Invalid option!\n");
    }
}

void convertTemperature(void) {
    int opt;
    double val, result;
    
    printf("'1' for F to C\n");
    printf("'2' for C to F\n");
    printf("Your choice: ");
    scanf("%d", &opt);
    printf("Enter value: ");
    scanf("%lf", &val);
    
    switch(opt) {
        case 1: 
            result = (val - 32) * 5.0 / 9.0;
            printf("%.4g F = %.6g C\n", val, result);
            break;
        case 2: 
            result = (val * 9.0 / 5.0) + 32;
            printf("%.4g C = %.6g F\n", val, result);
            break;
        default: 
            printf("Invalid option!\n");
    }
}