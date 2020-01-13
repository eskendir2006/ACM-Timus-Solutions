#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int ans=0;
	
	vector<long int>v;
	
	int a;
	
	cin>>a;
	
	int arra[a];
	
	for(int i=0;i<a;i++){
		
		cin>>arra[i];
		
	}
	
	int b;
	
	cin>>b;
	
	int arrb[b];
	
	for(int i=0;i<b;i++){
		
		cin>>arrb[i];
		
	}
	
	int c;
	
	cin>>c;
	
	int arrc[c];
	
	for(int i=0;i<c;i++){
		
		cin>>arrc[i];
		
	}
	for(int i=0;i<a;i++){
		
		for(int j=0;j<b;j++){
			
			if(arrb[j]==arra[i]){
				
				for(int k=0;k<c;k++){
					
					if(arrb[j]==arrc[k]){
						
						ans++;
						
					}
					
				}
				
			}
			
		}
		
	}
	
	cout<<ans;
	
}
