#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a1,b1;
	
	cin>>a1>>b1;
	
	int arr[b1],d1=0;
	
	for(int i=0;i<b1;i++){
		
		cin>>arr[i];
		
		d1+=arr[i];
		
		if(d1-a1<0)d1=0;
		else d1-=a1;
		
	}
	
	cout<<d1;
	
	return 0;
	
}
