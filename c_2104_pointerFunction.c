#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ� : call by reference(�ּҸ� �����Ѵ�.)
//�ּҸ� �Ű������� �޴´�.
//main�Լ��� a�� �� ���� ����
void change(int* p) {
	*p = 20; //p�� ����Ű�� �ִ� ���� ���� �����ϰڴ�.
}

void twoChange(int* p1, int* p2) {
	int tem;
	tem = *p1;
	*p1 = *p2;
	*p2 = tem;
}

void sumCal(int* pa, int* psum) {
	*psum= *psum + *pa;
}

int main() {
	/*//�Լ��� ������ �ѱ��
	int a=10;
	change(&a); //a�� �ּҸ� ����� �Լ��� �ѱ��.

	scanf("%d", &a);
	printf("a : %d\n", a);
	*/

	/*
	int a = 10, b = 20;
	twoChange(&a, &b);
	printf("%d %d\n", a, b);
	*/

	//��������
	int a, sum = 0;
	while (1) {
		printf("������ ? ");
		scanf("%d", &a);
		if (a == 0) break;
		sumCal(&a, &sum); //sum += a �̱� ������.
	}
	printf("���� �հ� : %d\n", sum);



	return 0;
}
