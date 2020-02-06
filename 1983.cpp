#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    
    char n;
    
	 cin>>r>>n;
    

    if(r>=1&&r<=2)
    {
        if(n=='A'||n=='D')
            cout << "window";
            
        else if(n=='B'||n=='C')
            cout<<"aisle";
            
    }
    else if(r>=3&&r<=20)
    {
        if(n=='A'||n=='F')
            cout<<"window";
            
        else if(n=='B'||n=='C'||n=='D'||n=='E')
            cout<<"aisle";
            
    }

    else if(r>=21&&r<=65){
        if (n=='A' || n=='K')
            cout<<"window";
            
        else if(n=='B'||n=='E'||n=='F'||n=='J')
            cout<<"neither";
            
        else if(n=='C'||n=='D'||n=='G'||n=='H')
        cout<<"aisle";
        
    }
    
    return 0;
	
}
