#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
	
//	freopen("text.txt" , "r",stdin);
//	freopen("file.txt" , "w",stdout);
	
	int n;
	
	bool t=0;
	
	map<string,string>m;
	map<string,bool>in;
	map<string,bool>out;
	map<string,bool>reg;
	
	vector<string>v;
	
	cin>>n;
	
	string a,b,c;
	
	for(int i=0;i<n;i++){
		
		cin>>a;
		
		if(a=="register"){
			
			cin>>b>>c;
			
		
			
			if(reg[b]){
				
				cout<<"fail: user already exists"<<endl;
				
			}
			
			else{
		
			 	cout<<"success: new user added"<<endl;
			 	
			 	m[b]=c;
			 
			    reg[b]=1;
			    
			    out[b]=1;
			    
			    in[b]=0;
			    
			}
			
			v.push_back(b);
			
		}
		
		if(a=="login"){
			
			cin>>b>>c;
			
			for(int j=0;j<v.size();j++){
				
			    if(b==v[j]){
			    	
			    	t=1;
			    	
			    	break;
			    	
				}	
				
			}
			
			if(t){
				
				t=0;
				
				if(c!=m[b]){
					
					cout<<"fail: incorrect password"<<endl;
					
				}
				
				else{
					
					if(in[b]){
						
						cout<<"fail: already logged in"<<endl;
						
					}
					
					else{
						
						cout<<"success: user logged in"<<endl;
						
						in[b]=1;
						
						out[b]=0;
						
					}
					
				}
				
			}
			
			else cout<<"fail: no such user"<<endl;
			
			t=0;
			
		}
		if(a=="logout"){
			
			cin>>b;
			
			for(int j=0;j<v.size();j++){
				
			    if(b==v[j]){
			    	
			    	t=1;
			    	
			    	break;
			    	
				}	
				
			}
			
			if(t){
				
				t=0;
				
				if(out[b]){
				
				cout<<"fail: already logged out"<<endl;
				
				}
				else{
				
					out[b]=1;
					
					in[b]=0;
				
					cout<<"success: user logged out"<<endl;
				
				}
				
			}
			
			else cout<<"fail: no such user"<<endl;
			
			t=0;
			
		}
	}
	
}
