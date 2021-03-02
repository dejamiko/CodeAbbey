//
//  main.cpp
//  Modulo and time difference
//
//  Created by Mikołaj Deja on 21/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, day1, hour1, min1, sec1, day2, hour2, min2, sec2, time1, time2, timedif, days, hours, minutes, seconds;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>day1>>hour1>>min1>>sec1>>day2>>hour2>>min2>>sec2;
        time1=sec1+60*min1+60*60*hour1+60*60*24*day1;
        time2=sec2+60*min2+60*60*hour2+60*60*24*day2;
        timedif=time2-time1;
        seconds=timedif%60;
        timedif-=seconds;
        minutes=(timedif%3600)/60;
        timedif-=minutes;
        hours=(timedif%(3600*24))/3600;
        timedif-=hours;
        days=timedif/(3600*24);
        cout<<"("<<days<<" "<< hours<<" "<<minutes<<" "<<seconds<<")\n";
    }
    return 0;
}
