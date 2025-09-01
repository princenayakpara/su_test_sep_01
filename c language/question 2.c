#include <stdio.h>

int main()
{ int unit,sum,i;
sum = 0;
printf("Enter your electricity units:");
scanf("%d",&unit);

if(unit>=0 && unit<=50){sum= sum + unit*2;}
else if(unit>=51 && unit<=100){sum= sum + unit*3;}
else if(unit>=101 && unit<=200){sum= sum + unit*4;}
else if(unit>=201 && unit<=300){sum= sum + unit*5;}
else if(unit>=301 && unit<=500){sum= sum + unit*6;}
else if(unit>500){sum= sum + unit*8;}

printf("your total electricity bill is %d\n",sum+100);
    return 0;
}