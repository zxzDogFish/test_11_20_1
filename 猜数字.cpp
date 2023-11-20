#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("**** 1.play    0.exit ****\n");
	printf("**************************\n");
}
void game()//函数里可以定义变量
{
	//1.生成随机数
	int ret = 0;
	int gusse = 0;
	/*srand((unsigned int)time(NULL));*///srand()括号里要放入一个变化的值
	//用时间戳即可，时间戳设置成随机数的变化起点
	//srand函数整个程序设置一次即可，不需要频繁设置，不然随机数不太随机
	ret = rand() % 100 + 1;//生成一个1-100的数
	while (1)
	{
		printf("猜猜数字\n");
		scanf("%d", &gusse);
		if (gusse > ret)
		{
			printf("猜大了\n");
		}
		else if (gusse < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜中了\n");
			break;
		}
	}

}


int main()
{
	int input;
	srand((unsigned int)time(NULL));//srand()括号里要放入一个变化的值
	//用时间戳即可，时间戳设置成随机数的变化起点
	//srand函数整个程序设置一次即可，不需要频繁设置，不然随机数不太随机
	do 
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}