#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű� ������ ����, ��ȯ���� ����.(=void)
void voidTest() {
	printf("void �Լ�\n");

}

//�Ű� ������ 1���� �ְ�, ��ȯ���� ����.
void voidTest2(int a) {
	printf("�Ű�����:%d \n", a);
}

void voidTest3(int a, int b) {
	printf("�� ���� ��:%d\n", a + b);
}

//�Ű������� �����������Ͽ� ���� ���̸� ������ִ� ����� ���� �Լ��� ������.
//�Լ��� �̸� : area, �Ű����� �̸�:r(double��)
//call by value ��� (call by reference ��İ� �ٸ�)
void area(double r) {
	printf("���� ���̴� %.2f\n", r*r*3.14);
}

//�Ű�����:������, ��ȯ��:����
//���� ���̸� ���Ͽ� ��ȯ�ϴ� �Լ�
double areaReturn(double r2) {
	double area = r2 * r2 * 3.14;
	return area; //return �Ŀ� ������ ���� void �ڸ��� �ֱ�.
				//�Ű������� ������������ ��ȯ�Ǵ� ���� ���� 1��.
//���� ����Ϸ��� main �Լ� ���� �ۼ��ϱ�.
}

//�� ���� ������ �Ű������� �޾� ���� ��ȯ�ϴ� �Լ�
int num(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}

//�� ���� ������ �Ű������� �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�
double num2(int a, int b) {
	return (double)a / b;
}

//��������
//�� ���� �Ű������� �޾Ƽ� �� �� �� ū ���� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
/*int no(int a, int b) {
	if (a < b)
		return b;
	else
		return a;
}*/
//�Ǵ�
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




//�Լ��� ���� ���� ������ �Լ� �ۿ� �ۼ�
int main() {
	//�Լ�
	voidTest(); //�� ������ ������ ����� printf("void �Լ�") ���� �Ұ�
	voidTest2(10); //void voidTest2(int a) ������ ȣ���ϰڴ�!!!!!!!!!!!!!!!!
	voidTest3(20, 30); //Ÿ�԰� ������ ��ġ�ؾ���.
	area(3.2); //�Ǵ� double r = 3.2;
				//�Ǵ� double r;(�����Լ� �� ��������) printf("��������?"); scanf("%lf",&r); area(r)
				//(�Է¹��� ���� double�� ������ ���� l���̱�)

	double r2 = 3.6;
	double returnValue=areaReturn(r2);
	printf("���� : %.2f\n", returnValue);

	int sum = num(10, 30, 50);
	printf("�� : %d\n", sum);

	printf("�Ǽ��� : %.2f\n", (double)num2(50, 30));

	printf("%d\n", no(7, 10));
	printf("%d\n", no(15, 10));
	printf("%d\n", no(20, 10));
	printf("%d\n", no(7, 7));




	return 0;
}