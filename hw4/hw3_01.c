#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern multiplcation(int);

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Illegal syntax \n");
		printf("Usage : ./ex2 [2 | 3 | 4 | .... ] \n");
		exit(1);
	}

	multiplication(atoi(argv[1]));
	return 0;
}
