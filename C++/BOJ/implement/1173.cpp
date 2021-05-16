#include <iostream>
using namespace std;

/* 운동 https://www.acmicpc.net/problem/1173 */

int main(void){
    int n, pulse, min_pulse, max_pulse, t, r, time=0;

    std::cin>>n>>min_pulse>>max_pulse>>t>>r;

    pulse = min_pulse;

    if (pulse + t > max_pulse) {
        std::cout<<-1;
        return 0;
    }

    while (n > 0){
        if (pulse + t <= max_pulse) {
            pulse = pulse + t;
            n -= 1;
        }
        else if (pulse - r >= min_pulse) {
            pulse = pulse - r;
        }
        else {
            pulse = min_pulse;
        }

        time += 1;
    }

    std::cout<<time;
}