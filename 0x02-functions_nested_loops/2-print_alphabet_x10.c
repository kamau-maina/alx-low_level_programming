/*
 * File: 2-print_alphabet_x10.c
 * Auth: Kamau Maina
 */


#include "main.h"
/**
 * print_alphabet_x10(void)
 */

void print_alphabet_x10(void)
{       
	int i;
	char letter;	
        for (i = 0; i <= 9; i++)
        {
                for (letter = 'a'; letter <= 'z'; letter++)
		{		

                        _putchar(letter);
                
		}

		_putchar('\n');

        }       
        
}
