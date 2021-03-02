//
//  main.cpp
//  Array checksum
//
//  Created by Mikołaj Deja on 09/03/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    long long int number, value, result=0;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>value;
        result+=value;
        result*=113;
        result=result%10000007;
    }
    cout<<result;
    return 0;
}
