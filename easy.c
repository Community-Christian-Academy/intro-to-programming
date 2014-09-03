

	#include <stdio.h>

	int MY_AWESOME_PIN = 1506;

	int testlogin(int pin) {
	if (pin == MY_AWESOME_PIN){
	return 1; // this means 'yes'
}
return 0; //this means 'no'
}
int main(int argc, const char * argv[])
{
	int i;
	for (i = 0; i <= 9999; i++);
	printf("Let's try this:   %d\n", i);
	if (testLogin(i)) {
	printf("quished \n");
	}
}
return 0;
}