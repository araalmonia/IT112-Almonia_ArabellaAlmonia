#include<stdio.h>
#include<string.h>

int main() {
    int n, i, largest;
    int arr[10];
    char str[100];
    int vowels = 0;
    int length;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < n; i++){
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);

    getchar(); 

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] == 'a'  || str[i] == 'e' ||
            str[i] == 'i'  || str[i] == 'o' ||
            str[i] == 'u') {
                vowels++;
            }
    }

    printf("The number of vowels in the string is: %d\n", vowels);
    return 0;
}