#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	
	cin>>n>>k;
	
	int arr[n];
	
	int ans=0,aans=0,f=0;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
	}
	
	for(int i=0;i<n;i++){
		
		f=k-arr[i];
		
		if(f<0){
			
			aans+=abs(f);
			
		}
		
		else ans+=f;
		
	}
	
	cout<<aans<<" "<<ans;
	
}
