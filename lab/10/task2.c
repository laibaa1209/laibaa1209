#include<stdio.h>

void swap(void *x, void*y) {
    
    *((int*)x) = *((int*)x) ^ *((int*)y);
    *((int*)y) = *((int*)x) ^ *((int*)y);
    *((int*)x) = *((int*)x) ^ *((int*)y);
}

int main() {
    
    int a=6, b=12;
    printf("Before swapping: a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping: a=%d, b=%d\n",a,b);
    return 0;
}