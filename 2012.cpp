	#include <bits/stdc++.h>
	
	using namespace std;
	
	int main(){
		
		int n,c=12,t=300;
	
		cin>>n;
		
		c-=n;
		t-=60;
		c*=45;
		
		if( c<t )cout <<"YES";
		else cout <<"NO";
		
		return 0;
		
	}
