#include <stdio.h>

int main() {
    char name[50];
    char section[20];
    float num1, num2, num3, num4, average;
    
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);
    
    printf("\nEnter First Quarter Grade: ");
    scanf("%f", &num1);
    
    printf("Enter Second Quarter Grade: ");
    scanf("%f", &num2);
    
    printf("Enter Third Quarter Grade: ");
    scanf("%f", &num3);
    
    printf("Enter Fourth Quarter Grade: ");
    scanf("%f", &num4);
    
    average = (num1 + num2 + num3 + num4) / 4.0;
    
    printf("\nStudent: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    if (average >= 90 && average <= 100)
        printf("Remarks: Outstanding\n");
        
    else if(average >= 85 && average <= 89)
        printf("Remarks: Very Satisfactory\n");
        
        
    else if(average >= 80 && average <= 84)
        printf("Remarks: Satisfactory\n");
        
        
    else if(average >= 75 && average <= 79)
        printf("Remarks: Fair\n");
        
        
    else
        printf("Remarks: Failed\n");
        
    
    

    return 0;
}