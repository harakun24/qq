#include <iostream>
#include "step.cpp"
using namespace std;
int main()
{
    baru.clear();
    for(int i=0;i<9;i++){
        baru.push("doom\n");
    }
    for(int i=0;i<9;i++){
        cout<<baru.get();
        baru.pop();
    }
    baru.pop();
    cout<<baru.get();
}