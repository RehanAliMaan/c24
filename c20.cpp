#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float e1,e2,g1,g2,p1,p2;
	cout<<"enter the current electricity rate"<<endl;
	cin>>e1;
	cout<<"enter the current gas rate"<<endl;
	cin>>g1;
	cout<<"enter the current petrol rate"<<endl;
	cin>>p1;
	e2=e1*1.1;
	p2=p1*1.1;
	g2=g1*1.1;
	cout<<"new electricity rate is"<<e2<<endl;
	cout<<"new patrol rate is"<<p2<<endl;
	cout<<"new gas rate is"<<g2<<endl;
	


	
}