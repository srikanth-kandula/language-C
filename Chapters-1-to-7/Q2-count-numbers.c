/* Question 2 - write a program to enter the numbers till the user wants and at the end
it should display the count of positive, negative and zeros entered */

#include<stdio.h>
int main()
{
  int number, positives = 0, negatives = 0, zeros = 0;
  char choice;
  
  printf("Hello! Enter a number you like.\n");
  do
  {
    /* you must verify the scanf() evaluation result. Else if a non-integer value is given as input to the program,
    the input stream doesn't clear for next loops and the program enters an infinite loop*/
    int result = scanf("%d", &number);
    /*you must clear the input stream buffer, else next scanf() in the loop might use the buffer of previous input buffer 
    but not the desired input buffer. -> https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/ */
    while ((getchar()) != ‘\n’); 
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
