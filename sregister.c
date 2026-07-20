#include "sregister.h"

void register_accessed(sregister *self) {self->accessed = vmTime();}

void register_add(sregister *self, int value) {
        self->value += value;
        register_accessed(self);
}

void register_sub(sregister *self, int value) {
        self->value -= value;
        register_accessed(self);
}

void register_inc(sregister *self) {
        self->value++;
        register_accessed(self);
}

void register_dec(sregister *self) {
        self->value--;
        register_accessed(self);
}

void register_mov(sregister *self, int value) {
        self->value = value;
        register_accessed(self);
}

void *reg_alloc(size_t size) {
        if ((size + poolOffset) > REGISTER_POOL_SIZE) return NULL;
        void* ptr = &sregisterPool[poolOffset];
        poolOffset += size;
        return ptr;
}

sregister* make_register(char *name) {
        sregister* reg = reg_alloc(sizeof(sregister));
        reg->vt = &srvt;
        reg->name = name;
        reg->value = 0;
        reg->accessed = vmTime();

        return reg;
}
