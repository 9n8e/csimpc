#include "int.h"

void parseIn(char* input) {
	if (strcmp(input, "make") == 0) {
		if (currentRegister != NULL) { printf("register %s already made\n", currentRegister->name); }

		currentRegister = make_register("EAX");
		printf("register %s made\n", currentRegister->name);
		char* instructions = listOfInstructions();
		printf("options: %s\n", instructions);
	} else if (strcmp(input, "make") != 0 & currentRegister == NULL) {
		printf("you need a register initialized in order to use this simulator, send `make` to initialize one!\n");
	} else {
		printf("unrecognized input `%s`\n", input);
	}
}
