/* Mitchell Myjak
8/21/16
This program converts 12 hour clock to 24 hour clock
https://www.hackerrank.com/challenges/time-conversion
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string time, strHour;
    int hour;
    cin >> time;

    stringstream convert(time.substr(0,2));
    convert >> hour;
    if (time[8] == 'P' && hour != 12)
    {
            hour += 12;
            stringstream convertBack;
            convertBack << hour;
            strHour = convertBack.str();
            time.replace(0,2,strHour);
    }

    else if (time[8] == 'A' && time[0] == '1' && time[1] == '2')
    {
        time[0] = '0';
        time[1] = '0';
    }
    time.erase (8,2);
    cout << time;


    return 0;
}
