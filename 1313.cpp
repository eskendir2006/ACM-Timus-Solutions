#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,pos=0,ans=1;
	
	cin>>n;
	
	int arr[n][n];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			cin>>arr[i][j];
			
		}
		
	}
	
	
	
	for(int i=0;i<n;i++){
		int n=i,m=0;
		for(int j=0;j<=i;j++){
			
			cout<<arr[n][m]<<" ";
			
			n-=1;
			m+=1;
			
		}
		
	}
	
	int c=n-1,v=1,g=n-1,h=1;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<g;j++){
			
			cout<<arr[c][v]<<" ";
			
			c--;
			v++;
			
		}
		h++;
		v=h;
		g--;
		c=n-1;
		
	}
	
}
