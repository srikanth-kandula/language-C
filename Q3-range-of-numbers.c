/* write a program to find the range of a set of numbers that are input through the keyboard.
Range is the difference between the smallest and biggest numbers in the list*/

#include<stdio.h>
int main()
{
  int num, smallest=0, largest=0, result, count=0;
  char choice;
  do
  {
    printf("enter a number\n");
    result = scanf("%d", &num);
    while(getchar() != '\n');
    if(!result)
    {
      printf("you have entered an invalid number!\n");
      break;
    }
    
    if(num<smallest)
    {
      smallest = num;
    }
    else if(num>largest)
    {
      largest = num;
    }
    printf("If you want to enter another number enter Y else enter N");
    scanf("%c", &choice);
    count++;
  }while(choice == 'y' || choice == 'Y');
  
  if(count == 1)
  {
    printf("you have entered only one number: %d", num);
  }
  else
  {
    printf("The smallest number you have entered is: %d\nThe largest number you have entered is: %d", smallest, largest);
  }
  return 0;
}
