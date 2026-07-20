#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "vmtime.h"
#include "sregister.h"
#include "int.h"

int main() {
	char in[256];
	// sregister* current = NULL;

	while (getchar() != EOF) {
		scanf("%s", in);
		parseIn(in);
	}

	printf("bye\n");
	cleanup();
	return EXIT_SUCCESS;
}
