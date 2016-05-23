//
// **| LIBRARIES |**
#include "source.h"
//
// **| IMPLEMENTATION |**
void getting_uppercase ( char *name )
{
	int i;	

	for ( i = 0; i < strlen(name); i++ )
		if ( ( islower ( name[i+1] ) != 0 ) && ( name[i] == ' ' ) )	//islower return 0 if it's not a lowercase letter
			name[i+1] = toupper ( name[i+1] );	// My letter in uppercase
}

void realocating_spaces ( char *name )
{
	int i, j;

	for ( i = 0; i < strlen(name); i++ )
	{	// Replace all the spaces
		while ( name[i] == ' ' )
		{
			name[i] = name[i+1];	// Put all the letters in theirs previous position
			for ( j = i+1; j < strlen(name); j++ )	// Delete the same letters generated for the substitutions
				name[j] = name[j+1];		// of spaces
				
		}
	}
}
