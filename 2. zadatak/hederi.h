#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
void UcitMatRand(int a[][10], int bv, int bk)
{
	int i,k;
	for(i=0;i<bv;i++)
	for(k=0;k<bk;k++)
		a[i][k]=rand()%100;
}
void IspisMat(int a[][10], int bv, int bk)
{
	int i,k;
	for(i=0;i<bv;i++)
	{
		for(k=0;k<bk;k++)
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
void Srednja_v_mat_K(int a[][10], int bv,int bk)
{int k,i,s=0,srv;
		for(i=0;i<bv;i++)
			{s=0;
	for(k=0;k<bk;k++)
	{
		s=s+a[i][k];
	}
		srv=s/(bk);
	
	cout<<"srv tekuce kolone/vrste je "<<srv<<endl;
	}
	
	
}
void formKM(int bv,int bk,int *n)
{
	
	if(bv>bk)
	*n=bv-(bv-bk);

	else 

		*n=bk-(bk-bv);

}
int minSPdijag(int a[][10], int bv)
{
	int i,vmin;
	for(i=0;i<bv;i++)
		if(i==0)
			vmin=a[i][bv-1-i];
		else if(a[i][bv-1-i]<vmin)
			vmin=a[i][bv-1-i];

	return vmin;
}
int sumGldijag(int a[][10], int bv)
{
	int i,s=0,k;
	for(i=0;i<bv;i++)
		for(k=0;k<bv;k++)
		if(i==k)
			s=s+a[i][k];

	return s;
}
