/* Declare a structure called student containing his name, age and address. Create and intialize three structure variables.
Define a function to which these variables are passed. The function should convert the names into uppercase.
Print the resultant structure variables. */

#include<stdio.h>
#include<string.h>

struct student
{
  char name[25];
  int age;
  char address[25];
};
void upperCaseNames(struct student, struct student *, struct student);

int main()
{
  struct student s2;
  struct student s1 = {"srikanth", 16, "India"};
  strcpy(s2.name, "lahr"); s2.age = 15; strcpy(s2.address, "5-3/25, Banglore");
  struct student s3 = {"reddy", 14, "Hyd"};
  
  upperCaseNames(s1, &s2, s3);

  return 0;
}

// for some reason strupr is not working
void upperCaseNames(struct student std1, struct student *std2, struct student std3)
{
  printf("name: %s, age: %d, address: %s\n", std1.name, std1.age, std1.address);
  printf("name: %s, age: %d, address: %s\n", strupr(std2->name), std2->age, std2->address);
  printf("name: %s, age: %d, address: %s\n", strupr(std3.name), std3.age, std3.address);
}
