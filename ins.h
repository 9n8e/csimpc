typedef struct {
	void (*do)(void*); // ->doIt() reference
	int code;
	int args;
} instruction;
