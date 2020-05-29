#include<math.h>
#include<stdlib.h>
int a[10][10],b[10][10],c[10][10];
int n=3,i,j;

int main()
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a[i][j]=rand()%100;
}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=rand()%100;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d \n",c[i][j]);
}
return 0;
}
