#include<stdio.h>
//判断一个数是否为奇数
int main()
{
	int num = 0;
	printf("请输入一个数>:");
	scanf("%d",&num);
	if(0 == num%2)
	{
		printf("偶数");
		
	}
	else 
	{
		printf("奇数");
	}
	
	return 0;
}
