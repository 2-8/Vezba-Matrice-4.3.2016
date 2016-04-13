#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "hederi.h"
using namespace std;
void main()
{
int a[10][10],bv,bk,r,v,k,r1,v1,k1,an[10][10];
	cout<<"unesite bv i bk:\n";
	cin>>bv>>bk;
	UcitavanjeMR(a,bv,bk);
	IspisM(a,bv,bk);
	cout<<endl;
	MAX(a,bv,bk,&r,&v,&k);
	cout<<"vrednost max je "<<r<<" pozicija max je "<<v<<k<<endl;
	MIN(a,bv,bk,&r1,&v1,&k1);
	cout<<"vrednost min je "<<r1<<" pozicija minumuma je "<<v1<<k1<<endl;
	ZamRed(v,v1,a);
	IspisM(a,bv,bk);cout<<endl;
	TransponovanaMatrica(a,an,bv,bk);
	IspisM(an,bk,bv);
	MAX(an,bk,bv,&r,&v,&k);
	cout<<"vrednost max je "<<r<<" pozicija max je "<<v<<k<<endl;
	MIN(an,bk,bv,&r1,&v1,&k1);
	cout<<"vrednost min je "<<r1<<" pozicija minumuma je "<<v1<<k1<<endl;
	ZamRed(v,v1,an);
	IspisM(an,bk,bv);cout<<endl;
	TransponovanaMatrica(an,a,bk,bv);
	IspisM(a,bv,bk);
	
	
		

	
	

	system("pause");
}