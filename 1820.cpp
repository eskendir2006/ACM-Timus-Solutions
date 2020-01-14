#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	
	cin>>a>>b;
	
	if(a<=b){
		
		cout<<2;
		
	}
	
	else{
		
		if((a*2)%b==0){
		
			cout<<(a*2)/b;
		
		}
		else cout<<((a*2)/b)+1;
	}
	
}
