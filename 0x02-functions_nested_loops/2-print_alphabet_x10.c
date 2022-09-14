#include <stdio.h>
void print_alphabet_x10(void);
int main()
{
	print_alphabet_x10();

}


void print_alphabet_x10(void)
{       
        
        for (int i = 0; i<=9; i++)
        {
                for (char letter = 'a'; letter <= 'z'; letter++)
		{		

                        printf("%c",letter);
                
		}

		printf("\n");

        }       
        
}
