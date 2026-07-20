#pragma once
#include <stdlib.h>
#include "vmtime.h"

typedef struct sregister sregister;

typedef struct {
        void (*add)(sregister *, int);
        void (*sub)(sregister *, int);
        void (*inc)(sregister *);
        void (*dec)(sregister *);
        void (*mov)(sregister *, int);
} sregisterVtable;

struct sregister {
        const sregisterVtable *vt;
        char *name;
        int value;
        int accessed;
};

void register_accessed(sregister*);
void register_add(sregister*, int);
void register_sub(sregister*, int);
void register_inc(sregister*);
void register_dec(sregister*);
void register_mov(sregister*, int);

#define REGISTER_POOL_SIZE 512
static const sregisterVtable srvt = {register_add, register_sub, register_inc, register_dec, register_mov};
static unsigned char sregisterPool[REGISTER_POOL_SIZE];
static size_t poolOffset = 0;
static sregister* currentRegister = NULL;

void *reg_alloc(size_t);
sregister* make_register(char*);
