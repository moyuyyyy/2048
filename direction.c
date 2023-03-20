#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<getch.h>
#include"direction.h"
#include"tools.h"


// 上下左右


void up(int (*arr)[4],int* num)
{
	
    for(int j=0;j<4;j++)
	{	
		int cnt=0;
        for(int k=1;k<4;k++)
        {
            for(int i=k;i>cnt;i--)
		    {
			    if(arr[i-1][j]==0&&arr[i][j]!=0)
			    {
			    	arr[i-1][j]=arr[i][j];
			    	arr[i][j]=0;
			    	flag=true;
			    }
		    	else if(arr[i-1][j]==arr[i][j]&&arr[i][j]!=0)
			    {
		    		arr[i-1][j]=arr[i-1][j]*2;
			    	arr[i][j]=0;
			    	cnt=i;
			    	*num=*num+arr[i-1][j];
		    		flag=true;	
			    }
	
		    }
        }	
	}
	
	return;
}
void down(int (*arr)[4],int* num)
{
	
    for(int j=0;j<4;j++)
	{	
		int cnt=3;
        for(int k=2;k>=0;k--)
        {
            for(int i=k;i<cnt;i++)
		    {
			    if(arr[i+1][j]==0&&arr[i][j]!=0)
			    {
			    	arr[i+1][j]=arr[i][j];
			    	arr[i][j]=0;
			    	flag=true;
			    }
		    	if(arr[i][j]==arr[i+1][j]&&arr[i+1][j]!=0)
			    {
		    		arr[i+1][j]=arr[i+1][j]*2;
			    	arr[i][j]=0;
			    	cnt=i;
			    	*num=*num+arr[i+1][j];
		    		flag=true;	
			    }
		    }
        }	
	}
	
	return;
}


void left(int (*arr)[4],int* num)
{
	for(int i=0;i<4;i++)
	{	
		int cnt=0;
        for(int k=1;k<4;k++)
        {
            for(int j=k;j>cnt;j--)
		    {
			    if(arr[i][j-1]==0&&arr[i][j]!=0)
			    {
			    	arr[i][j-1]=arr[i][j];
			    	arr[i][j]=0;
			    	flag=true;
			    }
		    	else if(arr[i][j-1]==arr[i][j]&&arr[i][j]!=0)
			    {
		    		arr[i][j-1]=arr[i][j-1]*2;
			    	arr[i][j]=0;
			    	cnt=j;
			    	*num=*num+arr[i][j-1];
		    		flag=true;	
			    }
	
		    }
        }	
	}
	
	return;
}
void right(int (*arr)[4],int* num)
{
	for(int i=0;i<4;i++)
	{	
		int cnt=3;
        for(int k=2;k>=0;k--)
        {
            for(int j=k;j<cnt;j++)
		    {
			    if(arr[i][j+1]==0&&arr[i][j]!=0)
			    {
			    	arr[i][j+1]=arr[i][j];
			    	arr[i][j]=0;
			    	flag=true;
			    }
		    	if(arr[i][j]==arr[i][j+1]&&arr[i][j+1]!=0)
			    {
		    		arr[i][j+1]=arr[i][j+1]*2;
			    	arr[i][j]=0;
			    	cnt=j;
			    	*num=*num+arr[i][j+1];
		    		flag=true;	
			    }
		    }
        }	
	}
	
	return;
}
