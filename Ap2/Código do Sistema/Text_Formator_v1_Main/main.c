// Author: Guilherme Bornia Miranda
// Matter: Software Engineering ll
//
// It is a program that formats texts
// checking if the first letter of each
// name is uppercase and returning, at
// terminal, the writing correctly.
//
// **| LIBRARIES |**
#include "source.h"
// **| MAIN |**
int main ()
{
	char name[50];	// It is going to keep the name of my user
	
	printf ("\n Type your name:\n >> ");
	fgets ( name, 50, stdin );

	getting_uppercase ( name );
	realocating_spaces ( name );

	if ( islower ( name[0] ) != 0 )	// iF it is lowercase, returns a value different of zero
		name[0] = toupper ( name[0] );	// If all spaces were removed, the first position, definitly, is a letter.
						
	printf ("\n Your name is:\n%s\n", name);

	return 0;
}


