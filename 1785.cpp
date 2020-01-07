	#include <bits/stdc++.h>
	
	using namespace std;
	
	int main(){
		
		int a;
		
		cin>>a;
		
		if( a>=1 and a<=4 ) cout << "few";
		else if( a>=5 and a<=9 ) cout << "several";
		else if( a>=10 and a<=19 ) cout << "pack";
		else if( a>=20 and a<=49 ) cout<< "lots";
		else if( a>=50 and a<=99 ) cout << "horde";
		else if( a>=100 and a<=249 ) cout << "throng";
		else if( a>=250 and a<=499 ) cout << "swarm";
		else if( a>=500 and a<=999 ) cout << "zounds";
		else if( a>=1000 ) cout <<"legion";
		
		return 0;
		
	}
