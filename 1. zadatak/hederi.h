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
		a[i][k]=rand()%200-100;
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
int Srednja_v_mat(int a[][10], int bv,int bk)
{int k,i;
int  srv,s=0;
		for(i=0;i<bv;i++)
			{for(k=0;k<bk;k++)
		{s=s+a[i][k];}
		}


		srv=s/(bv*bk);
	
	
	return srv;	
}
int Srednja_v_matNB(int a[][10], int bv,int bk)
{int k,i,br=0;
int srv,s=0;
		for(i=0;i<bv;i++)
			for(k=0;k<bk;k++)
			{
				if(a[i][k]<0)
				{s=s+a[i][k];
				br++;}
			}
			
		srv=s/(br);
	
	
	return srv;	
}
void formKM(int bv,int bk,int *n)
{
	
	if(bv>bk)
	*n=bv-(bv-bk);

	else 

		*n=bk-(bk-bv);

}
int maxGldijag(int a[][10], int bv)
{
	int i,vmax=0,k;
	for(i=0;i<bv;i++)
		for(k=0;k<bv;k++)
		if(i==k && a[i][k]>vmax)
			vmax=a[i][k];

	return vmax;
}
int sumSPdijag(int a[][10], int bv,int bk)
{
	int i,s=0,k;
	for(i=0;i<bv;i++)
			s=s+a[i][bv-1-i];
	
			

	return s;
}
