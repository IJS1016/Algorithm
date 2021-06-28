#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

/* 나이순 정렬 https://www.acmicpc.net/problem/10814
   string은 cin만 먹힌다고 함 
   algorithm sort는 들어온 순서가 유지 안되는 unstable sort
   값이 같을 때 입력 순서를 유지하고 싶은 경우는 stable_sort 사용 */

bool cmp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
    
}

int main(void) {
    int n;

    vector<pair<int, string> > v;

    scanf("%d", &n);

    int in_int;
    string in_name;

    for (int i=0; i < n; i++){
        cin>>in_int>>in_name;
        v.push_back(pair<int, string>(in_int, in_name));
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (int i=0; i < n; i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}