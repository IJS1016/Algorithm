#include <iostream>
using namespace std;

int main(void){
    int n, result=0;
    char nums[101];
    
    std::cin>>n;
    std::cin>>nums;

    for (int i=0; i<n; i++){
        result += int(nums[i])-int('0');
    }
    std::cout<<result;
}