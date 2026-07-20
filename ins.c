#include "ins.h"

char* listOfInstructions() {
	return  "ADD reg, imm\n"
	        "ADD reg, reg\n"
	        "SUB reg, imm\n"
		"SUB reg, reg\n"
		"MOV reg, reg\n"
		"MOV reg, imm\n"
		"INC reg\n"
		"DEC reg\n";
}
