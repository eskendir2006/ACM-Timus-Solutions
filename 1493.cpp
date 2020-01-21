#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,ans=0;
	
	cin>>n;
	
	int tn=n+1,mn=n-1;
	
	int tn1=tn/100000,mn1=mn/100000,tn2=tn%100000/10000,mn2=mn%100000/10000,tn3=tn%10000/1000,mn3=mn%10000/1000,tn4=tn%1000/100,mn4=mn%1000/100,tn5=tn%100/10,mn5=mn%100/10,tn6=tn%10,mn6=mn%10;
	
	if(tn1+tn2+tn3==tn4+tn5+tn6||mn1+mn2+mn3==mn4+mn5+mn6)cout<<"Yes";
	else cout<<"No";
	
}
