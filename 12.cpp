#include <iostream>

using namespace std;

void Hanoi( int k, char from, char temp, char to){
    if(k==0){return;}
    Hanoi(k-1, from, to, temp);
    cout << k <<"."<< from << " -> " << to << endl;
    Hanoi(k-1,temp, from,to);
}


int main()
{
    int k;
    cin >> k;
    Hanoi(k, 'A', 'B', 'C');

    return 0;
}
