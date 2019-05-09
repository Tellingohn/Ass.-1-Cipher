
#include <stdio.h>

int main()
{
    int opt = 0;
    printf("Greetings User!\n \nTo choose an Action, would you kindly enter the Number at the begining of it's the Line. \n 1. Supply a Key to a Cipher to Encrypt or Decrypt. \n 2. Decrypt a Cipher without a Key. \n \n 0. Exit this Program.");
    /* Main Menu - Entry message, 1. Key Cipher 2. No Key Decrpt 0. Esc Program */
        scanf("%d", &opt); /* User Input, pick an option */
        
    printf("Is the Key for, \n 1. Rotation Cipher \n 2. Substitution Cipher \n \n 0. Return to the Previous Menu.");
    /* Menu - types of Ciphers 1. 2. 0.  */
        scanf("%d", &opt); /* setup If statements for choosing Options <------------------------------------------------------------- */
        
        /* Repeat options for each Branching Choice or Record choices for final destination <---------------------------------------------------------------------- */
        
        printf("Do you wish to, \n 1. Encrypt. \n 2. Decrypt \n \n 0. Return to the Previous Menu.");
        /* Menu - Cipher Types 1. 2. 0. */
            scanf("%d", &opt);
                
            printf("Would you kindly, enter the Key with a space between each Letter");
            /* Menu - enter Key, 1-26 variables */
                scanf(" ", ); /* Need to input variable chain for Key <----------------------------------------------------------------------------------------------------------------------------------- */
                
                printf("Would you kindly now enter your text for the Cipher                                                                its geting hungry");
                    scanf("", ); /* Text to be Encrypted or Decrypted, either way it's getting cryptic :P <---------------------------------------------------------------------------------- */


    return 0;
}

