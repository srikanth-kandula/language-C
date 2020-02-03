/* Write a recursive function which prints the prime factors of the number that it receives when called from main() */

#include<stdio.h>
void primeFactors(int);
int isPrime(int);

int main()
{
  int n;
  
  printf("Enter a number to find it\'s prime factors\n");
  scanf("%d", &n);
  
  if(n==1)
  {
      printf("The only factor of 1 is 1");
  }
  else
  {
    printf("Prime factors of %d are\n", n);
    primeFactors(n);
  }

  return 0;
}

void primeFactors(int m)
{
  int result;
  
  if(m==2 || m==3)
    printf("%d\n", m);
  else
  {
     int divisible = 0, factor;
     for(int i=2; i<=(m/2+1); i++)
      { 
        if(m%i == 0)
        {
          divisible = 1;
          result = isPrime(i);
          if(result)
          {
            printf("%d\n", i);
            factor = m/i;
             if(factor==2 || factor==3)
             {
               
               printf("%d\n", factor);
               break;
             }
             else
             {
               primeFactors(factor);
               break;
             }
          }
        }
      }
        if(!divisible)
          printf("%d\n", m);
  }

}

int isPrime(int p)
{
  int result = 0;
  if(p==2 || p==3)
    result = 1;
  else
  {
    int divisible = 0;
    for(int i=2; i<=p/2; i++)
    {
      if(p%i == 0)
      {
        divisible = 1;
        break;
      }
    }
    if(!divisible)
      result = 1;
  }
  return result;
}
