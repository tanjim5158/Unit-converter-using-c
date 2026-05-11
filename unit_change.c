#include <stdio.h>
#include <string.h>
float kmm(float M);
float cmm(float inch);
float poundm(float kg);
float fm(float c);
int main(){
    float M, inch, kg, c;
    char km, cm, pound, f;
    printf("Enter the unit you want to convert to (km, cm, pound, f):");
    char user_choice[10];
    scanf("%s", user_choice);
    if(strcmp(user_choice, "km") == 0){
        printf("Enter the value in miles:");
        scanf("%f", &M);
        printf("The value in kilometers is: %f", kmm(M));
    }
    else if(strcmp(user_choice, "cm") == 0){
        printf("Enter the value in inches:");
        scanf("%f", &inch);
        printf("The value in centimeters is: %f", cmm(inch));
    }
    else if(strcmp(user_choice, "pound") == 0){
        printf("Enter the value in kilograms:");
        scanf("%f", &kg);
        printf("The value in pounds is: %f", poundm(kg));
    }
    else if(strcmp(user_choice, "f") == 0){
        printf("Enter the value in Celsius:");
        scanf("%f", &c);
        printf("The value in Fahrenheit is: %f", fm(c));
    }

return 0;
}
float kmm(float M){
    return M * 1.609;
}
float cmm(float inch){
    return inch * 2.54;
}
float poundm(float kg){
    return kg * 2.205;
}
float fm(float c){
    return (c * 9/5) + 32;
}