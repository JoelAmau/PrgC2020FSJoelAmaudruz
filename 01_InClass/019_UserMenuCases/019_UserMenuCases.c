#include <stdio.h>
#include <stdlib.h>

typedef enum{
	INVALID = 0,
	PRINTCODERNAME,
	CALCONEPLUSONE,
	PIUS,
	EXIT
} MenuSelection;


MenuSelection PrintUserMenu( void );


int main( int argc, char *argv[] )
{
	int runMenuPrompt = 1;
	MenuSelection menuSelection = EXIT;

	while(runMenuPrompt)
	{
		menuSelection = PrintUserMenu();

		switch( menuSelection)
		{
			case PRINTCODERNAME:
			printf("Joel!\n");
			break;

		case CALCONEPLUSONE:
			printf("1+1 = 2.5\n");
			break;
		
		case PIUS:
			printf("Das habe ich auch nie verstanden\n");
			break;

		case EXIT:
			printf("Exit\n");
			runMenuPrompt = 0;
			break;

		default:
			printf("RTFM\n");
			break;
		}//switch(menuSelection)
	}//while( runMenuPromt)
 	return EXIT_SUCCESS;
}


			 		

/*	prints the user menu and returns the selected item
 * 	Inputs: None.
 * 	Outputs: int selectedMenuItem
 *  Error behavior: returns zero for all invalid menu item selections
 */	
MenuSelection PrintUserMenu( void )
{
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: Print Coder Name\n");
	printf("2: Calculate 1+1:\n");
	printf("3: Pius\n");
	printf("4: Exit\n");
	printf("-> ");
	scanf("%d", &selectedMenuItem );
	
	if(selectedMenuItem != PRINTCODERNAME
		&& selectedMenuItem != CALCONEPLUSONE
		&& selectedMenuItem != EXIT
		&& selectedMenuItem != PIUS)
	{
		selectedMenuItem = INVALID;
	}
	return selectedMenuItem;
}
