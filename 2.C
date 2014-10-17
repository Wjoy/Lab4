#include <stdio.h>
#define N 40

int Search(long num[],long x, int n);
int main()
{
	int score[N];
	int n,pos,i=-1;
	long num[N],x;

	do
	{
		i++;
		scanf("%ld%d",&num[i],&score[i]);
	}while (num[i]>0&&score[i]>=0);

	n=i+1;

	scanf("%ld",&x);

	pos=Search(num,x,n);

	printf("score = %d\n",score[pos]);

	return 0;
}

Search(long num[],long x,int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(num[j]==x)
		return j;
	}
}