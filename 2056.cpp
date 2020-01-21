#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
			
		cin>>arr[i];
			
	}
	
	double sum=0;
	
	for(int i=0;i<n;i++){
		
		if(arr[i]==3){
			
			cout<<"None";
			
			return 0;
			
		}
		
		sum+=arr[i];
		
	}
	
	if(sum/n==5)cout<<"Named";
	else if(sum/n>=4.5)cout<<"High";
	else cout<<"Common";
	
}
