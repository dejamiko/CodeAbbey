//
//  main.cpp
//  Minimum of three
//
//  Created by Mikołaj Deja on 09/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, a, b, c;
    cin>>number;
    for(int i=0; i<number; ++i)
    {
        cin>>a>>b>>c;
        if(a<b)
        {
            if(a<c)
            {
                cout<<a<<endl;
            } else {
                cout<<c<<endl;
            }
        } else {
            if(c<b)
            {
                cout<<c<<endl;
            } else {
                cout<<b<<endl;
            }
        }
    }
    return 0;
}
