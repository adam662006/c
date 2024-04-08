#include <stdio.h>

main() {
	int fahr;

	printf("Fahrenheit to Celsius conversion\n");
	for (fahr = 20; fahr <= 300; fahr = fahr + 10) {
		printf("Fahrenheit: %4d Celsius: %4.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}
