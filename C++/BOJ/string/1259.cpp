#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    int flag;

    while (1){
        string nums;
        std::cin>>nums;

        if (nums == "0"){
            break;
        }
        std::cout<<"FLAG "<<flag<<"\n";
        std::cout<<"NL   "<<nums.length()<<"\n";

        for (int i=0; i < nums.length() / 2; i++){
            std::cout<<i<<" "<<nums.length()-i-1<<"\n";
            std::cout<<nums[i]<<" "<<nums[nums.length()-i-1]<<"\n";

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
            flag = 0;
        }
    }

}