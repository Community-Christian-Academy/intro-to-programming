#include <stdio.h>

int half(int a) {
    return a/2;
}

int timesTwo(int b) {
    return b*4/2;
}

int main() {
    printf("Hello, World!\n");
    
    
    int x = 41;
    printf("the number is:  %d\n", x);
    
    
    int y = timesTwo( half(x) );
    printf("my other number is %d\n", y);
    
    return 0;
}
