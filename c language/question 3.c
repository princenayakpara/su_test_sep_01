#include <stdio.h>

int main()
{ int a, b, c, d, e;
printf("Enter your marks of 5 subjects:");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

int avg = (a+b+c+d+e)/5;
printf("Total percentage:%d\n %", avg);

if(avg>=90){printf("Your grade is A+\n");}
else if(avg>=80){printf("Your grade is A\n");}
else if(avg>=70){printf("Your grade is B\n");}
else if(avg>=60){printf("Your grade is C\n");}
else if(avg>=50){printf("Your grade is D\n");} 
else if(avg>=40){printf("Your grade is E\n");}
else{printf("You are Fail\n");}
    return 0;
}