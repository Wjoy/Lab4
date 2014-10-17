#include <stdio.h>
#define N 40

void Sort(int score[],int num [],int n);
int Search(int num[],int x, int n);
int main()
{
	int score[N],n,pos,i=-1,num[N],x;

	do
	{
		i++;
		scanf("%d%d",&num[i],&score[i]);
	}while (num[i]>0&&score[i]>=0);

	n=i+1;

	Sort(score,num,n) ;

	scanf("%d",&x);

	pos=Search(num,x,n);
	printf("score = %d\n",score[pos]);

	return 0;
}

void Sort(int score[],int num[],int n)
{
	int i,j,k,temp1,temp2;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=k+1;j<n;j++)
		{
			if(num[j]>num[k])
			{
				k=j;
			}
		}
	}
	if(k!=i)
	{
		temp1=score[k];score[k]=score[i];score[i]=temp1;
		temp2=num[k];num[k]=num[i];num[i]=temp2;
	}
}

int Search(int num[],int x,int n)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while (low<=high)
	{
		mid=(low+high)/2;
		if(x<num[mid])
		{
			high=mid-1;
		}
		else if(x>num[mid])
		{
			low=mid+1;
		}
		else
			return mid;
	}
}