#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a;
	
	vector <double> v;
	
	while (cin >> a) {
		 
		   v.push_back(a);
		 
	}
	
	for (int i = v.size() - 1; i >= 0; --i){
		 
		 cout.precision(4);
		 cout << fixed << sqrt(v[i]) << endl;
		 
	}
	
	return 0;
	
}
