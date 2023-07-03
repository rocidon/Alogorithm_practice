#include "sort.h"

void Select_sort() {
	int numarr[] = { 6,34,4,7,78,3,44,1,5,9,12,8,21 };
	// 1 3 4 5 6 7 8 9 12 21 24 34 44 78
	int arrsize = sizeof(numarr) / sizeof(int);
	int min, minindex;
	for (int i = 0; i < arrsize - 1; i++) {
		minindex = i;
		min = numarr[i];
		for (int j = i + 1; j < arrsize; j++) {
			if (min > numarr[j]) {
				min = numarr[j];
				minindex = j;
			}
		}
		numarr[minindex] = numarr[i];
		numarr[i] = min;
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

void Bubble_sort() {
	int numarr[] = { 6,43,24,23,3,32,36,2,1,12,5,18,10,4,8 };
	// 1 2 3 4 5 6 8 10 12 18 23 24 32 36 43
	int arrsize = sizeof(numarr) / sizeof(int);

	for (int i = 0; i < arrsize - 1; i++) {
		for (int j = i + 1; j < arrsize; j++) {
			if (numarr[i] > numarr[j]) {
				swap(numarr[i], numarr[j]);
			}
		}
	}
	printf("Bubble_sort\n");
	printing_array(numarr, arrsize);
	printf("\n");
}

void Shell_sort() {
	
}

void printing_array(int *a, int s) {
	
	for (int i = 0; i < s; i++) {
		printf("%3d ", a[i]);
	}
}