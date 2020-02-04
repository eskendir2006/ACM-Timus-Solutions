#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	string s[4];

	s[0]="16";
	s[1]="06";
	s[2]="68";
	s[3]="88";
	
	if(n<=4){
		
		for(int i=0;i<n;i++){
			
			cout<<s[i]<<" ";
			
		}
		
	}	
	else cout<<"Glupenky Pierre";
	
}
//16 06 68 88
