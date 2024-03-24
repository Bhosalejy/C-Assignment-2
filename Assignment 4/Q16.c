// to print a given number in hexadecimal format.

#include <stdio.h>

void printHex(int num)
{
    printf("0x%X", num);
}

int main()
{
    int num = 255;
    printHex(num);
    
	printf("\n");

    return 0;
}

