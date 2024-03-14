// find maximum of three numbers
   // If - else
  
   #include<stdio.h>
  
   int main()
   {
   int n1 = 10 ,n2 = 20 ,n3 = 30;
/*  
     printf("Enter the num : ");
     scanf("%d", &n1);
     printf("Enter the num : ");
     scanf("%d", &n2);
     printf("Enter the num : ");
     scanf("%d", &n3);
 */
 
  if(n1 > n2)
  {
      if( n1 > n3 )
         printf("Num1 is Greater : %d\n", n1);
  else
         printf("Num3 is Greater : %d\n",n3);
  }
  else
  {
  if(n2 > n3)
          {
         printf("Num2 is Greater : %d\n",n2);
          }
  else
        {
         printf("Num3 is Greater : %d\n",n3);
     }
  }
 
 
  //Conditional operator
  {
 int  n1 = 10 , n2 = 20, n3 = 40, max;
 
  max = (n1 > n2)? ((n1 > n3)? n1 : n3) : ((n2 > n3)? n2 : n3);
 
          printf("max = %d\n",max);
 
 
  }
    return 0 ;
  }

