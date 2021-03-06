
#include "dmos.h"
#include "dmutil.h"
#include "dmtypes.h"

#include <stdio.h>
#include <malloc.h>

struct elem
{
    int a;
    double b;
    char* c;
};

int main(int argc, char* argv[]) {
    char* p = (char*)malloc(sizeof(char) * 10);
    if (p == NULL) {
        return 0;
    }

    struct elem* e = (struct elem*)malloc(sizeof(struct elem));
    if (e == NULL) {
        free(p);
        return 0;
    }

    e->a = 10;
    e->b = 10.10;
    e->c = p;

    double *xx = &e->b;

    printf("%f\n", *xx);

    free(e);
    e = NULL;
    printf("%f\n", e->a);

    return 0;
}