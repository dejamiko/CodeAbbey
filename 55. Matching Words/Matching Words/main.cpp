//
//  main.cpp
//  Matching Words
//
//  Created by Mikołaj Deja on 27/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string all[500];
    string last;
    int i=0;
    cin>>all[i];
    i++;
    while(all[i-1]!="end")
    {
        cin>>all[i];
        ++i;
    }
    i--;
    string selected[i];
    for(int j=0; j<i; ++j)
        selected[j]=all[j];
    sort(selected, selected+i);
    for(int j=0; j<i; ++j)
        if(selected[j]==selected[j+1] && last!=selected[j])
        {
            last=selected[j];
            cout<<selected[j]<<" ";
            j++;
        }
    
    return 0;
}
