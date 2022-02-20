#include <iostream>

using namespace std;

int main() {
    int a,b,c,n,nums[n];
    int max = -99;
    cout <<"nhap: " <<endl;
    cin >> n;
    for(int i=0;i<n; i++ ){
        cin >> nums[i];
        }
    for(int i=0;i<n; i++ ){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    cout << max;
    
    return 0;
}