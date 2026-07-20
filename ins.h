typedef struct {
	void (*do)(void*);
	int code;
	int args;
} instruction;
