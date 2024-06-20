#include<stdio.h>
unsigned int reverse32bit(int n)
{
	unsigned int result=0;
	for(int i=0;i<32;i++)
	{
		result <<=1;
		result |= n&1;
		n >>=1;
	}
	return result;
}
int main()
{
    unsigned int num = 32768;
    printf("Original: %u\n", num);
    unsigned int reversed = reverse32bit(num);
    printf("Reversed: %u\n", reversed);
    return 0;
}
