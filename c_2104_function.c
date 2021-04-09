#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개 변수는 없고, 반환값은 없다.(=void)
void voidTest() {
	printf("void 함수\n");

}

//매개 변수는 1개가 있고, 반환값은 없다.
void voidTest2(int a) {
	printf("매개변수:%d \n", a);
}

void voidTest3(int a, int b) {
	printf("두 수의 합:%d\n", a + b);
}

//매개변수를 반지름으로하여 원의 넓이를 출력해주는 기능을 가진 함수를 만들어라.
//함수의 이름 : area, 매개변수 이름:r(double형)
//call by value 방식 (call by reference 방식과 다름)
void area(double r) {
	printf("원의 넓이는 %.2f\n", r*r*3.14);
}

//매개변수:반지름, 반환값:넓이
//원의 넓이를 구하여 반환하는 함수
double areaReturn(double r2) {
	double area = r2 * r2 * 3.14;
	return area; //return 후에 나오는 형을 void 자리에 넣기.
				//매개변수는 여러개일지라도 반환되는 값은 오직 1개.
//값을 사용하려면 main 함수 내에 작성하기.
}

//세 개의 정수를 매개변수로 받아 합을 반환하는 함수
int num(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}

//두 개의 정수를 매개변수로 받아서 나눈 실수값을 반환하는 함수
double num2(int a, int b) {
	return (double)a / b;
}

//연습문제
//두 수를 매개변수로 받아서 두 수 중 큰 수를 반환하는 함수를 작성하시오.
/*int no(int a, int b) {
	if (a < b)
		return b;
	else
		return a;
}*/
//또는
int no(int a, int b) {
	int max;
	if (a < b)
		max = b;
	else if (a > b)
		max = a;
	else
		max = 0;
	return max;
}




//함수를 만들 때는 진입점 함수 밖에 작성
int main() {
	//함수
	voidTest(); //이 문장이 없으면 상단의 printf("void 함수") 실행 불가
	voidTest2(10); //void voidTest2(int a) 문장을 호출하겠다!!!!!!!!!!!!!!!!
	voidTest3(20, 30); //타입과 갯수가 일치해야함.
	area(3.2); //또는 double r = 3.2;
				//또는 double r;(메인함수 내 지역변수) printf("반지름은?"); scanf("%lf",&r); area(r)
				//(입력받을 때는 double형 구분을 위해 l붙이기)

	double r2 = 3.6;
	double returnValue=areaReturn(r2);
	printf("넓이 : %.2f\n", returnValue);

	int sum = num(10, 30, 50);
	printf("합 : %d\n", sum);

	printf("실수값 : %.2f\n", (double)num2(50, 30));

	printf("%d\n", no(7, 10));
	printf("%d\n", no(15, 10));
	printf("%d\n", no(20, 10));
	printf("%d\n", no(7, 7));




	return 0;
}