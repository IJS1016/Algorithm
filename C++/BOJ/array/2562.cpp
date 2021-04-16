#include <iostream>

using namespace std;

int main(void){
    int arr[9], max_idx=0, max;

    for (int i=0; i<9; i++){
        std::cin>>arr[i];
    }
    max = arr[0];

    for (int i=1; i<9; i++){
        if (max < arr[i]){
            max = arr[i];
            max_idx=i;
        }
    }

    std::cout<<max<<'\n'<<max_idx;

}