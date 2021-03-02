/*********************************************************
 * This file, prompt.c, is licensed under the GNU GPLv2. *
 * It has the code to change the CLI prompt.             *
 *=======================================================*/

#include "../../lib/cprompt.h"
// I got the below code mostly from w3resource.com, but without my modifications
#include <stdio.h>
#include <string.h>

#define MAX 256

int main() {
	prscnPrompt();
	if (input == "prompt"){
    FILE *fptr1, *fptr2;
    	int lno, linectr = 0;
        	fptr1 = fopen("../../lib/cprompt.h", "r");
        	if (!fptr1) 
        	{
            	    printf("Something's wrong! The cprompt.h file doesn't exist! \n");
                	return 0;
	        }
    	    
        	/* get the new line from the user */
        	printf(" New prompt: ");
        	fgets(newln, MAX, stdin);
        	/* get the line number to delete the specific line */
        	printf(" Say the number 15 : ");
        	scanf("%d", &lno);
        	lno++;
         	// copy all contents to the temporary file other except specific line
        	fclose(fptr1);
        	remove(fname);
        	printf(" Replacement did successfully..!! \n");
        	return 0;
  	}

	}
}
