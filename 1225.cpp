#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	long long int dp[n];
	
	if(n==1||n==2)cout<<"2";
	
	else if(n==3)cout<<"4";
	
	else{
		
		dp[0]=2;
		
		dp[1]=2;
		
		dp[2]=4;
		
		for(int i=3;i<n;i++){
			
			dp[i]=dp[i-1]+dp[i-2];
			
		}	
		
		cout<<dp[n-1];
		
	}
	
}

