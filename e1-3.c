#include <stdio.h>

main() {
	int initial, final, step;
	float fahr, celsius;

	initial = 20;
	final = 300;
	step = 10;

	fahr = initial;
	printf("Fahrenheit to Celsius conversion from 20 to 300\n");
	while (fahr <= final) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
