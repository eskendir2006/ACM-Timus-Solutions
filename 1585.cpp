#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a;
	
	cin>>a;
	
	int e=0,m=0,l=0;
	
	for(int i=1;i<=a+1;i++){
		
		string s;
		
		getline(cin,s);
		
		if(s[0]=='L')l++;
		else if(s[0]=='M')m++;
		else if(s[0]=='E')e++;
		
	}
	
	if(l>e&&l>m)cout<<"Little Penguin";
	else if(e>l&&e>m)cout<<"Emperor Penguin";
	else if(m>e&&m>l)cout<<"Macaroni Penguin";
	
}
