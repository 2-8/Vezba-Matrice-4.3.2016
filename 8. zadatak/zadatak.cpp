#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "hederi.h"
using namespace std;
void main()
{
	int a[10][10], bv, bk, v;
	cout<<"\nUnesi broj vrsta i kolona> ";
	cin>>bv>>bk;

	ucitajMat(a,bv,bk);
	ispisMat(a,bv,bk);
	int visePob = 0, bezPor = 0;
	
	for (v=0;v<bv;v++)
		if (brojPobeda(a[v], bk) > brojPoraza(a[v],bk))
		{
			cout<<endl<<v<<".> ";
			ispisNiz(a[v],bk);
			visePob ++;
		}
	cout<<"\nSa vise pobeda ukupno "<<visePob<<" ekipa.\n";

	for (v=0;v<bv;v++)
		if (bezPoraza(a[v], bk) == 1)
		{
			cout<<endl<<v<<".> ";
			ispisNiz(a[v],bk);
			bezPor++;
		}
		cout<<"\nBroj ekipa bez poraza "<<bezPor;
		cout<<endl<<endl;
	system("pause");
}
