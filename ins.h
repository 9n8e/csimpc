#pragma once
#include "argt.h"

#define MAX_OPS 3 // just in case i want to move from legacy instruction sets and implement modern extensions

char* listOfInstructions();

typedef struct {
	void (*doIt)(void*);
	int code;
	int size;
	arg_type ops[3]; // no legacy x86 instruction set allows for more than 3 operands provided for an instruction
	char* name;
} instruction;
