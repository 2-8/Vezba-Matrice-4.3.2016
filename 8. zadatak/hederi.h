#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int brojPobeda(int a[], int n)
{
	int i, bp = 0;
	for(i=0;i<n;i++)
		if (a[i] == 2)
			bp++;
	return bp;
}
int brojPoraza(int a[], int n)
{
	int i, bp = 0;
	for(i=0;i<n;i++)
		if (a[i] == 0)
			bp++;
	return bp;
}
int bezPoraza(int a[], int n)
{
	int i, bp = 0;
	for(i=0;i<n;i++)
		if (a[i] != 0)
			bp++;
	if (bp == n)
		return 1;
	else
		return 0;
}
void ucitajNiz(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
}
	void ucitajMat(int a[][10], int bv, int bk)
{
	int v;
cout<<"\nUnesi elemente matrice \n";
	for(v=0;v<bv;v++)
		ucitajNiz(a[v], bk);
}
void ispisNiz(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
	void popunaRandNiz(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		a[i] = rand()%100;
}

void ispisMat(int a[][10], int bv, int bk)
{
	int v;
	cout<<"\nElementi matrice \n";
	for(v=0;v<bv;v++)
	{
		ispisNiz(a[v], bk);
		cout<<endl;
	}
}	void popunaRandMat(int a[][10], int bv, int bk)
{
	int v;
	for(v=0;v<bv;v++)
		popunaRandNiz(a[v], bk);
}

