#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int sum = 0;

//�Ű������� �ϳ��� ������ �޾Ƽ� ���� �Լ��� ���� ��ȯ����.
/*int userSum(int a) {
	static int sum = 0; //�������� int sum = 0;�� ��ü��.
	//static(�Լ��� ���ʷ� ������� �� ����, ���α׷� ������� �� �Ҹ�)
	//����� �Լ� �ȿ����� ���� ����
	sum = sum + a;
	return sum;
}
*/

//�Ű�����:����, ��ȯ��:�� �Լ��� ������ Ƚ��
//�Լ� �̸� : countTest
int countTest() {
	static int count=0;
	count++;
	return count;
}


int main() {
	/*
	printf("���� : %d\n",userSum(10));
	printf("���� : %d\n",userSum(20));
	*/

	//�ݺ����� Ȱ���Ͽ� countTest 10ȸ �����Ѵٴ� ����� �Լ� ���� �� �ֱ�
	for (int count = 0; count < 10; count++) {
		printf("���� Ƚ�� %dȸ\n", countTest());
	}











	return 0;
}