#include <stdio.h>

typedef unsigned int uint32_t;

#include "solution.h"

int main(int argc, char *argv[]) {
    Solution sln;

    for (int i = 0; i < 256; i++) {
        printf("%d", sln.hammingWeight(i));
        if (i != 255) {
            printf(",");
        }
    }

    return 0;
}
