/* Write a program to count number of words in a given text file */

#include "stdio.h"
int main()
{
  FILE *fp;
  int wordCount=0;
  char previousChar;

  fp = fopen("names.txt", "r");
  if(fp == NULL)
  {
    printf("can't open file");
    exit(1);
  }
  else
  {
    
    while(1)
    {
      char ch;
      ch = fgetc(fp);

      if(previousChar == ch == ' ')
        printf("multiple spaces are present between words\n");
      else{
        previousChar = ch;
        if(ch == ' ')
          wordCount++;
        else if(ch == EOF)
          break;
      }
    }
  
  }

  printf("Number of words in the file are %d", wordCount);

  return 0;
}