/* define a function that receives 4 integers and returns sum, product and average of these integers */

#include<stdio.h>
int * arithmeticOperations(int *);
int main()
{
  int a[4], result, *p;
  printf("enter four integers\n");
  for(int i=0; i<4; i++)
  {
    result = scanf("%d", &a[i]);
    if(!result)
    {
      printf("you have entered an invalid integer\n");
      break;
    }
  }
  p = arithmeticOperations(a);
  printf("sum = %d\nproduct = %d\naverage = %d\n", *p, *(p+1), *(p+2));

  return 0;
}

int * arithmeticOperations(int *q)
{
  static int arith[3];

  arith[0] = *q + *(q + 1) + *(q + 2) + *(q + 3);
  arith[1] = *q * *(q + 1) * *(q + 2) * *(q + 3);
  arith[2] = arith[0]/4;
  
  /* you store an address in a pointer. Hence when you specify return type as pointer (i.e. returned value will be stored in a pointer)
  you return the address from the function.
  equivalent code is:
                      int arith[3];
                      static int *m;
                      m = &arith[0];
                      return m; */
  
  return &arith[0];
}
