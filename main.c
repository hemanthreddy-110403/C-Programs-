#include<stdio.h>
int main ()
{
int a[20],n,i,j,temp;
printf("enter n");
scanf("%d",&n);
printf("enter the %d n of elements\n",n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("unsorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}

