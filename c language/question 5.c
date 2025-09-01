#include <stdio.h>

int main()
{ int num, i, reversed = 0, digit;
reversed = 0;
printf("Enter an integer :");
scanf("%d", &num);

i=num;
while(num !=0){digit = num%10;
reversed =reversed *10 +digit;
num /=10;}


if(reversed == i){printf("given number is a palindrome number\n");}
else{printf("given number is not a palindrome number\n");}

 return 0;
}