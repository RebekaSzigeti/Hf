#include <iostream>

using namespace std;

int Hanoi(int k){
    if(k==1){return 1;}
    if(k==2){return 3;}
    return 2*Hanoi(k-1)+1;

}

int main()
{
    int k;
    cin >>k;
    cout << Hanoi(k);

    return 0;
}
