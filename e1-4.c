#include <stdio.h>

main() {
	int init, final, step;
	float celsius, fahr;

	init = 20;
	final = 300;
	step = 10;

	celsius = init;
	printf("Celsius to Fahrenheit conversion from 0 to 300\n");
	while (celsius <= final) {
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("%4.f %6.f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
