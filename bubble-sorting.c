/* bubble sorting */

#include <stdio.h>
#define ARRAYLENGTH 5

void swap(int *, int *);

int main()
{
    int a[ARRAYLENGTH], *p;
    
    printf("enter %d integer numbers\n", ARRAYLENGTH);
    
    for(int i=0; i<ARRAYLENGTH; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int j=ARRAYLENGTH; j>1; j--)
    {
        for(int k=0; k<j-1; k++)
        {
            if(a[k]>a[k+1])
                swap(&a[k], &a[k+1]);
        }
        printf("loop %d completed", j);
    }
    
    printf("sorted numbers:\n");
    for(int i=0; i<ARRAYLENGTH; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    /* printf("\nno.s to be swapped are : %d, %d", *p, *q);
    printf("\ntemp = %d", temp);*/
    *p = *q;
    *q = temp;
    // printf("\nswapped numbers are: %d, %d", *p, *q);
}
