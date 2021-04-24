#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("*****    1.add          2.del    *****\n");
	printf("*****    3.search       4.modify *****\n");
	printf("*****    5.show         6.sort   *****\n");
	printf("*****    0.exit                  *****\n");
	printf("**************************************\n");
}
int main()
{
	int input = 0;
	struct Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ������Ҫ�Ĳ���:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}


	} while (input);
	system("pause");
	return 0;
}