#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,ans=0;
	
	cin>>n;
	
	string s[n];
	
	for(int i=0;i<n;i++){
		
		cin>>s[i];
		
	}
	
	char k;
	
	cin>>k;
	
	for(int i=0;i<n;i++){
		
		if(s[i][0]==k)cout<<s[i]<<endl;
		
	}
	
}
