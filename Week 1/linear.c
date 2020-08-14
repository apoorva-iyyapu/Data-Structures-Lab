#include<stdio.h>
int linear_search(int n,array[40],int target)
{
	int i,pos;
	for(i=0:i<n;i++)

	{
		if(array[i]==key)
		{
		pos=i;
		break;
		}
	}
	return pos;
}



int main()
{
	int i,pos,n,target,a[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&target);
	pos=linear_search(n,a,target);
	if(pos==-1)
	printf("element not present");
	else
	printf("element present at %d location",pos+1);
}	
