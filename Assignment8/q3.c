to accept array of student’s information from the user.

#include <stdio.h>

struct Student 
{
    char name[50];
    int age;
    char gender;
};

void getStudentInfo(struct Student students[], int numStudents)
{
    for (int i = 0; i < numStudents; i++)
	{
        printf("Enter student %d's name: ", i+1);
        scanf("%s", &students[i].name);

        printf("Enter student %d's age: ", i+1);
        scanf("%d", &students[i].age);

        printf("Enter student %d's gender (M/F): ", i+1);
        scanf(" %c", &students[i].gender);
    }
}

void printStudentInfo(struct Student students[], int numStudents)
{
    printf("Student Information:\n");
    for (int i = 0; i < numStudents; i++)
	{
       printf("Name: %s\n", students[i].name);
       printf("Age: %d\n", students[i].age);
       printf("Gender: %c\n", students[i].gender);
       printf("\n");
    }
}

int main()
{
    int numStudents;

    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    getStudentInfo(students, numStudents);
    printStudentInfo(students, numStudents);

    return 0;
}
