#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;
void UcitvanjeMR(int a[][10], int bv,int bk)
{
	int i, k;
	for (i = 0; i < bv; i++)
		for (k = 0; k < bk; k++)
			a[i][k] = rand() % 100;
}
void IspisMat(int a[][10], int bv, int bk)
{
	int i, k;
	for (i = 0; i < bv; i++)
	{
		for (k = 0; k < bk; k++)
			cout << a[i][k] << '\t';
		cout << endl;
	}
}
void UcitNiza(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		a[i] = rand() % 100;
}
void IspisNiza(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
void PomakNizD(int a[], int n)
{
	int i, p;
	p = a[n - 1];
	for (i = n - 1; i > 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = p;
}
void TransMat(int a[][10],int at[][10], int bv, int bk)
{
	int i, k;
	for (i = 0; i < bv; i++)
		for (k = 0; k < bk; k++)
			at[k][i] = a[i][k];
}
void formiranjeM2(int a[][10], int bv, int bk,int at[][10])
{
	int i, k,b[10],n;
	cout << "Unesite dimenziju niza koja je ista kao i dimenzija vrste: " << endl;
	cin >> n;
	UcitNiza(b, n);
	IspisNiza(b, n);
	cout << endl;
	
	
		
	
	for (i = 0; i < bv; i++)
	
		
		{for (k = 0; k < bk; k++)

		


			{

				a[i][k] = b[k];
				
			}
		
		PomakNizD(b, n);
		
	}
		
	TransMat(a,at,bv,bk);
		
}

int  Sumagldijag(int a[][10], int bv,int bk)
{
	int i, k,s=0;
	for (i = 0; i < bv; i++)
		for (k = 0; k < bk; k++)
		{
		if (i == k)
			s = s + a[i][k];
		}
	return s;

}
int SumaParalelSD(int p, int n, int g,int a[][10])
{
	int i, k, s;
	s = 0;
	for (i = 0; i < n; i++)
	{
		
		k = p + g - 1;
		if (k >= 0 && k < n)
			s += a[i][k];

	}
	return s;
}
int SumaParaleGD(int p, int g, int n,int a[][10])
{
	int i, k, pok=0;
	if(p-g>0)
	pok=p-g;
	int kraj=n;
	if((p-g)<0)
		kraj=n+(p-g);
	int s=0;
	for(i=pok;i<kraj;i++)
	{
		k=i-p+g;
		s+=a[i][k];
	}
	return s;
}
