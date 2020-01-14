#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a;
	
	cin>>a;
	
	int arr[a];
	
	for(int i=0;i<a;i++){
		
		cin>>arr[i];
		
	}
	
	int mx=0,pos=0,sum=0;
	
	for(int i=0;i<a-2;i++){
		
		for(int j=i;j<i+3;j++){
			
			mx+=arr[j];
			
		}
		
		if(mx>sum){
			
			sum=mx;
			mx=0;
			pos=i+2;
			
		}
		
		mx=0;
		
	}
	
	cout<<sum<<" "<<pos;
	
}
