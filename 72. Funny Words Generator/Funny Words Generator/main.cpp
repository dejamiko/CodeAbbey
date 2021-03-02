//
//  main.cpp
//  Funny Words Generator
//
//  Created by Mikołaj Deja on 05/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, N, x0, a=445, c=700001, m=2097152;
    char cons[]={'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't', 'v', 'w', 'x', 'z'}, vovs[]={'a', 'e', 'i', 'o', 'u'};
    cin>>n>>x0;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>N;
        for(int j=0; j<N; ++j)
        {
            x0=(a*x0+c)%m;
            if(j%2==0)
                cout<<cons[x0%19];
            else
                cout<<vovs[x0%5];
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
