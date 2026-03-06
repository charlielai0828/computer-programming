
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float celsius=0.0, fahrenheit=0.0;

	printf("Please enter celsius:");
	scanf("celsius=%2f",celsius);

    fahrenheit=celsius*9/5+32;
	printf("fahrenheit=%2f",fahrenheit);

	return 0;
}