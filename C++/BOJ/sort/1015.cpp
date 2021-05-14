#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    std::cin>>n;

    int array[n], original[n], result[n];
    for (int i=0; i<n; i++){
        std::cin>>array[i];
    }

    copy(array, array+n, original);
    sort(array, array+n);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (original[i] == array[j]){
                result[i] = j;
                array[j]  = -1;
                break;
            }
        }
    }

    for (int i=0; i<n; i++){
        std::cout<<result[i]<<" ";
    }
}