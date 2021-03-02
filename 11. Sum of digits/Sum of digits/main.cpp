//
//  main.cpp
//  Sum of digits
//
//  Created by Mikołaj Deja on 15/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, a, b, c, d;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>a>>b>>c;
        d=a*b+c;
        int sum=0;
        while(d>=1)
        {
            sum+=d%10;
            d/=10;
        }
        cout<<endl<<sum;
    }
    return 0;
}
