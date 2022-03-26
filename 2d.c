#include <stdio.h>
int main()
{
int a[10][10],b[10][10],c[20][20],n,m,p,q,i,j,k;
printf("Enter the no. of rows and columns for A matrix:");
scanf("%d%d",&n,&m);
printf("Enter the no. of rows and columns for B matrix:");
scanf("%d%d",&p,&q);
if(m!=p)
{
 printf("multiplication not possible");
return -1;
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("enter the values\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("enter the values\n");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("matrix 1\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("matrix 2\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("resultant matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
