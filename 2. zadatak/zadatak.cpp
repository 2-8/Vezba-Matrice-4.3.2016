#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "hederi.h"
using namespace std;
void main()
{
	int a[10][10],bv,bk,n,at[10][10];
	cout<<"unesite bv i bk:\n";
	cin>>bv>>bk;
	UcitMatRand(a,bv,bk);
	IspisMat(a,bv,bk);
	Srednja_v_mat_K(a,bv,bk); cout<<endl;
	TransponovanaMatrica(a,at,bv,bk);
	Srednja_v_mat_K(at,bk,bv);
	formKM(bv,bk,&n);
	 if(bv>bk)
		bv=n;
	else
		bk=n;
	 IspisMat(a,bv,bk);
	  cout<<"suma gl dijag je: "<<sumGldijag(a,bv)<<endl;
	  cout<<"min sp dijag je: "<<minSPdijag(a,bv)<<endl;
	system("pause");
}