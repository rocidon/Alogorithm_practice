#include "Prime.h"

int get_prime1() {
	int num;
	int i;
	printf("input number : ");
	scanf("%d", &num);
	i = 2;
	while (num > i) {
		if (num % i == 0) {
			return 0;
		}
		i++;
	}
	return 1;
}
int get_prime2() {
	int num, sqrn, i;
	printf("input number : ");
	scanf("%d", &num);
	sqrn = (int)sqrt(num);
	for (int i = 2; i <= sqrn; i++) {
		if (num % i == 0)	return 0;
	}
	return 1;
}

void get_prime3() {
	// Eratoshenes's sieve
	int num;	
	int* arrnum;
	printf("Eratoshenes's sieve \n");
	printf("input number : ");
	scanf("%d", &num);
	num++;
	arrnum = new int[num] {0,};

	for (int i = 2; i < num; i++) {
		if (arrnum[i] != 0) {
			continue;
		}
		for (int j = i+i; j < num; j += i) {
			arrnum[j] = 1;
		}
	}
	printf("Prime number Before %d \n", num);
	for (int i = 2; i < num; i++) {
		if (arrnum[i] == 0) printf("%3d", i);
	}

	delete[] arrnum;
}