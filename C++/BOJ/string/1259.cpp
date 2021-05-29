#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    while (1){
        int flag=0;
        string nums;

        std::cin>>nums;

        if (nums == "0"){
            break;
        }
        for (int i=0; i < nums.length() / 2; i++){
            if (nums[i] != nums[nums.length()-i-1]){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            std::cout<<"yes\n";
        }
        else {
            std::cout<<"no\n";
        }
    }

}