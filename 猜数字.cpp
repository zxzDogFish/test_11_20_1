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
void game()//��������Զ������
{
	//1.���������
	int ret = 0;
	int gusse = 0;
	/*srand((unsigned int)time(NULL));*///srand()������Ҫ����һ���仯��ֵ
	//��ʱ������ɣ�ʱ������ó�������ı仯���
	//srand����������������һ�μ��ɣ�����ҪƵ�����ã���Ȼ�������̫���
	ret = rand() % 100 + 1;//����һ��1-100����
	while (1)
	{
		printf("�²�����\n");
		scanf("%d", &gusse);
		if (gusse > ret)
		{
			printf("�´���\n");
		}
		else if (gusse < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("������\n");
			break;
		}
	}

}


int main()
{
	int input;
	srand((unsigned int)time(NULL));//srand()������Ҫ����һ���仯��ֵ
	//��ʱ������ɣ�ʱ������ó�������ı仯���
	//srand����������������һ�μ��ɣ�����ҪƵ�����ã���Ȼ�������̫���
	do 
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}