//
//  main.cpp
//  Parity Control
//
//  Created by Mikołaj Deja on 30/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int count(int x){
    int count=0;
    while(x>=1)
    {
        if(x%2==1)
            count++;
        x/=2;
    }
    return count;
}

int main(){
    int mess[256];
    memset(mess, 0, 256*4);
    cout<<endl;
    int i=0;
    cin>>mess[i++];
    
    while(mess[i-1]!=46)
    {
        cin>>mess[i];
        i++;
    }
    
    for(int j=0; j<i; ++j)
        if(count(mess[j])%2==1)
            mess[j]=0;
    
    for(int j=0; j<i; ++j)
        if(mess[j]>'z')
            mess[j]-=128;
    
    for(int j=0; j<i; ++j)
        cout<<(char)mess[j];

    cout<<endl;
    return 0;
}
