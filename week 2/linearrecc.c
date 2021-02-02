#include<stdio.h>
int linear_search(int n,int a[50],int key)
{
	static int i;//i=0
	if(a[i] == key)
	{
		return i;
	}
	else if(i<n)
	{
		i++;
		linear_search(n,a,key);
	}
	else
		return -1;
}
int main( )
{
	int i,pos,n,key,a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	pos=linear_search(n,a,key);
	if(pos==-1)
	printf("element not present");
	else
	printf("Element present at %d location",pos+1);
}
