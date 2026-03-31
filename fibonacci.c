#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fibonacci(int fn) {
	if (fn == 0)
		return 0;
	else if (fn == 1)
		return 1;
	else
		return Fibonacci(fn - 1) + Fibonacci(fn - 2);

}

int findGCD(int nummer, int GCD) {

	if (GCD == 0) {
		return nummer;
	}
	else { 
		//printf("%d, %d\n",nummer,GCD);		//수 확인용
		return findGCD(GCD, nummer % GCD);
	}
}

int main() {

	int a = 0;

	printf("피보나치 수 F(n)의 n값을 입력하세요: ");
	scanf("%d", &a);

	printf("%d",findGCD(Fibonacci(a),Fibonacci(a - 1)));
	


}
