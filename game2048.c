#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"direction.h"
#include"tools.h"
#include"game2048.h"

bool isfull(int (*arr)[4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(0 == arr[i][j])
			{
				
				return false;
			}
		}
	}
	return true;
}
bool isdie(int (*arr)[4])
{
	if(isfull(arr)==false)
	{
		return false;
		
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==arr[i+1][j])
			{
				return false;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]==arr[i][j+1])
			{
				return false;
			}
		}
	}
	return true;
}
bool iswin(int (*arr)[4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(2048 == arr[i][j])
			{
				
				return true;
			}
		}
	}
	return false;
}
