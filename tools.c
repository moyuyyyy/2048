#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include"tools.h"
bool flag=true;

void rand_arr(int (*arr)[4])//先复制让所有位置为0
{
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			arr[i][j]=0;
		}
	}
	return;
}
void rand_two(int (*arr)[4])
{
	
	srand(time(NULL));
	
	while(flag)
	{	
		int x=rand()%4;
		int y=rand()%4;
		if(arr[x][y]==0)
		{
		arr[x][y]=2;
		flag=false;
		return;
		}
	}
}


void show(int (*arr)[4],int* num)
{
	for(int i=0;i<4;i++)
	{
		printf("-------------------------\n");
		for(int j=0;j<4;j++)
		{
			printf("| %4d",arr[i][j]);
		}
		printf("|\n");
	}
	printf("-------------------------\n");
	printf(" 得分：%d\n",*num);
	
	return;
}
