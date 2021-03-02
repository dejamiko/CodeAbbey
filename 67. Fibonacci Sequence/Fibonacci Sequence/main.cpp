//
//  main.cpp
//  Fibonacci Sequence
//
//  Created by Mikołaj Deja on 10/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, rem;
    string line;
    char fib[210], fibbef[210], fibbef2[210], numb[210];
    cin>>n;
    getline(cin, line);
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        bool contin=true;;
        getline(cin, line);
        if(line.size()==1 && line[0]=='0')
        {
            cout<<0<<" ";
            contin=false;
        }
        if(line.size()==1 && line[0]=='1')
        {
            cout<<1<<" ";
            contin=false;
        }
        
        while(line.size()<210)
            line='0'+line;
        strcpy(numb, line.c_str());
        for(int i=0; i<210; ++i)
        {
            fib[i]='0';
            fibbef[i]='0';
            fibbef2[i]='0';
        }
        int counter=2;
        bool same=0;
        fibbef[209]='1';
        fibbef2[209]='1';
        while(!same && contin && counter<=1000)
        {
            same=true;
            rem=0;
            counter++;
            for(int j=209; j>=0; --j)
            {
                fib[j]=(char)((int)fibbef[j]+(int)fibbef2[j]+rem-(int)'0');
                rem=0;
                if(fib[j]>'9')
                {
                    fib[j]-=10;
                    rem=1;
                }
            }
            for(int j=0; j<210; ++j)
            {
                fibbef2[j]=fibbef[j];
                fibbef[j]=fib[j];
            }
            for(int j=0; j<210; ++j)
                if(numb[j]!=fib[j])
                    same=false;
        }
        if(contin)
            cout<<counter<<" ";
    }
    cout<<endl;
}
