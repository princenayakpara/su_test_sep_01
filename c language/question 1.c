#include <stdio.h>

int main()
{ char ch;
  printf("enter your character\n");
  scanf("%c",&ch);
  if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
  printf("it is an alphabet\n");
  else if(ch>='0' && ch<='9')
  printf("it is a digit\n");
  else
  printf("it is aspecial symbol\n");
    return 0;
}
