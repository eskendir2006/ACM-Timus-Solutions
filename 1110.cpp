#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;cin>>a>>b>>c;int f = 0,t=-1;
    for(int i=0;i<b;i++){
        	
        int x=i;
        long long y=x;
            
        for(int j=2;j<a+1;j++){
            	
            y *= x;
            y %= b;
                
        }
        
        if(y==c){
                    
            cout <<x<<" ";
                
            f++;
                
        }
        
    }
    if (f==0)cout<<t;
    
    cout<<endl;
    
    return 0;
	
}
