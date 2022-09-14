/*
 * File: 2-print_alphabet_x10.c
 * Auth: Kamau Maina
 */


#include "main.h"
void print_alphabet_x10(void);
{       
        
        for (int i = 0; i<=9; i++)
        {
                for (char letter = 'a'; letter <= 'z'; letter++)
		{		

                        _putchar(letter);
                
		}

		_putchar("\n");

        }       
        
}
