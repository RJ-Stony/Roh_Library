#include "Main.h"

char* strcpy(char* dest, char* src) {
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main() 
{
	char name[20];
	int cho;
	int stu_ID;
	while (1) {
		printf("===========================================================\n");
		printf("*JunSeok ������*\n");
		printf("\n");
		printf("1. �뿩 �ý��� ����\n");
		printf("2. �л� �߰�\n");
		printf("3. ���� �߰�\n");
		printf("4. ����\n");
		printf("===========================================================\n");

		printf("���ϴ� ������ ��ȣ�� �Է��Ͻÿ� : ");
		scanf("%d", &cho);
		switch (cho)
		{
		case 1:
			break;
		case 2:
			printf("�̸��� �й��� �Է��ϼ���. : ");
			scanf("%s %d", &name, &stu_ID);
			InsertStudent(name, stu_ID);
			printf("����Ǿ����ϴ�.\n");
			break;
		case 4:
			return;
		default:
			break;
		}
	}
	return 0;
}