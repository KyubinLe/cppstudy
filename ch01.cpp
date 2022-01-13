// #include <iostream>
// using namespace std;
// int main(){
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout << "Hello World";
//     cout << "Hello Wolrd" << endl;
//     cout << "1 + 2 = " << 1+2 << endl;
//     cout << "1.2 + 2.4 = " << 1.2 + 2.4 << endl;
//     return 0;
// }
// iostream : CPP 표준입출력기능 헤더파일
// cout : 표준출력 스트림 생성기능 / :: 범위결정연산자 ~안에 / << >> 방향

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 0;
//     cout << "입력 : ";
//     cin >> num;
//     cout << "num : " << num << endl;
// }

// q 정수2개 입력 큰수출력 3개 정수 받아 큰수출력 / 국영수 점수 입력받아 총점,평균 출력
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "입력(정수2개) : ";
    cin >> num1 >> num2;
    if(num1 < num2) cout << "가장 큰 수 : "<< num2;
    else cout << "가장 큰 수 : " << num1;

    int n1,n2,n3;
    cout << endl << "입력(정수 3개) : ";
    cin >> n1 >> n2 >> n3;
    if(n1 > n2 && n1 > n3) cout << "가장 큰 수 : " << n1 << endl;
    else if(n2 > n1 && n2 > n3) cout << "가장 큰 수 : " << n2 << endl;
    else cout << "가장큰 수 : " << n3 << endl;

    int ko, en, ma;
    cout << "국어점수 입력 : ";
    cin >> ko;
    cout << "영어점수 입력 : ";
    cin >> en;
    cout << "수학점수 입력 : ";
    cin >> ma;
    cout << "성적 총합 : " << ko + en + ma;
    
}