#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
	
//	freopen("text.txt" , "r",stdin);
//	freopen("file.txt" , "w",stdout);
	
	int n;
	
	map<string,int>m;
	
	cin>>n;
	
	string s[n];
	
	for(int i=0;i<n;i++){
		
		cin>>s[i];
		
		m[s[i]]=0;
		
	}
	
	for(int i=0;i<n;i++){
		
		m[s[i]]++;
		
	}
	
	set<string>ss;
	
	for(int i=0;i<n;i++){
		
	    if(m[s[i]]>1)ss.insert(s[i]);
		
	}
	
	for(auto &j : ss)cout<<j<<endl;
	
}
