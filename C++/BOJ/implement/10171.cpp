#include <iostream>
#include <string>
using namespace std;

int main(void){
    string cat[] = {"\\    /\\\n", 
                    " )  ( ')\n",
                    "(  /  )\n",
                    " \\(__)|}\n"};

    for (int i=0; i<4; i++){
        std::cout<<cat[i];
    }

}