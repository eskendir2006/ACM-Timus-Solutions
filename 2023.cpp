#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,pos=0,ans=0;
	
	cin>>n;
	
	string s[n];
	
	for(int i=0;i<n;i++){
		
		cin>>s[i];
		
	}
	
	for(int i=0;i<n;i++){
		
		if(s[i]=="Alice"||s[i]=="Ariel"||s[i]=="Aurora"||s[i]=="Phil"||s[i]=="Peter"||s[i]=="Olaf"||s[i]=="Phoebus"||s[i]=="Ralph"||s[i]=="Robin"){
			
			if(pos==1||pos==2){
				
				ans+=pos;
				pos=0;
				
			}
			
		}
		else if(s[i]=="Bambi"||s[i]=="Belle"||s[i]=="Bolt"||s[i]=="Mulan"||s[i]=="Mowgli"||s[i]=="Mickey"||s[i]=="Silver"||s[i]=="Simba"||s[i]=="Stitch"){
			
			if(pos==0||pos==2){
				
				ans++;
				pos=1;
				
			}
			
		}
		else if(s[i]=="Dumbo"||s[i]=="Genie"||s[i]=="Jiminy"||s[i]=="Kuzko"||s[i]=="Kida"||s[i]=="Kenai"||s[i]=="Tarzan"||s[i]=="Tiana"||s[i]=="Winnie"){
			
			if(pos==0){
				
				ans+=2;
				pos=2;
				
			}
			else if(pos==1){
				
				ans++;
				pos=2;
				
			}
			
		}
		
	}
	
	cout<<ans;
	
}
