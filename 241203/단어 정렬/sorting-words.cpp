#include <iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    string s[100];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    sort(s,s+n);

      for(int i=0; i<n; i++)
    {
       cout<<s[i]<<endl;
    }


    return 0;
}