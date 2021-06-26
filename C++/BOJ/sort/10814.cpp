#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#include <cstring>

using namespace std;


/* https://www.acmicpc.net/problem/10814
string은 cin만 먹힌다고 함*/

bool cmp(tuple<int, string, int> a, tuple<int, string, int> b){
    if (a.first == b.first){
        return a.third < b.third;
    }
    else {
        return a.first < b.first;
    }
}

int main(void) {
    int n;

    typedef tuple<int, string, int> v;

    scanf("%d", &n);

    int in_int;
    string in_name;

    for (int i=0; i < n; i++){
        cin>>in_int>>in_name;
        v.push_back(make_tuple(in_int, in_name, i));
    }

    sort(v.begin(), v.end());

    for (int i=0; i < n; i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}