//
//  main.cpp
//  Triangles
//
//  Created by Mikołaj Deja on 16/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, a, b, c;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>a>>b>>c;
        if(a+b<c || a+c<b || b+c<a)
        {
            cout<<endl<<"0";
        } else {
            cout<<endl<<"1";
        }
    }
    return 0;
}
