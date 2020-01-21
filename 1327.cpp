#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k,ans=0;
	
	cin>>n>>k;
	
	for(int i=n;i<=k;i++){
		
		if(i%2==1)ans++;
		
	}
	
	cout<<ans;
	
}
