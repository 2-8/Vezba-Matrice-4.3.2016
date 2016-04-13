#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "hederi.h"
using namespace std;
void main()
{
	int a[10][10],va,ka,kb,vb,at[10][10],c[10][10];
	cout<<"unesite bv i bk:\n";
	cin>>va>>ka;
	vb=ka;
	kb=va;
	UcitMatRand(a,va,ka);
	TransponovanaMatrica(a,at,va,ka);
	IspisMat(a,va,ka);cout<<endl;
	IspisMat(at,vb,kb);cout<<endl;
	Pomnozi(a, va,  ka, at, vb,  kb, c);
	

	
	system("pause");
}