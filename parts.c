#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "vmtime.h"
#include "sregister.h"

int main() {
	char in[256];
	sregister* current = NULL;

	while (getchar() != EOF) {
		scanf("%s", in);
		if (strcmp(in, "make") == 0) {
			current = make_register("EAX");
			printf("register %s made\n", current->name);
		} else if (strcmp(in, "inc") == 0) {
			if (current != NULL) {
				current->vt->inc(current);
				printf("register %s increased to %d\n", current->name, current->value);
			} else {
				printf("no current register found\n");
			}
		}
	}

	printf("bye\n");
	return EXIT_SUCCESS;

	sregister* eax = make_register("EAX");
	eax->vt->add(eax, 1);
	printf("eax: %d\n", eax->value);
	free(eax);
	return EXIT_SUCCESS;
}
