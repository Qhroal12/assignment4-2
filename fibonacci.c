#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findGCD(int nummer, int GCD) {

	if (GCD == 0) {
		return nummer;
	}
	else { 
		printf("%d, %d\n",nummer,GCD);
		return findGCD(GCD, nummer % GCD);
	}
}

int main() {

	int a = 0;

	int f_1 = 0;
	int f = 1;
	int temp = 0;

	printf("피보나치 수 F(n)의 n값을 입력하세요: ");
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {

		temp = f;
		f = f_1 + f;
		f_1 = temp;

		//printf("\nF(%d)과 F(%d)의 최대공약수: %d\n", i, i + 1, findGCD(f_1, f));				/수 확인용 
	}

	


}