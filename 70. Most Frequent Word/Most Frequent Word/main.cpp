//
//  main.cpp
//  Most Frequent Word
//
//  Created by Mikołaj Deja on 16/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

const int k=900000;
string words[k];

int main(){
    int x0, a=445, c=700001, m=2097152;
    char cons[]={'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't', 'v', 'w', 'x', 'z'}, vovs[]={'a', 'e', 'i', 'o', 'u'};
    string freq;
    cin>>x0;
    cout<<endl;
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<6; ++j)
        {
            x0=(a*x0+c)%m;
            if(j%2==0)
                words[i]+=cons[x0%19];
            else
                words[i]+=vovs[x0%5];
        }
    }
    sort(words, words+k);
    int counter=0, max=0;
    for(int i=0; i<k; ++i)
    {
        while(words[i]==words[i+1])
        {
            counter++;
            i++;
        }
        if(counter>max)
        {
            max=counter;
            freq=words[i];
        }
        counter=0;
    }
    cout<<freq<<" ";
        
    cout<<endl;
    return 0;
}
