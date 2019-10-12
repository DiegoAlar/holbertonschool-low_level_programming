#include <stdio.h>

int positionOfNumber(char *largeString)
{
	int i = 0, k = 0;
	while (largeString[i] != 0)
	{
		if (largeString[i] > 47 && largeString[i] < 58)
		{
			k = i;
			break;
		}
		i++;
	}
	return i;
}
int findingSize(char *largeString)
{
	int i = positionOfNumber(largeString), count = 0;
	int sw = 1;

	while (sw == 1)
	{
		if (largeString[i] > 47 && largeString[i] < 58)
		{
			count++;
		}
		else
		{
			sw = 0;
		}
		i++;
	}
	return count;
}

int main(void)
{
	char numbers[] = ".......1234 ";
	int position = positionOfNumber(numbers);
	int size = findingSize(numbers);

	/*printf("this is the array: %i", numbers[0]);*/

	printf("this is position %i", position);
	printf("this is the size: %i", size);
	printf("\n");
	return (0);
}
