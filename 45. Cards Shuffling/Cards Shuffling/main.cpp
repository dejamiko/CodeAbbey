//
//  main.cpp
//  Cards Shuffling
//
//  Created by Mikołaj Deja on 03/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    string deck[]={"CA", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CT", "CJ", "CQ", "CK", "DA", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK", "HA", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK", "SA", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK"};
    cout<<endl;
    int shuffles[51];
    for(int i=0; i<52; ++i)
        cin>>shuffles[i];
    for(int i=0; i<52; ++i)
        shuffles[i]=shuffles[i]%52;
    for(int i=0; i<52; ++i)
        swap(deck[i], deck[shuffles[i]]);
    for(int i=0; i<52; ++i)
        cout<<deck[i]<<" ";
    cout<<endl;
    return 0;
}
