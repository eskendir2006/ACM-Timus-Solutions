#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
	
//	freopen("text.txt" , "r",stdin);
//	freopen("file.txt" , "w",stdout);
	
	string c;
	
	cin>>c;
	
	int arr[27];
	
	for(int i=1;i<=26;i++){
		
		arr[i]=0;
		
	}
	
	for(int i=0;i<c.size();i++){
		
		arr[c[i]-96]++;
		
	}
	
	int mx=0;
	
	for(int i=1;i<=26;i++){
		
		mx=max(mx,arr[i]);
		
	}
	
	for(int i=1;i<=26;i++){
		
		if(mx==arr[i]){
			
			cout<<char(96+i);
			
			return 0;
			
		}
		
	}
	
}
