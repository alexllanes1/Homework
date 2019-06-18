#include <cs50.h>
#include <stdio.h>

int main(void)
{
//variables
{
    int height;
    int all_rows;
    int space;
    int hash;
 
    do
    {
        //Texto al iniciar el programa
        printf("Welcome to Mario! Choose a number from 0 to 8:");
        height = get_int("height ");
    }

    while ((height < 0) || (height > 8));
    for(int all_rows=0; all_rows<height; all_rows++)
    {
     for(int space= (height- all_rows); space > 0; space--)
        printf(" ");
 
    for(hash=0; hash <= (all_rows); hash++)
        printf("#");
        printf(" ");
    
//segunda columna de "escaleras"

        for(hash=0; hash <= (all_rows); hash++)
        printf("#");
        printf(" ");

        printf("\n");   
    }
    

    return 0;   
}
}