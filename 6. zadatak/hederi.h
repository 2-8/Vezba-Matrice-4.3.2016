#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void UcitMat(int a[][10], int bv,int bk)
{
	int i,k;
	for(i=0;i<bv;i++)
	for(k=0;k<bk;k++)
		cin>>a[i][k];
}
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
void Pomnozi(int a[][10], int va, int ka,int b[][10], int vb, int kb,int c[][10])
{
	int v1,k1,k2,pom;
	for(v1=0;v1<va;v1++)
		for(k2=0;k2<kb;k2++)
		{pom=0;
			for(k1=0;k1<ka;k1++)
				pom+=a[v1][k1]*b[k1][k2];
			c[v1][k2]=pom;
		}
		IspisMat(c,va,kb);

}