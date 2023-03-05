#include <iostream>

using namespace std;

int joc(int n){
    int s=0,i;
    for(i=2;i<=n;i++){
        if(n%i==0){
            s++;
        }
    }
    return s;

}

int main()
{
    int n;
    cin >> n;
    cout << joc(n);
    return 0;
}
