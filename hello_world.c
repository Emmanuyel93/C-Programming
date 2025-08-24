#include <stdio.h>

int main() {
    char take[];
    fgets(take, sizeof(take), stdin);
    printf("Hello, World!\n %s",take);
    return 0;
}