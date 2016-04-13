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
void sumaMK(int at[10][10], int bv, int bk)
{int i,k,s=0;

for(i=0;i<bv;i++)
	{s=0;
		{for(k=0;k<bk;k++)
		
		s=s+at[i][k];
		cout<<"suma tek vrste"<<s<<endl;
		}
}
}
int izbaciizNizaclan(int a[],int bk,int p)
 {
	 int i;
	 for(i=p;i<bk-1;i++)
	 a[i]=a[i+1];
	 
	 return bk-1;
 }