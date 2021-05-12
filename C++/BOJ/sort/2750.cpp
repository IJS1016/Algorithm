#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n;

    std::cin>>n;

    const int N=n;

    int nums[N];

    for (int i=0; i<n; i++){
        std::cin>>nums[i];
    }

    sort(nums, nums+n);

    for (int i=0; i<n; i++){
        std::cout<<nums[i]<<"\n";
    }


}