//
//  main.cpp
//  Rounding
//
//  Created by Mikołaj Deja on 09/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    float m, n, a;
    cin>>m;
    for(int i=0; i<m; ++i)
    {
        cin>>n>>a;
        a=n/a;
        int temporary = (int)a;
        if(a>=0)
        {
            if(temporary+1-a<=a-temporary)
            {
                cout<<temporary+1<<endl;
            } else {
                cout<<temporary<<endl;
            }
        } else {
            if(temporary-1-a>=a-temporary)
            {
                cout<<temporary-1<<endl;
            } else {
                cout<<temporary<<endl;
            }
        }
    }
    return 0;
}
