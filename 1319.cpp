#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,pos=0,ans=1;
	
	cin>>a;
	
	int arr[a][a];
	
	for(int i=0;i<a;i++){
		
		for(int j=0;j<a;j++){
			
			arr[i][j]=0;
			
		}
		
	}
	
	int n=0,m=a-1,v=0,g=1,f=a-1,c=0;v=a-1;
	
	for(int i=0;i<a;i++){
		
		for(int j=0;j<g;j++){
			
			arr[c][v]=ans;
			
			ans++;
			c++;
			v++;
			
		}
		
		c=0;
		f--;
		v=f;
		g++;
		
	}
	
	g-=2;
	
	c=1,v=0,f=1;
	
	for(int i=0;i<((a*2)-1)-a;i++){
		
		for(int j=0;j<g;j++){
			
			arr[c][v]=ans;
			
			ans++;
			v++;
			c++;
			
		}
		
		g--;
		f++;
		v=0;
		c=f;
		
	}
	
	for(int i=0;i<a;i++){
		
		for(int j=0;j<a;j++){
			
			cout<<arr[i][j]<<" ";
		}
		
		cout<<endl;
		
	}
	
}
