#include<stdio.h>
int main(void)
{

	char buffer[98] = {0x50};

	printf("buffer[1]: adress: %p %02x\n", &buffer[848] ,buffer[848]);


	return (0);
}
