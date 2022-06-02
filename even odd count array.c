#include<stdio.h>
int main()
{
	int n,i,c,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  if(a[i]%2==0)
	  {
	  	c++;
	  }
	  if(a[i]==1)
	  {
	  	break;
	  }
	  if(a[i]%2==!0)
	  {
	  	s++;
	  }
	}
	printf("%d\n%d",s,c);
	return 0;
}
