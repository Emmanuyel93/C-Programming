#include <stdio.h>

int main() {
    char take[100];
    fgets(take, sizeof(take), stdin);
    printf("Hello, World!\n %s",take);
    return 0;
}