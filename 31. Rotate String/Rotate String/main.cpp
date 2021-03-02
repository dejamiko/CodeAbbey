//
//  main.cpp
//  Rotate String
//
//  Created by Mikołaj Deja on 23/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    int k, n, N;
    cin>>N;
    for(int i=0; i<N; ++i)
    {
        cin>>k>>line;
        k=-k;
        n=line.size();
        char temp;
        k=(k+n)%n;
        for(int j=0; j<k; ++j)
        {
            temp=line[n-1];
            for(int i=n-1; i>=0; --i)
            {
                line[i]=line[i-1];
            }
            line[0]=temp;
        }
        for(int i=0; i<n; ++i)
            cout<<line[i];
        cout<<endl;
    }
    return 0;
}
