#include <stdio.h>

int main()
{ int i, fact, num;
printf("insert your number:");
scanf("%d",&num);
fact=1;

for(i=1; i<=num; i++){
    fact = fact*i;
}
 printf("facorial of your number is: %d", fact);
return 0;
}