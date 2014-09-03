#include <stdio.h>

int THE_PIN_OF_AWESOMENESS = 9861;

int testLogin( int pin) {
    if (pin == THE_PIN_OF_AWESOMENESS) {
        return 1; // this means 'yes'
        
    }
    return 0; // this means 'no'
}

int main( int argc, const char * argv [])
{
    int i;
    for (i = 0; i <= 9999; i++) {
        printf("Let's begin by quashing PIN:  %d\n", i);
        if (testLogin(i)) {
            printf("Quashing successfully succeeded successfully\n");
        }
    }
    
    return 0;
}