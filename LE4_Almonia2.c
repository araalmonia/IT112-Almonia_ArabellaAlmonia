#include <stdio.h>

int main() {
    char name[50];
    char section[20];

    float d1, d2, d3, d4;
    float average;

    printf("Enter Your complete name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Your complete Section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter 1st quarter grade: ");
    scanf("%f", &d1);
    printf("Enter 2nd quarter grade: ");
    scanf("%f", &d2);
    printf("Enter 3rd quarter grade: ");
    scanf("%f", &d3);
    printf("Enter 4th quarter grade: ");
    scanf("%f", &d4);

    average = (d1 + d2 + d3 + d4) / 4;

    printf("\n Student: %s", name);
    printf("section: %s", section);
    printf("General average: %.2f\n", average);

    if (average <= 100 && average >= 90) {
        printf("Remarks: Outstanding\n");
    }

    else if (average <= 89 && average >= 85) {
        printf("Remarks: Very Satisfactory\n");
    }

    else if (average <= 84 && average >= 80) {
        printf("Remarks: Satisfactory\n");
    }

    else if (average <= 79 && average >= 75) {
        printf("Remarks: Fair\n");
    }

    else if (average <= 74 && average >= 0) {
        printf("Remarks: Failed\n");
    }
    
return 0;
}