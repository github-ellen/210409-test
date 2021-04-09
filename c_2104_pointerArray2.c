#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//이차배열의 포인터
	/*int arr[][3] = { {1,2,3},{4,5,6} }; //행 생략 가능
	int* p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%d ", *p);
		*p++;
	}*/

	//두 학생의 국영수 점수 배열.
	int score[][3] = { {90,89,77},{89,99,88} };
	int sum = 0; double avg;
	int(*p)[3] = /* 포인터가 하나지만 내가 가리키는 값이 int의 3개*/ score;
	printf("%p %p\n", p, p + 1); //p+1=> 12바이트를 뛰어넘어서 다음 포인터로 이동.(행 단위로 이동 가능)
	for (int i = 0; i < 2; i++) {
		sum = (*p)[0]/*p가 가리키는 곳의 0번 인덱스라는 의미*/ + (*p)[1] + (*p)[2];
		avg = sum / 3.;
		printf("합계 : %d, 평균 : %.2f\n", sum, avg);
		p++;
	}



	return 0;
}