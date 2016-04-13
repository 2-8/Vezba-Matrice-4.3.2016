#include <stdlib.h>
#include <iostream>
#include "hederi.h"
using namespace std;
void main()
{
	int bv,bk,a[10][10],i,rez;
	cout<<"Unesite bv i bk "<<endl;
	cin>>bv>>bk;
	UcitavanjeMR(a,bv,bk);
	cout<<endl;
	IspisM(a,bv,bk);
	cout<<endl;
	sumaMK(a,bv,bk); cout<<endl;
	for(i=0;i<bv;i++)
	{
		rez=izbaciizNizaclan(a[i],bk,i);
	}

	IspisM(a,bv,rez);cout<<endl;
	sumaMK(a,bv,rez);
	

	
	system("pause");
}