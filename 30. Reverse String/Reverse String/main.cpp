//
//  main.cpp
//  Reverse String
//
//  Created by Mikołaj Deja on 20/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word, copy;
    getline(cin, word);
    copy=word;
    int n=word.length();
    for(int i=0; i<n; ++i)
        word[i]=copy[n-1-i];
    cout<<word;
    return 0;
}
