#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//������ ����
	//������(������ 4����Ʈ)�� ���ؼ� ������ ���� �������� �ʹ�.
	/*
	int a = 10;
	int* p = &a;
	printf("a : %d %p\n", a, &a);
	printf("p : %p\n", p); //a==*p
	//p�� �ּҰ����� a ���� ��� �����ñ�?
	printf("p : %p %d\n", p, *p); //*p(p�� �ּҿ� ����� ���� ��ȯ)
	

	char c = '%';
	char* p2 = &c;
	printf("c : %c / *p2 : %c\n", c, *p2);


	
	double d = 3.14;
	double * p3 = &d;
	printf("d : %f %p\n", d, &d);
	printf("d : %.2f / *p3 : %.2f\n", d, *p3);

	float f = 5.55f; // �� �ڿ� f�� ���̸� float�� 4����Ʈ�� ��ȯ�ϰڴ�.
	float* p4 = &f;
	printf("f : %.2f / *p4 : %.2f\n", f, *p4);
	*/

	//��������
	/*
	int a = 10, b = 20;
	//�� ���, ������ ������ Ȱ���Ͽ� ���� ����غ���.
	int* p;
	p = &a;
	printf("a : %d\n", *p);
	p = &b;
	printf("b : %d", *p);
	*/

	/*
	//��������
	//a=10, b=20, c=30 �� �� base=100 �� �� ������ ���غ���.
	//��, ������ ������ �ϳ��� ����
	int a = 10, b = 20, c = 30, base = 100;
	int* p = &a;
	//a = *p + base;
	//�Ǵ�
	*p += base;
	printf("a�� %d\n", *p);
	p = &b;
	*p += base;
	printf("b�� %d\n", *p);
	p = &c;
	*p += base;
	printf("c�� %d\n", *p);
	*/

	/*//�迭�� ������
	int arr[3] = { 10,20,30 };
	int* p = arr; //�迭�� �̸��� �� �ּҴ�.
	printf("%d\n", *p);
	printf("%d\n", *(p + 1));
	printf("%d\n", *(p + 2));*/
	/*//�ݺ����� ����ϸ� ?
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(p + i));
	}
	*/
	
	/*//arr�� p�� ����.
	for (int i = 0; i < 3; i++) {
		printf("%d %d %d %d\n", *(p + i), *(arr+i), arr[i], p[i]);
	}
	*/
	
	////���������� ���
	//for (int i = 0; i < 3; i++) { //���⼭�� i�� ������ ����. �ܼ��� 3�� �ݺ��϶�� �ǹ̷� ���.
	//	printf("%d\n", *p/*, *arr*/);
	//	p++;
	//	//arr++;//arr�� ���.
	//}
	
	/*//��������
	//������ �迭�� 'p','y','t','h','o','n' ���� �� �����ͺ��� �̿��Ͽ� �� ���ھ� ȭ�鿡 ����Ͻÿ�.
	char string[] = { 'p','y','t','h','o','n' };
	char* p = string;
	for (int i = 0; i < 6; i++) {
		printf("%c", *p);
		p++;
	}
	*/

	//��������
	//�Ǻ���ġ ������ �����͸� �̿��� ���ϰ� ���
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
	//���⼭���� �ݺ��� �̿�
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //ó�� ��ġ(�ּ�)�� ����������.
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}



	return 0;
}