//To accept information of student from user and print the same.

#include<stdio.h>

struct student
{
  int rollno;
  char name[20];
  float marks;
};

int main(void)
{
 struct student s1;
 
 printf("Enter rollno :");
 scanf("%d",&s1.rollno);

 printf("Enter name :");
 scanf("%s",s1.name);

 printf("Enter marks :");
 scanf("%f",&s1.marks);

 printf("Enter student details : rollno=%d,name=%s,marks=%2f",s1.rollno,s1.name,s1.marks);

 printf("\n");

 return 0;
}
