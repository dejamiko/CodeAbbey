//
//  main.cpp
//  Ceasar Shift Cipher
//
//  Created by Mikołaj Deja on 26/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, k;
    string line;
    cin>>n>>k;
    getline(cin, line);
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        getline(cin, line);
        int len=line.size();
        for(int j=0; j<len; ++j)
        {
            if(line[j]>='A' && line[j]<='Z')
                line[j]=char((line[j]-k-65+26)%26+65);
        }
        cout<<line<<endl;
    }
    cout<<endl;
    return 0;
}
