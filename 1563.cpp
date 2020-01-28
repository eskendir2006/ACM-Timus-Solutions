#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
	
//	freopen("text.txt" , "r",stdin);
//	freopen("file.txt" , "w",stdout);
	
	int n,ans=0;
	
	set<string>ss;
	
	cin>>n;
	
	string s;
	
	for(int i=0;i<=n;i++){
		
		getline(cin,s);
		
		ss.insert(s);
		
	}
	
	cout<<n-ss.size()+1;
	
}
