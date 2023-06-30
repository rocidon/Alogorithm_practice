#include "Eucild_Algorithm.h"
#include "Prime.h"
//#define _Euclid_Aligoritm_
#define _Prime_

void main() {
#ifdef _Euclid_Aligoritm_
	//int v = E_Algorithm();
	int v = adv_E_Algorithm();
	printf("최대 공약수 : %d", v);
#endif
#ifdef _Prime_
	//int v = get_prime1();
	//int v = get_prime2();
	get_prime3();

	//if (v) { printf("Prime number\n"); }
	//else { printf("Not Prime number\n"); }
#endif
}