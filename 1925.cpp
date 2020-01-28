#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
	
//	freopen("text.txt" , "r",stdin);
//	freopen("file.txt" , "w",stdout);
	
	int n,k;
	
	cin>>n>>k;
	
	int nans=0,ans=0;
	
	for(int i=0;i<n;i++){
		
		int a,b;
		
		cin>>a>>b;
		
		ans+=b;
		
		nans+=a-2;
		
	}
	
	if(nans+k<=ans)cout<<"Big Bang!";
	
	else cout<<((nans+k)-ans)-2;
	
}
