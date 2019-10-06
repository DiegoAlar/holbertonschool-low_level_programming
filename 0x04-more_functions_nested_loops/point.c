#include <stdio.h>
int main(void)
{
int n = 98;
int *p = &n;
printf("%x\n", *p);
printf("%i\n", p);
*p++;
p++;
printf("%x\n", *p);
printf("%i\n", p);
	return (0);
}
