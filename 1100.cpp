#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector< pair<int ,int> > v;
    for(int i=0;i<n;i++){
    	
        int a,b;
        
        cin>>a>>b;
        
        v.push_back(make_pair(a,b));
        
    }
    for(int i=100;i>=0;--i)
    {
        for(int j=0;j<n;j++)
        {
            if(i==v[j].second) cout << v[j].first << " " << v[j].second << endl;
        }
    }

}
