//
//  main.cpp
//  Pythagorean Triples
//
//  Created by Mikołaj Deja on 12/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long int n, s, M, N;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>s;
        s/=2;
        for(int i=2; i*i<s; ++i)
        {
            if(s%i==0)
            {
                M=i;
                N=s/i-M;
                if(M-N>N)
                    break;
            }
        }
        cout<<setprecision(15)<<pow(pow(M, 2)+pow(N, 2),2)<<" ";
    }
    cout<<endl;
}
