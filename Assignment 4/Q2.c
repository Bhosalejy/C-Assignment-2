// To calculate power.

#include<stdio.h>

int mpower(int, int);

int main(void)
{
	int num;
	int base, index;

	printf("Enter base and index : ");
	scanf("%d %d", &base, &index);
	
	printf("%d ^ %d = %d\n", base, index, mpower(base, index));
	
	return 0;
}

int mpower(int base, int index)
{
	int p = 1;
	for(int i = 1 ; i <= index ; i++)
		p *= base;
	return p;
}
