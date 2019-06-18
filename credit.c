#include <stdio.h>
#include <cs50.h>

int main(void)
{
	long n = get_long("Please, enter your credit card number: ");
	//variables
	int digit = 0; 			//Actual digit
	int prev_digit = 0; 	//Previous digit
	int num_digits = 0; 	//Number of digits (credit card numbers)
	int S_even_digits = 0; 	//Addition of even numbers
	int S_odd_digits = 0;	//Adition of odd numbers

//While the values are numbers
	while (n > 0){
		prev_digit = digit;
		digit = n % 10;
		n /= 10;

		if (num_digits % 2 == 0) //If the number is 0 we add and even number
		{
			S_even_digits += digit;
		} else { //If it is not an even number, then add the digits
			int Digit2 = 2*digit;
			S_odd_digits += Digit2/10 + (Digit2 % 10);
		}
		num_digits++; 
	}

	//Validation of the number
	int validation = ((S_even_digits + S_odd_digits));
	if(validation % 10 != 0){
		printf("Invalid number \n");
		return 1;
	}
	// Show the type of valid credit card that we use
	int last_two = prev_digit + digit*10;
	if (num_digits == 15 && (last_two == 34 || last_two == 37)){
		printf("Your credit card is an AMEX\n");
	} else if (num_digits == 16 && last_two < 56 && last_two > 50){
		printf("Your credit card is a MASTERCARD\n");
	} else if ((num_digits == 13 || num_digits == 16) && digit == 4){
		printf("Your credit card is a VISA\n" );
	} else {
		printf("Invalid card number\n");
	}
}