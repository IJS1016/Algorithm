#include <iostream>
#include <string>
using namespace std;

int main(void){
    string dog[] = {"|\\_/|\n", 
                    "|q p|   /}\n",
                    "( 0 )\"\"\"\\\n",
                    "|\"^\"`    |\n",
                    "||_/=\\\\__|"};

    for (int i=0; i<5; i++){
        std::cout<<dog[i];
    }

}
