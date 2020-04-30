#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

const double maxNorthCH = 47.808455;
const double minNorthCH = 45.817920;
const double maxEastCH = 10.492035;
const double minEastCH = 5.95591;
const double gotthardNorth =46.559167;



struct Geolocation
{
	double latitude;
	double longitude;
};

struct Student
{
	char name[MAX_NAME_LENGTH];
	int age;
	struct Geolocation currentLocation;
};

//function prototypes
void printStudentPassByReference( struct Student *pInputStudent );
void clamp( double* inputValue, double minValue, double maxValue);
void checkStudentPosition( struct Student inputStudent);

int main ( int argc, char *argv[])
{

 	struct Student student1; // instantiate a Student

	printf("Enter name: ");
	fgets( student1.name, MAX_NAME_LENGTH, stdin);

	printf("Enter age: ");
	scanf("%d", &student1.age);

	printf("Enter current latitude: ");
	scanf("%lf", &student1.currentLocation.latitude);
	clamp( &student1.currentLocation.latitude, minNorthCH, maxNorthCH);

	printf("Enter current longitude: ");
	scanf("%lf", &student1.currentLocation.longitude);
	
	printStudentPassByReference( &student1 ); // by reference

	checkStudentPosition( student1 );

	return EXIT_SUCCESS;
}


void printStudentPassByReference( struct Student *pInputStudent)
{
	printf("\nStudent information (by reference):\n");
	printf(  "-------------------------------\n");
	printf(  "Name: %s", pInputStudent->name );
	printf(  "\nAge: %d\n", pInputStudent->age);
}

void clamp( double* inputValue, double minValue, double maxValue)
{
	if( *inputValue < minValue )
	{
		*inputValue = minValue;
	}
	if( *inputValue > maxValue )
	{
		*inputValue = maxValue;
	}
}

void checkStudentPosition( struct Student inputStudent)
{
	struct Geolocation *pStudentLocation = &inputStudent.currentLocation;

	printf("\n\n");
	printf("Studnet Location: \n");
	printf("Latitude: %f\n", pStudentLocation -> latitude);
	printf("Longitude %f\n", pStudentLocation -> longitude);

	if( pStudentLocation-> latitude < gotthardNorth )
	{
		printf("Student location south of Gotthard. Report to Berset. \n");
	}
}	







