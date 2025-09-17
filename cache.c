#include <stdio.h>

#define CACHE_LINES 8   // Example cache with 8 lines

int main() {
    int blockNumber;
    printf("Enter main memory block number: ");
    scanf("%d", &blockNumber);

    int lineNumber = blockNumber % CACHE_LINES;
    printf("Block %d maps to Cache Line %d\n", blockNumber, lineNumber);

    return 0;
}
