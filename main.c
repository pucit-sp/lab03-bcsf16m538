#include<stdio.h>

float to_float(char* str)
{

	float temp;
	if(atof(str)==0.0)
	{
	
	printf("Invalid Float!\n");
	return -1;
	
	}

}

int main(int args, char** argv)
{
	
	if(argc<2)
	{

	printf("Please provide a floating point number!\n");
	return -1;
	
	}
 
	char* input = argv[1];
	printf("Cnverted: %f\n", to_float(input));
	return 0;

}
