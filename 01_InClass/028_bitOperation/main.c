// system headers
#include <stdio.h>
#include <stdlib.h>

// custom headers
#include "bitOperations.h"

//local function prototypes
void printBinary( unsigned int input, unsigned char nBitsToPrint );

int main ( int argc, char *argv[])
{
	unsigned char testRegister  = 0;
	
	//test 1
	printBinary( testRegister, 8);

	for (int i=0; i<8; i++)
	{
		SetBitNof8( &testRegister, i );
		printBinary( testRegister, 8);
	}
	
	//test2; clearing all bits, one by one
	for (int i=0; i<8; i++)
	{
		ClearBitNof8 ( &testRegister, i );
		printBinary( testRegister, 8);
	}







	return EXIT_SUCCESS;
}

void printBinary( unsigned int input, unsigned char nBitsToPrint )
{
	unsigned int  i =0;

	printf("%d =\t 0b", (unsigned short)input );

	for( i = ( 1 << (nBitsToPrint-1 )); i > 0; i =(i>>1) )
	{
		if( input & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
