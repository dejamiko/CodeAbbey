//
//  main.cpp
//  Flying Text Screensaver
//
//  Created by Mikołaj Deja on 07/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n=101;
    int h, w, l, x=0, y=0, xv=1, yv=1;
    cin>>w>>h>>l;
    for(int i=0; i<n; ++i)
    {
        cout<<x<<" "<<y<<" ";
        if(((x>=w-l) && (xv>0)) || ((x<=0) && (xv<0)))
            xv=-xv;
        if(((y>=h-1) && (yv>0)) || ((y<=0) && (yv<0)))
            yv=-yv;
        x=x+xv;
        y=y+yv;
    }
    cout<<endl;
}
