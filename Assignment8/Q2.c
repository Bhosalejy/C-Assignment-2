//To accept student information from the user

#include<stdio.h>

typedef struct student
{
   char name[40];
   int age;
   int std;
}stud_t;

void accept_student(stud_t *s);
void print_student(stud_t *s);

int main(void)
{
  stud_t s;

  accept_student(&s);
  print_student(&s);

return 0;
}

void accept_student(stud_t *s)
{
  printf("Enter students info : name,age,std :");
  scanf("%s%d%d",s->name,&s->age,&s->std);
}

void print_student(stud_t *s)
{
  printf("name=%s\nage=%d\nstd=%d\n",s->name,s->age,s->std);
}

