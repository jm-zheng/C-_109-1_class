#include <iostream>
using namespace std;
int cnt = 0;
int c;
void com(int *src, int n, int value) {
    if(n==-1) {
        cout << value <<endl;
        cnt++;
    }else {
        com(src, n-1, value);
        value *= 10;
        value += src[c-n-1];
        com(src, n-1, value);
    }
}

int main() {
    
    cin >> c;
    int arr[50];
    for(int i=0; i<c; i++) {
        cin >> arr[i];
    }
    com(arr, c-1, 0);
    cout << cnt-1;
}