#include "int.h"

char* parseIn(char* input) {
	if (strcmp(input, "make") == 0) {
		if (currentRegister != NULL) { printf("register %s already made\n", currentRegister->name); }

		currentRegister = make_register("EAX");
		printf("register %s made\n", currentRegister->name);
		char* instructions = listOfInstructions();
		printf("options: %s\n", instructions);
	}
}
