#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdlib.h>

#define PIN 274252

int main() {
	puts("6 Digit Passcode? Let's crack it...\nWait 3 seconds — DuffyAPP‐IT");
	sleep(3);
	for (int i = 0; i <= 999999; i++) {
		printf("TRYING PIN -> %d\n",i);
		if (i == PIN) {
			printf("FOUND — PIN IS -> %d\n",i);
			exit(0);
		}
	}
	return 1;
}
