#include "../../lib/cprompt.h"

int main(){
	prscnPrompt();
	if(input == "help" || "Help"){
		printf("You are in the terminal, currently the only working part of the nameless nanokernel. You have the following commands to chose from: \n");
		printf("1. hello \n");
		printf("2. pi \n");
		printf("3. Help \n");
		printf("I know there's not much now, but just you wait!");
		printf("Note: This assumes you weren't talking about the Beatles. \n")
	}
}
