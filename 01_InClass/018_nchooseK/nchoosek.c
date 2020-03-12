#include <stdio.h>
#include <stdlib.h>

/* compute the factorial of a number */

// prototype
long factorial(int n);
long nchoosek( int n, int k);


int main( int argc, char* argv[] )
{
    long n = 0, k = 0, waitOnValidInput = 1;
	while(waitOnValidInput){
		printf("*********************\n");
		printf("Calculate n choose k:\n ");
		printf("*********************\n");
	    printf("Enter n and k (positive integerns n >= k");
		scanf("%ld %ld",&n,&k);

		//printf("Enter k positive integer: ");
    	
		if(n>= 0 && k>= 0) {
		    printf("(%ld choose %ld) = %ld\n", n,k, nchoosek(n,k));
			break;
		}
		else
		{
			printf("Invalid input. Try again.\n");
		}
	}
	return EXIT_SUCCESS;
}

// implementation of nchoosek
long nchoosek (int n, int k){
	long result = 0;
	result = factorial(n)/(factorial(k)*factorial(n-k));

	return result;
}
// implementation of the factorial function
long  factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

