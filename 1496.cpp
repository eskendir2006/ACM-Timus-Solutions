#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
	
//	freopen("text.txt" , "r",stdin);
//	freopen("file.txt" , "w",stdout);
	
	int n,ans=0;
	
	map<string,bool>m;
	
	cin>>n;
	
	string s[n+1];
	
	for(int i=0;i<=n;i++){
		
		cin>>s[i];
		
		m[s[i]]=0;
		
	}
	
	for(int i=0;i<=n;i++){
		
		if(m[s[i]])ans++;
		
		m[s[i]]=1;
		
	}
	
	cout<<ans;
	
}
