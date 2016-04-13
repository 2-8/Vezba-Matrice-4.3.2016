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

void sumaMK(int at[10][10], int bv, int bk)
{int i,k,s=0;

for(i=0;i<bv;i++)
	{s=0;
		{for(k=0;k<bk;k++)
		
		s=s+at[i][k];
		cout<<"suma tek kolone"<<s<<endl;
		}}


}
void kruznipomakNiza(int a[10], int n)
{int i,p;
p=a[0];
	for(i=0;i<n;i++)
	{a[i]=a[i+1];}
	a[n-1]=p;
}
