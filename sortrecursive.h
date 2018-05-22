#include <stdlib.h>
#include <stdio.h>

struct Number;

typedef struct Number{
    float value;
    struct Number* smaller;
    struct Number* larger;
} Number;

Number* Add_recursive(Number * node, float value);
int Push_back_to_array(Number* node,float * t, int index);
void sortrecursive(float * t, int size);
