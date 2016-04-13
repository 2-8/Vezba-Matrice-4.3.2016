#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "hederi.h"
using namespace std;
void main()
{
	int bv,bk,a[10][10],at[10][10],bvt,bkt,i,b=0;
	cout<<"Unesite bv i bk "<<endl;
	cin>>bv>>bk;
	UcitavanjeMR(a,bv,bk);
	cout<<endl;
	IspisM(a,bv,bk);
	cout<<endl;
	bvt=bk;
	bkt=bv;
	cout<<endl;
	TransponovanaMatrica(a,at,bv,bk);
	cout<<"trans matrica"<<endl;
	IspisM(at,bvt,bkt);cout<<endl;
	sumaMK(at,bvt,bkt);cout<<endl;
	for(i=0;i<bv;i++)
		{{for(b=0;b<i;b++)
		kruznipomakNiza(a[i],bk);cout<<endl;}
	b=0;}
	IspisM(a,bv,bk);cout<<endl;
	TransponovanaMatrica(a,at,bv,bk);cout<<endl;
	cout<<"trans matrica"<<endl;
	IspisM(at,bvt,bkt);cout<<endl;
	sumaMK(at,bvt,bkt);cout<<endl;
	

	
	system("pause");
}