#include <stdio.h>

int MY_AWESOME_PIN = 2424;

int testLogin (int pin) {
    if (pin == MY_AWESOME_PIN) {
        return 1; // this means ‘yes’
    }
    return 0; // this means 'no'
}

int main(int argc, const char * argv[])
{
    int i;
    for (i = 0; i <= 4242; i++)  {
        printf("let's try PIN: %d\n", i);
        if (testLogin(i)) {
            printf("you got it!\n");
        }
    }
    
    return 0;
}
