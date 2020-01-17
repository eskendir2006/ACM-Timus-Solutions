#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string c;
	
	getline(cin , c);
	
	int ans=0;
	
	for(int i=0;i<c.size();i++){
		
		if(c[i]=='a'||c[i]=='d'||c[i]=='g'||c[i]=='j'||c[i]=='m'||c[i]=='p'||c[i]=='s'||c[i]=='v'||c[i]=='y'||c[i]=='.'||c[i]==' ')ans++;
		else if(c[i]=='b'||c[i]=='e'||c[i]=='h'||c[i]=='k'||c[i]=='n'||c[i]=='q'||c[i]=='t'||c[i]=='w'||c[i]=='z'||c[i]==',')ans+=2;
		else if(c[i]=='c'||c[i]=='f'||c[i]=='i'||c[i]=='l'||c[i]=='o'||c[i]=='r'||c[i]=='u'||c[i]=='x'||c[i]=='!')ans+=3;
		
	}
	
	cout<<ans;
	
}
//a d g j m p s v y . _ == 1
// b e h k n q t w z , ==2
// c f i l o r u x ! ==3
