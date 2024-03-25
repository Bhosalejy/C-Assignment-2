#include <stdio.h>
#include <string.h>

void acceptNames(char names[5][20]) 
{
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) 
	{
        scanf("%s", names[i]);
    }
}

void printNames(char names[5][20]) 
{
    printf("Student names:\n");
    for (int i = 0; i < 5; i++)
	{
        printf("%s", names[i]);
    }
}

void sortNames(char names[5][20])
{
    char temp[20];
    for (int i = 0; i < 4; i++)
	{
        for (int j = 0; j < 4-i; j++)
		{
            if (strcmp(names[j], names[j+1]) > 0)
			{
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
}

int main()
{
    char names[5][20];
    
    acceptNames(names);
    
    printf("\n");
    
    printNames(names);
    
    printf("\n");
    
    sortNames(names);
    
    printf("Sorted student names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s", names[i]);
    }
    
    return 0;
}
