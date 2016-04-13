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
	IspisMat(a,bv,bk);cout<<endl;
	TransponovanaMatrica(a,at,bv,bk);
	IspisMat(at,bk,bv);
	sumaMPOV(at,bk,bv); cout<<endl;
	
	if(bv!=bk)
		{formKM(bk,bv,&n);
	 if(bv>bk)
		bv=n;
	else
		bk=n;}
	 IspisMat(at,bk,bv);
	  cout<<"suma gl dijag je: "<<sumGldijag(a,bv)<<endl;
	  cout<<"max sp dijag je: "<<maxSPdijag(a,bv)<<endl;
	system("pause");
}