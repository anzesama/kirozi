#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct Gane
{
	char name[20];
	short price;
};
int main()
{
	struct Gane b1 = { "�ҵ�����", 299 };
	struct Gane b2 = { "�Ǽ�ս��", 0 };
	struct Gane b3 = { "Ӣ������", 0 };
	struct Gane b4 = { "��Խ����", 0 };
	struct Gane*pb1 = &b1;
	struct Gane*pb2 = &b2;
	struct Gane*pb3 = &b3;
	struct Gane*pb4 = &b4;
	strcpy(b1.name, "��Ҷ��˾");
	printf("��Ϸ����%s\n", pb1->name);

	/*printf("��Ϸ����%s\n", b1.name);
	printf("�۸���;%d\n", b1.price);
	printf("�Ҿ��������Ϸ\n\n\n" );

	printf("��Ϸ����%s\n", b2.name);
	printf("�۸���;%d\n", b2.price);
	printf("����Ϸʱ�������Ϸ\n\n\n");
	printf("��Ϸ����%s\n", b3.name);
	printf("�۸���;%d\n", b3.price);
	printf("��������Ϸ\n\n\n");
	*/


	return 0;
}