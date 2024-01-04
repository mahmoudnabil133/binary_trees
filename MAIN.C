#include "binary_trees.h"

int max(int x, int y)
{
    if (x >= y)
        return (x);
    return (y);
}

int main()
{
    printf("%d\n", max(2,3));
}
