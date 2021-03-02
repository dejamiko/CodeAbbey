//
//  main.cpp
//  Bit Count
//
//  Created by Mikołaj Deja on 26/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    unsigned int n, x, count;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        count=0;
        cin>>x;
        while(x>=1)
        {
            if(x%2==1)
                count++;
            x/=2;
        }
        cout<<count<<endl;
    }
    cout<<endl;
    return 0;
}
