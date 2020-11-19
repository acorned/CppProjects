#include <stdio.h>
#include <stdlib.h> 

// This is to solve https://www.hackerrank.com/challenges/c-tutorial-pointer/

void update(int *a,int *b) {
    *a = *a + *b;
    *b = abs(*a - 2*(*b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
