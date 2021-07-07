#include<bits/stdc++.h>
using namespace std ;


void fun() {

    int count=0 ; 

    int n, k ;
    cin>>n>>k ;

    string s = "7007" ;

    vector<pair<string, int> >v ;

    for(int i=0; i<n; i++) {
        string str = "" ;
        int x ;

        cin>>str ;
        cin>>x ;

        v.push_back(make_pair(str, x)) ;

    }

    for(auto i=0; i<n; i++) {
        int j = 0 ;
        string si = v[i].first ;

        for(j=0; j<s.size(); j++){
            if(s[j]!=si[j])
                break ;
        }

        if(j==4 && v[i].second == k)
            count++ ;
    }

    cout<<count<<endl ;

}


int main()
{

    int t ;
    cin>>t ;

    while(t--){
        fun() ;
    }


}\