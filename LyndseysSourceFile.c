#include <stdio.h>

int MY_AWESOME_PIN = 6831;

int testLogin (int pin) {
    if (pin == MY_AWESOME_PIN) {
        return 1; // this means ‘yes’
    }
    return 0; // this means 'no'
}

int main(int argc, const char * argv[])
{
    int i;
    for (i = 0; i <= 9999; i++)  {
        printf("let's try PIN: %d\n", i);
        if (testLogin(i)) {
            printf("you guessed it!\n");
        }
    }
    
    return 0;
}
