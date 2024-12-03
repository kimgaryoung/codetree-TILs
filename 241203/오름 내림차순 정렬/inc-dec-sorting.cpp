#include <iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s;
    int arr[100];
    cin>>s;

    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+s);

    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr,arr+s,greater<int>());

      for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}