#include <stdio.h>

int main()
{ int num, i, sum = 0, digit;
sum = 0;
printf("Enter an integer :");
scanf("%d", &num);

i=num;
while( i > 0){
    digit = i % 10;
    sum = sum + digit;
    
    i = i/10;}
    
    printf("Sum of the digits: %d", sum);
 return 0;
}