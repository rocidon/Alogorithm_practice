#include "Baek.h"
//BaekJoon 4446
void Solve() {
	
	char mo[] = { 'a', 'i', 'y', 'e', 'o', 'u' }; // 5
	char za[] = { 'b', 'k', 'x', 'z', 'n', 'h', 'd','c','w','g','p','v','j','q','t','s','r','l','m','f' }; //20
	char c[100];
	char ch;
	int mosize, zasize;
	int charsize = 0;
	int index = 0;
	int isChanged = 0;
	mosize = sizeof(mo);
	zasize = sizeof(za);
	//gets(c);

	while (c[index] != NULL) {
		ch = convertAa(c[index], isChanged);
		for (int i = 0; i < mosize; i++) {
			if (mo[i] == ch) {
				i += 3;
				if (i > (mosize -1)) {
					i = i- mosize;
				}
				ch = mo[i];
				break;
			}
		}
		for (int i = 0; i < zasize; i++) {
			if (za[i] == ch) {
				i += 10;
				if (i > (zasize -1)){
					i = i - zasize;
				}
				ch = za[i];
				break;
			}
		}
		if (isChanged) {
			ch = convertAa(ch, isChanged);
			isChanged = 0;
		}
		c[index] = ch;
		index++;
	}
	printf("%s\n", c);
}

char convertAa(char c, int &a) {
	if (c >= 'A' && c <= 'Z') {
		a = 1;
		return c + ' ';
	}
	if (a == 1) {
		return c - ' ';
	}
	return c;
}