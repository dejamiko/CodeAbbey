//
//  main.cpp
//  Variable Length Code
//
//  Created by Mikołaj Deja on 15/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    char codelet[28]={' ', 'e', 't', 'o', 'n', 'a', 's', 'i', 'r', 'h', 'd', 'l', '!', 'u', 'c', 'f', 'm', 'p', 'g', 'w', 'b', 'y', 'v', 'j', 'k', 'x', 'q', 'z'};
    string codecode[28]={"11", "101", "1001", "10001", "10000", "011", "0101", "01001", "01000", "0011", "00101", "001001", "001000", "00011", "000101", "000100", "000011", "0000101", "0000100", "0000011", "0000010", "0000001", "00000001", "000000001", "0000000001", "00000000001", "000000000001", "000000000000"};
    string line, encoded;
    getline(cin, line);
    for(int i=0; i<line.size(); ++i)
        for(int j=0; j<28; ++j)
            if(line[i]==codelet[j])
                encoded+=codecode[j];
    
    while(encoded.size()%8!=0)
        encoded+='0';
    
    for(int i=0; i<encoded.size(); ++i)
    {
        int sum=0;
        for(int j=0; j<8 && i<encoded.size(); ++j)
        {
            sum+=(encoded[i]-48)*pow(2, 7-j);
            i++;
        }
        if(sum<16)
            cout<<"0";
        cout<<hex<<sum<<" ";
        i--;
    }
    cout<<endl;
    return 0;
}
