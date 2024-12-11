#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string sa,sb;

    cin>>sa>>sb;

   
    sort(sa.begin(),sa.end());

    sort(sb.begin(),sb.end());
    
    if(sa.compare(sb)==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    



    return 0;
}