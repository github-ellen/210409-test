#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy";
	///*str = "angry";//str�� ����̱� ������ �ʱ�ȭ �Ұ�*/
	////�����ϰ� ����Ű�� ���� ����
	//char* p = str;
	//printf("%s\n", p);
	//
	//p = "python"; //p�� �����̱� ������ ����
	//puts(p); //���ڿ� ���� �Լ��̱� ������ %s ��� �� �ص� ��.

	//��������
	//�ϳ��� �̸��� �Է¹޾� ���
	//������ �̿�
	char name[20];
	char* p = name;
	while (1) {
		printf("����� �̸��� ? ");
		gets_s(p, sizeof(name)); //����� �Է�â
		if (name[0] == 'q') {
			printf("�����մϴ�.\n"); break;
		}
		/*puts(p);
		printf("��! ȯ���մϴ�.");*/
		printf("%s�� ȯ���մϴ�.\n", p);


	}




	return 0;
}