typedef struct {
	char* name;
	bool isInstruction;
	void (*func)(void);
} command;


