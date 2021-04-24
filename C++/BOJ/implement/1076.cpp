#include <iostream>
#include <map>
#include <cmath>
using namespace std;

/*저항 https://www.acmicpc.net/problem/1076
*/

int main(void){
    map<string, int> charts;

    charts["black"]  = 0;
    charts["brown"]  = 1;
    charts["red"]    = 2;
    charts["orange"] = 3;
    charts["yellow"] = 4;
    charts["green"]  = 5;
    charts["blue"]   = 6;
    charts["violet"] = 7;
    charts["grey"]   = 8;
    charts["white"]  = 9;

    string clr1, clr2, clr3;

    std::cin>>clr1>>clr2>>clr3;

    std::cout<<fixed;
    cout.precision(0);
    std::cout<<(charts[clr1] * 10 + charts[clr2]) * pow(10, charts[clr3]);
  }