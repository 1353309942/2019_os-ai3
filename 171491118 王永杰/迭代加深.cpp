#include <stdio.h>
int maxdepth = 1;//���Ѱ�Ҳ� 
int tips = 0;//���λ 
int answer;//λ��
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
	 printf("�ҵ���") ;return answer;
     
}

int id(int limit,int wonder,int a[10])
{   
	
	 DFS(maxdepth,wonder,a) ;
	 depth++;
	
	 while(maxdepth <= limit)//�ȴ�û���ҵ���ʱ�� 
	{
	  maxdepth++;
	}
return answer;
}


int main()
{int d;
 int line[10]={
 	1,2,3,4,5,6,7,8,9,10
 };//�������鷽ʽ���洢��Ҫ�Ƚϵ����� 
 printf("����������Ҫ���ҵ���\n");
 scanf("%d",&d);
 id(5,d,line);
 printf("�������λ����%d\n",answer);
 return 0;
}
