// To create four function calculato Four functions are +, - , *, /

#include<stdio.h>

int main()
{
        float n1,n2,ans;
    	char op;

Here:
        printf("Enter num1 : ");
		scanf("%f",&n1);

		printf("Enter Operand : ");
		scanf("%f",&op);

		printf("Enter num2 : ");
		scanf("%f",&n2);

		switch( op )
		{
		      case '+' : ans = n1+n2;
			       printf("ans : %.2f\n",ans);
				   break;

	   	     case '-' : ans = n1-n2;
                   printf("ans : %.2f\n",ans);
                   break;

			 case '*' : ans = n1*n2;
			       printf("ans : %.2f\n",ans);
                   break;
			 case '/' : ans = n1/n2;
                   printf("ans : %.2f\n",ans);
                   break;
       }
  return 0;
  }
             
			






