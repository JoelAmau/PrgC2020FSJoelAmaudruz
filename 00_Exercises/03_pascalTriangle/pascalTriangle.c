#include <stdio.h>
#include <stdlib.h>

void PrintUsageMessage(void);
void PrintpascalTriangle( int triangleLimit);


const int lowerLimit = 1;
const int upperLimit = 20;

long factorial( long n){
	if( n==1 || n==0){
		return 1;
	}
	return n*factorial(n-1);
}

long nCr (long n, long r){
	return factorial(n)/(factorial(r)*factorial(n-r));//n!/(r!*(n-r)!)
}


int main (int argc, char* argv[])
{
	int inputValue =0;
	if (argc !=2){
		PrintUsageMessage();
		return 0;
	}
	else
	{
		inputValue = atoi(argv[1]);
		if( inputValue >= lowerLimit && inputValue <=upperLimit)
		{
			PrintpascalTriangle( inputValue);
		}
		else
		{
			//no valid input
			PrintUsageMessage();
			return 0;
		}
	}
	return 0;
}

void PrintUsageMessage(void)
{
	printf("Usage: pascalTriangle wholeNumber\n\twholeNumber: integer on the intervall[%d,%d]\n",
lowerLimit, upperLimit);
}

void PrintpascalTriangle( int triangleLimit){
	int i,j,k;
	for( i=0;i<triangleLimit;i++){
		for(j=(triangleLimit-i) ;j>0;j--){
			printf("\t");
		}
		for(k=0;k<=i; k++){
			printf("%ld\t\t",nCr(i,k));
		}
		printf("\n");
	}
}
	
		











