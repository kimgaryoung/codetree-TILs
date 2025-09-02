#include <iostream>
#include<algorithm>
using namespace std;

int n,k,p,t;
int num[101];
bool infected[101];

class Shake {

    public:
        int time;
        int person1;
        int person2;
        Shake(int time, int person1, int person2)
        {
            this -> time =time;
            this -> person1 =person1;
            this -> person2 =person2;

        }
        Shake(){}
};

bool Cmp(const Shake &a,const Shake &b)
{
    return a.time <b.time;
}


int main() {
    // Please write your code here.

   cin >> n >> k >> p >> t;
    infected[p]=true;

    Shake s[250];

   for(int i = 0; i < t; i++) {
		int time, person1, person2;
        cin >> time >> person1 >> person2;
		// Shake 객체를 생성해 넣어줍니다.
		s[i] = Shake(time, person1, person2);
	}
    

    sort(s, s+t, Cmp);

    for(int i=0; i<t; i++){
        int t1=s[i].person1;
        int t2 =s[i].person2;

        if(infected[t1])
            num[t1]++;
        if(infected[t2])
            num[t2]++;

        if(num[t1]<=k && infected[t1])
            infected[t2]=true;

        if(num[t2]<=k && infected[t2])
            infected[t1]=true;


    }

   for(int i = 1; i <= n; i++) {
		if(infected[i])
			cout << 1;
		else
			cout << 0;
	}

    return 0;
}