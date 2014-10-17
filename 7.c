#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	int i,j,n=0,lena,lenb;

	k:scanf("%s",a);
	if(a[0]!='0')
	{
		scanf("%s",b);
	}
	else
		goto j;

	lena=strlen(a);
	lenb=strlen(b);

	if(lenb==1)
	{
		for(i=0;i<lena;i++)
		{
			if(a[i]==b[0])
			{
				n++;
			}
		}
	}
	else
	{
		for(i=0;i<lena;i++)
		{
			if(a[i]==b[0])
			{
				for(j=0;j<lenb;j++)
				{
					if(a[i+j]!=b[j])
					{
						j=0;
						break;
					}
				}
				if(j==lenb)
				{
					n++;
				}
			}
		}
	}
	printf("%d\n",n);
	n = 0;
	goto k;
	j:getchar();
}