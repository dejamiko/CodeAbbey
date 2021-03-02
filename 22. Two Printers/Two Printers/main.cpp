//
//  main.cpp
//  Two Printers
//
//  Created by Mikołaj Deja on 28/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    long long int x, y, N;
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>x>>y>>N;
        int j=0;
        if(N>1000000)
        {
            long long int times[1000];
            while(j<1000)
            {
                times[j]=max(x*(j+floor(y*N/(x+y))-500), y*(N-(j+floor(y*N/(x+y))-500)));
                j++;
            }
                
            sort(times, times+1000);
            cout<<times[0]<<endl;
        }
        else
        {
            long long int times[N];
            while(j<N)
            {
                times[j]=max(x*j, y*(N-j));
                j++;
            }
                
            sort(times, times+N);
            cout<<times[0]<<endl;
        }
    }
    return 0;
}
