#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a;
	
	cin>>a;
	
	int arr[a];
	
	for(int i=0;i<a;i++){
		
		cin>>arr[i];
		
	}
	
	int tn=0,cl=1,t,pos=0;
	
	while(tn<a){
		
		cl=1;
		
		for(int i=pos;i<a;i++){
			
			if(arr[i]==arr[i+1]){
				
				cl++;
				
			}
			else{
				
				pos=i+1;
				t=arr[i];
				
				break;
				
			}
		}
		
		tn+=cl;
		
		cout<<cl<<" "<<t<<" ";
		
	}
}
