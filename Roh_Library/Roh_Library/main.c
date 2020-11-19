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
		printf("*JunSeok 도서관*\n");
		printf("\n");
		printf("1. 대여 시스템 시작\n");
		printf("2. 학생 추가\n");
		printf("3. 도서 추가\n");
		printf("4. 종료\n");
		printf("===========================================================\n");

		printf("원하는 동작의 번호를 입력하시오 : ");
		scanf("%d", &cho);
		switch (cho)
		{
		case 1:
			break;
		case 2:
			printf("이름과 학번을 입력하세요. : ");
			scanf("%s %d", &name, &stu_ID);
			InsertStudent(name, stu_ID);
			printf("저장되었습니다.\n");
			break;
		case 4:
			return;
		default:
			break;
		}
	}
	return 0;
}