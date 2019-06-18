#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Variable key sirve para agregar el valor de numeros que se mueve una letra.
// Eg: 1 = a > b, 2 = a > c

int key = 0;

int main(int argc, string argv[])
{
	if (argc !=2)
		{printf("Please write a number, it has to be at least one: \n "); return 1;}			
		
//La función atoi convierte el string a int.	
	key = atoi(argv[1]);
//La llave (key) debe estar siempre en valores positivos
	if(key < 0) { printf("You can not use negative numbers, please use only possitive: \n "); return 1; }

	else {
		//Ask for the message that is going to be codified.
		string message = get_string ("Your message: ");

		//Print the message codified with the sum of the key.
		printf("Codified message: ");

	for (int i = 0, n = strlen(message); i < n; i++)
	{
		//For the lowercase letters.

		if islower(message [i])
		{
			printf("%c", (((message[i] + key) - 97) % 26) + 97);
		}
		//For the uppercase letters
		else if isupper(message[i])
		{
            printf("%c", (((message[i] + key) - 65) % 26) + 65);
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
