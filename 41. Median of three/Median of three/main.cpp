//
//  main.cpp
//  Median of three
//
//  Created by Mikołaj Deja on 16/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

void median(int c, int small, int big)
{
    if((c!=big) && (c!=small))
        cout<<endl<<c;
}


int main(){
    int number, a, b, c;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>a>>b>>c;
        int big, small;
        big=max(a, max(b, c));
        small=min(a, min(b, c));
        median(a, big, small);
        median(b, big, small);
        median(c, big, small);
    }
    return 0;
}
