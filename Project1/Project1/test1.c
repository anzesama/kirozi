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
	struct Gane b1 = { "我的世界", 299 };
	struct Gane b2 = { "星际战甲", 0 };
	struct Gane b3 = { "英雄联盟", 0 };
	struct Gane b4 = { "穿越火线", 0 };
	struct Gane*pb1 = &b1;
	struct Gane*pb2 = &b2;
	struct Gane*pb3 = &b3;
	struct Gane*pb4 = &b4;
	strcpy(b1.name, "脑叶公司");
	printf("游戏名：%s\n", pb1->name);

	/*printf("游戏名：%s\n", b1.name);
	printf("价格是;%d\n", b1.price);
	printf("我经常玩的游戏\n\n\n" );

	printf("游戏名：%s\n", b2.name);
	printf("价格是;%d\n", b2.price);
	printf("我游戏时长最长的游戏\n\n\n");
	printf("游戏名：%s\n", b3.name);
	printf("价格是;%d\n", b3.price);
	printf("我最爱玩的游戏\n\n\n");
	*/


	return 0;
}