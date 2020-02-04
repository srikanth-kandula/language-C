/* Write macros for calculating area of circle, circumference of circle, volume of a cone and volume of sphere */

#include<stdio.h>
#define CIRCLEAREA(x) printf("Area of circle = %f\n", 3.14f*x*x)
#define CIRCUMFERENCE(x) printf("Circumference of circle = %f\n", 2*3.14*x)
#define CONEVOLUME(x,h) printf("volume of the cone = %f\n", 3.14*x*x*h/3)
#define VOLUMESPHERE(x,h) printf("volume of the sphere = %f\n", 3.14*x*x*h)

int main()
{
  float radius, height;
  
  printf("Enter radius and height\n");
  scanf("%f", &radius);
  scanf("%f", &height);
  
  CIRCLEAREA(radius);
  CIRCUMFERENCE(radius);
  CONEVOLUME(radius, height);
  VOLUMESPHERE(radius, height);
  
  return 0;
}

// Note: the program would misbehave if integer format specifier is used in macros. Why?
