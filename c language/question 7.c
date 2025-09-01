#include <stdio.h>
#include <math.h>

int main() {
    int num, i, digit, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    i = num;
    
    while (i != 0) {
        i /= 10;
        n++;
    }

    i = num;
    
    while (i != 0) {
        digit = i % 10;
        result += pow(digit, n);
        i /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

return 0;
}