#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터 변수
	//포인터(무조건 4바이트)를 통해서 변수의 값을 가져오고 싶담.
	/*
	int a = 10;
	int* p = &a;
	printf("a : %d %p\n", a, &a);
	printf("p : %p\n", p); //a==*p
	//p의 주소값으로 a 값은 어떻게 가져올까?
	printf("p : %p %d\n", p, *p); //*p(p의 주소에 저장된 값을 소환)
	

	char c = '%';
	char* p2 = &c;
	printf("c : %c / *p2 : %c\n", c, *p2);


	
	double d = 3.14;
	double * p3 = &d;
	printf("d : %f %p\n", d, &d);
	printf("d : %.2f / *p3 : %.2f\n", d, *p3);

	float f = 5.55f; // 값 뒤에 f를 붙이면 float형 4바이트로 변환하겠다.
	float* p4 = &f;
	printf("f : %.2f / *p4 : %.2f\n", f, *p4);
	*/

	//연습문제
	/*
	int a = 10, b = 20;
	//이 경우, 포인터 변수를 활용하여 값을 출력해보자.
	int* p;
	p = &a;
	printf("a : %d\n", *p);
	p = &b;
	printf("b : %d", *p);
	*/

	/*
	//연습문제
	//a=10, b=20, c=30 일 때 base=100 을 각 변수에 더해보자.
	//단, 포인터 변수는 하나만 존재
	int a = 10, b = 20, c = 30, base = 100;
	int* p = &a;
	//a = *p + base;
	//또는
	*p += base;
	printf("a는 %d\n", *p);
	p = &b;
	*p += base;
	printf("b는 %d\n", *p);
	p = &c;
	*p += base;
	printf("c는 %d\n", *p);
	*/

	/*//배열의 포인터
	int arr[3] = { 10,20,30 };
	int* p = arr; //배열의 이름은 곧 주소다.
	printf("%d\n", *p);
	printf("%d\n", *(p + 1));
	printf("%d\n", *(p + 2));*/
	/*//반복문을 사용하면 ?
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(p + i));
	}
	*/
	
	/*//arr과 p는 동일.
	for (int i = 0; i < 3; i++) {
		printf("%d %d %d %d\n", *(p + i), *(arr+i), arr[i], p[i]);
	}
	*/
	
	////증감연산자 사용
	//for (int i = 0; i < 3; i++) { //여기서는 i의 역할이 없음. 단순히 3번 반복하라는 의미로 사용.
	//	printf("%d\n", *p/*, *arr*/);
	//	p++;
	//	//arr++;//arr은 상수.
	//}
	
	/*//연습문제
	//문자형 배열에 'p','y','t','h','o','n' 저장 후 포인터변수 이용하여 한 글자씩 화면에 출력하시오.
	char string[] = { 'p','y','t','h','o','n' };
	char* p = string;
	for (int i = 0; i < 6; i++) {
		printf("%c", *p);
		p++;
	}
	*/

	//연습문제
	//피보나치 수열을 포인터를 이용해 구하고 출력
	int fibo[20];
	/*int z = 0;
	int o = 1;
	int next;
	for (int i = 0; i < 20; i++) {
		printf("%d, ", z);
		next = o + z;
		z = o;
		o = next;
	}*/

	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;
	//여기서부터 반복문 이용
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //처음 위치(주소)로 돌려보내기.
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}



	return 0;
}