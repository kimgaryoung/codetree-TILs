#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class rain {
public: 
    string date;    // 날짜
    string day;     // 요일
    string weather; // 날씨

    rain(string date, string day, string weather) {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    rain() {}

    void print() {
        cout << date << " " << day << " " << weather;
    }
};

// 날짜 기준 정렬을 위한 비교 함수
bool compare(const rain& r1, const rain& r2) {
    return r1.date < r2.date;
}

int main() {
    int n;
    cin >> n;

    rain r[100];

    for(int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        r[i] = rain(date, day, weather);
    }

    // 날짜순으로 정렬
    sort(r, r + n, compare);

    // 정렬된 데이터에서 첫 번째 rain 찾기
    int idx = 0;
    while (idx < n && r[idx].weather != "Rain") {
        idx++;
    }

    // rain을 찾았다면 출력
    if (idx < n) {
        r[idx].print();
    }

    return 0;
}
