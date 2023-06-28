#include "Eucild_Algorithm.h"

int E_Algorithm() {
	int u, v;
	int t;
	printf("input u, v : ");
	scanf("%d %d", &u, &v);

	while (u) {
		if (v > u) {
			t = u;
			u = v;
			v = t;
		}
		u = u - v;
	}
	return v;
}