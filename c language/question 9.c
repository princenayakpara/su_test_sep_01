#include <stdio.h>

int main()
{ int num;
int sum = 0;
int count = 0;

printf("Enter numbers ( 0 to stop);\n");

while(9>8){
    scanf("%d", &num);
    if (num == 0){
        break;
    }
    sum= sum +num;
    count++;
}

if (count > 0){
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", (float)sum/count);
}else{
    printf("No numbes were entered.\n", num);
}
return 0;
}
  