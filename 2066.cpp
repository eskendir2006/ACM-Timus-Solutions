#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;
	
	cin>>a>>b>>c;
	
	int f=a-b-c,g=a-b*c;
	
	cout<<min(f,g);
	
}
