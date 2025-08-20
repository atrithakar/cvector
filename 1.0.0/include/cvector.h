#ifndef C_VECTOR
#define C_VECTOR

#include <stddef.h>
#include <stdbool.h>

typedef struct cvector {
    size_t size;
    size_t capacity;
    void **data;
} cvector;

cvector *cvector_create(size_t initial_capacity);
void cvector_push(cvector *vec, void *item);
int cvector_get(const cvector *vec, size_t index);
int cvector_pop(cvector *vec);
int cvector_size(const cvector *vec);
int cvector_capacity(const cvector *vec);
bool cvector_is_empty(const cvector *vec);
void cvector_free(cvector *vec);

#endif
