//
//  main.cpp
//  Luhn Algorithm
//
//  Created by Mikołaj Deja on 23/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string number;
    for(int i=0; i<n; ++i)
    {
        bool miss=false;
        int sum=0, index=0;
        cin>>number;
        for(int j=0; j<number.size(); ++j)
            if(number[j]=='?')
            {
                miss=true;
                index=j;
            }
        if(miss)
        {
            for(int j=0; j<=9; ++j)
            {
                for(int k=0; k<number.size(); ++k)
                {
                    if(k==index)
                    {
                        if(k%2==1)
                            sum+=j;
                        else
                            if(j*2>9)
                                sum+=2*j-9;
                            else
                                sum+=2*j;
                    }
                    else
                    {
                        if(k%2==1)
                            sum+=number[k]-48;
                        else
                            if((number[k]-48)*2>9)
                                sum+=(number[k]-48)*2-9;
                            else
                                sum+=(number[k]-48)*2;
                    }
                }
                if(sum%10==0)
                {
                    number[index]=j+48;
                    break;
                }
                sum=0;
            }
        }
        else
        {
            for(int j=0; j<number.size(); ++j)
            {
                swap(number[j], number[j+1]);
                for(int k=0; k<number.size(); ++k)
                {
                    if(k%2==1)
                        sum+=number[k]-48;
                    else
                        if((number[k]-48)*2>9)
                            sum+=(number[k]-48)*2-9;
                        else
                            sum+=(number[k]-48)*2;
                }
                if(sum%10==0)
                    break;
                swap(number[j], number[j+1]);
                sum=0;
            }
        }
        cout<<number<<" ";
    }
    cout<<endl;
}
