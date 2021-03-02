//
//  main.cpp
//  Combinations Counting
//
//  Created by Mikołaj Deja on 29/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    long double N, K, ans;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        ans=1;
        cin>>N>>K;
        if(N-K<K)
            K=N-K;
        
        while(K>0)
        {
            ans*=N-K+1;
            ans/=K;
            K--;
        }
        cout<<(long int)ans<<" ";
    }
    return 0;
}
