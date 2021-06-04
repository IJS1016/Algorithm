#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n, m;

    long long array[100000], num;
    
    std::cin>>n;

    for (int i=0; i<n; i++){
        std::cin>>array[i];
    }

    sort(array, array+n);

    std::cin>>m;

    for (int i=0; i<m; i++){
        std::cin>>num;

        int start = 0, end = n-1, mid;

        while (start <= end){
            mid = (start + end) / 2;

            //std::cout<<start<<" "<<mid<<" "<<end<<"\n";
            if (array[mid] > num){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        if (array[end] == num) {
            std::cout<<"1\n";
        }

        else {
            std::cout<<"0\n";
        }
    }
    
    return 0;
}