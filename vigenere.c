#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//We add the variables
int x;
int y;
int z = 0;

int main(int argc, string argv[])

{

	//We limit the numbers that the user can add to only letters
		if(argc != 2) { printf("Please, only type letters: \n "); return 1;}

	string w = (argv[1]);

	//The number has to be alphanumeric
		for ( int i = 0; i < strlen(w); i++)
	{
		if (isalpha(w[i]) == false)
		{
			printf("Please, the key has to be alphanumeric: \n" ); return 1;}
	//Ask for the message that is going to be codified.
		string message = get_string ("Your message: ");

	//Print the message codified with the sum of the key.
		printf("Codified message: ");

	for (int i = 0; i < strlen(message); i++)
	{

		//For the lowercase letters.
		if islower(message [i])
	{
		x = (z % strlen(w));
            y = (tolower(w[x]) - 97);
            printf("%c", (((message[i] + y) - 97) % 26) + 97);
            z += 1;
	}

		//For the uppercase letters
		else if isupper(message[i])
	{
		x = (z % strlen(w));
            y = (tolower(w[x]) - 97);
            printf("%c", (((message[i] + y) - 65) % 26) + 65); 
            z += 1;		
      }

		else
		{
            printf("%c", message[i]);
		}
	}

	printf("\n");
	return 0;
	}
}
