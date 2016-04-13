#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

void popunaRand(int a[][10],int *bv,int *bk)
{
	int v,k;
	cout<<"bv,bk"<<endl;
	cin>>*bv>>*bk;
	for(v=0;v<*bv;v++)
	for(k=0;k<*bk;k++)
	{
		a[v][k]=rand()%10 + 10;
	}
}
void unos(int a[][10],int *bv,int *bk)
{
	int v,k;
	cout<<"bv,bk"<<endl;
	cin>>*bv>>*bk;
	for(v=0;v<*bv;v++)
	for(k=0;k<*bk;k++)
	{
		cin>>a[v][k];
	}
}
void ispis(int a[][10],int bv,int bk)
{
	int  v,k;
	for(v=0;v<bv;v++)
	
	{
		for(k=0;k<bk;k++)
			cout<<a[v][k]<<"   ";
		cout<<endl;
	}
}
///VMIN,KMAX
int sedlanje(int a[][10],int bv, int bk)
{
	int v,k,poz,i,pom,max;
	for(v=0;v<bv;v++)
	{
		pom=0;
		poz=0;
		for(k=0;k<bk;k++)
			if (a[v][poz]>a[v][k])
				poz=k;
				
		max=a[v][poz];
		for (i=0;i<bv;i++)
			if(a[i][poz]>max)
				max=a[i][poz];
		if(max==a[v][poz])
		{
			cout<<"SEDLO:"<<a[v][poz]<<"Vrsta:"<<v<<"Kolona"<<poz;
			return 1;
		}
			
	}
	return 0;
}
int main()
{
	int a[10][10],bv,bk,b;
	unos(a,&bv,&bk);
	ispis(a,bv,bk);
	b=sedlanje(a,bv,bk);
	if(b==0)
		cout<<"nema sedla"<<endl;
	system("PAUSE");
}
