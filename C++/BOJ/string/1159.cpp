#include <iostream>
#include <map>

using namespace std;

/* 농구 경기 https://www.acmicpc.net/problem/1159
char 출력 시 그냥 std::cout를 쓰면은 에러가 발생된다.
해당 index까지 출력하거나 end문으로 뽑는거 찾아보기
*/

int main(void){
    int n, idx=0;
    char result[26];
    
    map<char, int> name_map;

    std::cin>>n;

    for (int i=0; i < n; i++){
        char name[31];
        std::cin>>name;

        if (name_map.find(name[0]) == name_map.end()) {
            name_map[name[0]] = 1;
        } 
        else {    
            name_map[name[0]] += 1;
        }
        
    }

    for (map<char, int>::iterator it = name_map.begin(); it != name_map.end(); it++) {
        //std::cout << "(" << it->first << "," << it->second << ")\n";
        if (it->second >= 5){
            result[idx] = it->first;
            idx += 1;
        }
    }

    if (idx != 0) {
        for (int i=0; i<idx; i++){
            std::cout<<result[i];
        }
    }
    else {
        std::cout<<"PREDAJA\n";   
    }
}