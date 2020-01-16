#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a1;
	
	cin>>a1;
	
	for(int i=0;i<a1;i++){
		
		string b1;
		
		cin>>b1;
		
		if(b1=="c3"||b1=="c4"||b1=="c5"||b1=="c6"||b1=="d3"||b1=="d4"||b1=="d5"||b1=="d6"||b1=="e3"||b1=="e4"||b1=="e5"||b1=="e6"||b1=="f3"||b1=="f4"||b1=="f5"||b1=="f6")cout<<8<<endl;
		else if(b1=="b3"||b1=="b4"||b1=="b5"||b1=="b6"||b1=="g3"||b1=="g4"||b1=="g5"||b1=="g6"||b1=="c2"||b1=="d2"||b1=="e2"||b1=="f2"||b1=="c7"||b1=="d7"||b1=="e7"||b1=="f7")cout<<6<<endl;
		else if(b1=="h3"||b1=="h4"||b1=="h5"||b1=="h6"||b1=="a3"||b1=="a4"||b1=="a5"||b1=="a6"||b1=="c1"||b1=="d1"||b1=="e1"||b1=="f1"||b1=="c8"||b1=="d8"||b1=="e8"||b1=="f8"||b1=="g2"||b1=="b2"||b1=="g7"||b1=="b7")cout<<4<<endl;
		else if(b1=="b1"||b1=="a2"||b1=="g1"||b1=="h2"||b1=="h7"||b1=="g8"||b1=="a7"||b1=="b8")cout<<3<<endl;
		else cout<<2<<endl;
		
	}
	
}
