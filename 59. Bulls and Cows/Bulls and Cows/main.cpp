//
//  main.cpp
//  Bulls and Cows
//
//  Created by Mikołaj Deja on 29/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(){
    int n, x, y;
    string secret;
    string guess;
    cin>>secret>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        x=0;
        y=0;
        cin>>guess;
        for(int j=0; j<4; ++j)
            if(secret[j]==guess[j])
                x++;
        for(int j=0; j<4; ++j)
            for(int k=0; k<4; ++k)
                if(secret[j]==guess[k])
                    y++;
        y=y-x;
        cout<<x<<"-"<<y<<" ";
    }
    return 0;
}
