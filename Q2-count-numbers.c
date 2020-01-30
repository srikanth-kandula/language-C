/* Question 2 - write a program to enter the numbers till the user wants and at the end
it should display the count of positive, negative and zeros entered */

#include<stdio.h>
int main()
{
  int number, positives = 0, negatives = 0, zeros = 0;
  char choice;
  
  printf("Hello! Enter numbers you like. Write \"N\" if you want to stop entering the numbers\n");
  do
  {
    int result = scanf("%d", &number);
    if (result != 1)
    {
      printf("Last call to scanf() failed; exiting\n");
      break;
    }
    if(number > 0)
    {
        positives++;
    }
    else if(number < 0)
    {
        negatives++;
    }
    else if(number == 0)
    {
        zeros++;
    }
    
    printf("Enter Y if you would like to enter another number else enter N");
    scanf("%c", &choice);

  } while(choice == 'y' || choice == 'Y');
  
  printf("You have entered \nPositive Numbers = %d\n Negative Numbers = %d\n Zeros = %d\n", positives, negatives, zeros);
  
  return 0;
}
