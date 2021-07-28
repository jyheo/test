#include <stdio.h>

int main()
{
    int i, j;
    for (i = 2; i < 10; i++) {
        printf("===%d단===\n",i);
        for (j = 1; j < 10; j++) {
            printf("%d x %d=%d\n", i, j, i * j);
        }
        printf("\n\n");
    }

    return 0;
}

// comment
