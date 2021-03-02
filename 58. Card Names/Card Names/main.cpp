//
//  main.cpp
//  Card Names
//
//  Created by Mikołaj Deja on 28/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string suits[] = {"Clubs", "Spades", "Diamonds", "Hearts"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    int n, k;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>k;
        cout<<ranks[k%13]<<"-of-"<<suits[k/13]<<" ";
    }
    
    
    return 0;
}
