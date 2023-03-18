#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<getch.h>
#include"tools.h"
#include"direction.h"
#include"game2048.h"
int main(int argc, const char *argv[])
{
	

	int (*arr)[4]=malloc(sizeof(int)*4*4);//申请到了4行4列的数组
	int a=0;
	int* num=NULL;
	num=&a;
	system("clear");
	rand_arr(arr);
	rand_two(arr);
	show(arr,num);
	while(1)
	{
		printf(" 请按方向键 \n");
		int dir=getch();
		
		if(dir==183)
		{
			up(arr,num);	
		}
		if(dir==184)
		{
			down(arr,num);		
		}	
		if(dir==186)
		{
			left(arr,num);	
		}
		if(dir==185)
		{
			right(arr,num);		
		}	
		system("clear");
		
		rand_two(arr);
		show(arr,num);
		if(isdie(arr)==true)
		{
			printf("游戏结束\n");
			free(arr);
			arr=NULL;
			num=NULL;
			return 0;
		}
		if(iswin(arr)==true)
		{
			printf("游戏胜利\n");
			free(arr);
			arr=NULL;
			num=NULL;
			return 0;
		}
		 	
	}
	return 0;
}
