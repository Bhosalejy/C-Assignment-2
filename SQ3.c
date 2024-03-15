/*
To accept Employee Id , Department No, Designation from user and display
output:
*/

#include<stdio.h>

int main()
{
int empid,deptNo;
char dc;

 printf("Enter Employee id :\n");
 scanf("%d",&empid);

 printf("Enter DeptNo :\n");
 scanf("%d",&deptNo);

 printf("Enter Dc :\n");
 scanf("%c",&dc);

 switch(deptNo)
  {
     case 10: printf("Employee with employee id:%d is working in Marketing department",empid);
	        break;
	
	 case 20: printf("Employee with employee id:%d is working in Management department",empid);
	        break;

	 case 30: printf("Employee with employee id:%d is working in Sales department",empid);
	        break;

	 case 40: printf("Employee with employee id:%d is working in Designing department",empid);
	        break;
  }
 switch(dc)
  {
	 case 'M': printf("as Manager\n");
	        break;

	 case 'S': printf("as Supervisor\n");
	        break;

	 case 's': printf("as Security Officer\n");
	        break;

	 case 'C': printf("as Clerk\n");
	        break;

 }
return 0;   
}
