#include <stdio.h>

void whilePlay() {
    int x = 1;
    int y = 0;
    
    while (x) {
        printf("y = %d\n", y);
        printf("Hello, World!\n");
        y = y + 1;
        
        if (y > 100) {
            x = 0;
        }
    }

}

int main(int argc, const char * argv[])
{
    
    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
        for (int j = 10; j > i; j--) {
            printf("whee!!!\n");
            printf("j = %d\n", j);
        }
    }
    
    printf("done!\n");
    return 0;
}

