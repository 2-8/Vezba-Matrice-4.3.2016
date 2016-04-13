#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include "hederi.h"
using namespace std;
void main()
{
	int bv, bk,a[10][10],i,at[10][10],spg[20];
	cout << "Unesite bk pa bv" << endl;
	cin >> bv >> bk;
	formiranjeM2(a, bv, bk,at);
	IspisMat(at, bk, bv);
	if (bv == bk)
	{
		cout << "suma glavne dijagonale je" << Sumagldijag(a, bk, bv) << endl;
	}
	if (bv == bk)
	{
		for(i=0;i<bv;i++)
			{spg[i]=SumaParaleGD(i,bv-1,bv,a);
			spg[bv+i]=SumaParaleGD(i,0,bv,a);
		}
		IspisNiza(spg,2*4bv);
	}

	system("pause");

}