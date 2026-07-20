typedef struct {
	void (*do)(void*);
	int code;
	int size;
	char* name;
} instruction;
