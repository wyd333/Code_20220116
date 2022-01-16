#include<stdio.h>
//输出1-100之间的奇数
	
int main()
{
	int i = 1;
	while(i<=100)
	{
		if(i%2 == 1)
			printf("%d\n",i);
		i++;
	}
return 0;
}
/*解法二
int main()
{
	int i = 1;
	while(i<=100)
	{
		printf("%d ",i);
		i += 2;
	}
return 0;
}*/
