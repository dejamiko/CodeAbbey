//
//  main.cpp
//  Modular calculator
//
//  Created by Mikołaj Deja on 21/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char signs[1000];
    int numbers[1001], i=0, modulo=0, answer=0;
    cin>>numbers[0]>>signs[0]>>numbers[1];
    while(signs[i]!='%')
    {
        i++;
        cin>>signs[i]>>numbers[i+1];
    }
    modulo=numbers[i+1];
    answer=numbers[0]%modulo;
    for(int j=0; j<i; ++j)
    {
        if(signs[j]=='*')
            answer=(answer*numbers[j+1])%modulo;
        if(signs[j]=='+')
            answer=(answer+numbers[j+1])%modulo;
    }
    cout<<answer<<endl;
    return 0;
}
