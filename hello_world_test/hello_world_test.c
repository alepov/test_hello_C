#include <stdio.h>
#include <stdlib.h>

/* hello world */


int main(void)
{
	int a, b, c, randomnumber, i;

	a = 1;
	b = 2;
	c = 3;

    printf("hello world, %d, %d, %d \n\n", a, b, c);

	printf("ten \"pseudorandom\" numbers between 0, 50: \n");

	srand(time(NULL));
for( i = 0; i < 10 ; i++) 
{
randomnumber = rand() % 50;
printf("%d \n", randomnumber);
}

	return 0;

}
