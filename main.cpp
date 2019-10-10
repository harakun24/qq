#include <iostream>
#include "step.cpp"
using namespace std;
int main()
{
    stack baru;
    baru.clear();
    for(int i=0;i<9;i++){
        if(i>1&&i%6==0)
            continue;
        baru.push("data ke: "+to_string(i)+"\n");
    }
    for(int i=0;i<9;i++){
        cout<<to_string(i+1)<<". "<<baru.get();
        baru.pop();
    }
    
    // cout<<baru.getItem(8);
}