#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void UcitavanjeMR(int a[10][10], int bv, int bk)
{
	int i,k;
	for(i=0;i<bv;i++)
		for(k=0;k<bk;k++)
			a[i][k]=rand()%100;
}
void IspisM(int a[10][10], int bv, int bk)
{
	int i,k;
	for(i=0;i<bv;i++)
		{for(k=0;k<bk;k++)
			cout<<a[i][k]<<'\t';
			cout<<endl;
	}
}
void TransponovanaMatrica(int a[][10], int at[][10], int bv, int bk)
{
	int v, k;
	for (v = 0; v<bv; v++)
		for (k = 0; k<bk; k++)
			at[k][v] = a[v][k];
}
void MAX(int a[][10],int bv,int bk, int *r,int *v,int *k)
{ int i,j,vmax=a[0][0];
	for(i=0;i<bv;i++)
	for(j=0;j<bk;j++)
		if(a[i][j]>vmax)
		{
			vmax=a[i][j];
			*v=i;
			*k=j;
	}

	
	*r= vmax;
}
void MIN(int a[][10], int bv,int bk,int *r,int *v,int *k )
{ int i,j,vmin=a[0][0];
	for(i=0;i<bv;i++)
	for(j=0;j<bk;j++)
		if(a[i][j]<vmin)
			{vmin=a[i][j];
			*v=i;
			*k=j;
			}

	
	*r= vmin;
	
}
void NizCpy(int l[10], int p[10]) {
	for(int i = 0; i < 10; i ++) {
		l[i] = p[i];
	}
}
void ZamRed(int x, int y,int a[][10]) {
	int t[10];
	NizCpy(t, a[x]);
	NizCpy(a[x], a[y]);
	NizCpy(a[y], t);
}