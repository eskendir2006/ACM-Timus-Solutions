#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int ans=0;
	
	if(n>0){
		
		for(int i=1;i<=n;i++){
			
			ans+=i;
			
		}
		
	}
	else{
		
		for(int i=1;i>=n;i--){
			
			ans+=i;
			
		}
		
	}
	
	cout<<ans;
	
}
