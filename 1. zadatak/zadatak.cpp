#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "hederi.h"
using namespace std;
void main()
{
	int a[10][10],bv,bk,n;
	cout<<"unesite bv i bk:\n";
	cin>>bv>>bk;
	UcitMatRand(a,bv,bk);
	IspisMat(a,bv,bk);
	cout<<"srednja vrednost cele matrice je: "<<Srednja_v_mat(a,bv,bk)<<endl;
	cout<<"srednja vrednost negativnih br matrice je: "<<Srednja_v_matNB(a,bv,bk)<<endl;
	 formKM(bv,bk,&n);
	 if(bv>bk)
		bv=n;
	else
		bk=n;
	 IspisMat(a,bv,bk);
	  cout<<"max gl dijag je: "<<maxGldijag(a,bv)<<endl;
	  cout<<"suma sp dijag je: "<<sumSPdijag(a,bv,bk)<<endl;
	system("pause");
}