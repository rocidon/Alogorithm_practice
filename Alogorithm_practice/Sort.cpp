#include "sort.h"

void Select_sort() {
	int numarr[] = { 6,34,4,7,78,3,44,1,5,7,12,8,21 };
	// 1 3 4 5 6 7 8 12 21 24 34 44 78
	int arrsize = sizeof(numarr) / sizeof(int);

	for(int i=0; i < arrsize-1; i++){
		for (int j = i + 1; j < arrsize; j++) {
			if (numarr[i] > numarr[j]) {
				swap(numarr[i], numarr[j]);
			}
		}
	}
	printf("Select sort\n");
	printing_array(numarr, arrsize);
	printf("\n");
}

void Insertion_sort() {
	int numarr[] = { 4,12,6,57,36,23,42,5,56,44,32,13,34,2 };
	// 2 4 5 6 12 13 23 32 34 36 42 44 56 57 
	int arrsize = sizeof(numarr) / sizeof(int);

	int i, j, t;
	for (i = 2; i < arrsize; i++) {
		t = numarr[i];
		j = i;
		while (numarr[j - 1] > t) {
			numarr[j] = numarr[j - 1];
			j--;
		}
		numarr[j] = t;
	}
	printf("Insertion sort\n");
	printing_array(numarr, arrsize);
	printf("\n");
}

void Indirect_sort() {
	
}

void printing_array(int *a, int s) {
	
	for (int i = 0; i < s; i++) {
		printf("%3d ", a[i]);
	}
}