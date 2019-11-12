#include <stdio.h>
int maxdepth = 1;//最大寻找层 
int tips = 0;//标记位 
int answer;//位置
int i;
int depth=0 ;


int DFS(int maxdepth,int wonder,int a[10])
{   
    for(int c=0;c<=(depth+1)*4;c++)
     {
     if(a[c]==wonder) answer=c;
    
     }
     if(depth = maxdepth) 
     if(tips = 1) 
	 printf("找到答案") ;return answer;
     
}

int id(int limit,int wonder,int a[10])
{   
	
	 DFS(maxdepth,wonder,a) ;
	 depth++;
	
	 while(maxdepth <= limit)//等答案没有找到的时候 
	{
	  maxdepth++;
	}
return answer;
}


int main()
{int d;
 int line[10]={
 	1,2,3,4,5,6,7,8,9,10
 };//利用数组方式来存储将要比较的数据 
 printf("请输入你想要查找的数\n");
 scanf("%d",&d);
 id(5,d,line);
 printf("这个数的位置在%d\n",answer);
 return 0;
}
