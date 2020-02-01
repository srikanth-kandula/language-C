/* if threee integers are entered through the keyboard, write a program to determine whether they form a Pythogorean triplet or not */

#include<stdio.h>
int pythogorean(int, int, int)
int main()
{
  int a,b,c,max;
  bool output;
  
  printf("enter three numbers\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  if(a>b)
  {
    if(a>c)
      output = pythogorean(a,b,c);
    else
      output = pythogorean(c,a,b);
  }
  else if(b>c)
    output = pythogorean(b,a,c);
    else
      output = pythogorean(c,a,b);
  if(output)
    printf("\nentered numbers form a pythogorean triplet");
  else
    printf("\nentered numbers DO NOT form a pythogorean triplet");
  return 0;
}

int pythogorean(int max, int num1, int num2)
{
    return (max*max) == ((num1*num1) + (num2*num2));
}
