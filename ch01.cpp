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

// int main()
// {
//     int num1, num2;
//     cout << "입력(정수2개) : ";
//     cin >> num1 >> num2;
//     if(num1 < num2) cout << "가장 큰 수 : "<< num2;
//     else cout << "가장 큰 수 : " << num1;
//     int n1,n2,n3;
//     cout << endl << "입력(정수 3개) : ";
//     cin >> n1 >> n2 >> n3;
//     if(n1 > n2 && n1 > n3) cout << "가장 큰 수 : " << n1 << endl;
//     else if(n2 > n1 && n2 > n3) cout << "가장 큰 수 : " << n2 << endl;
//     else cout << "가장큰 수 : " << n3 << endl;
//     int ko, en, ma;
//     cout << "국어점수 입력 : ";
//     cin >> ko;
//     cout << "영어점수 입력 : ";
//     cin >> en;
//     cout << "수학점수 입력 : ";
//     cin >> ma;
//     cout << "성적 총합 : " << ko + en + ma;
//     cout << "\n성적 평균 : " << (ko + en + ma) / 3;
// }

// int main(){
//     char name[100];
//     char major[100];
//     cout << "이름 : ";
//     cin >> name;
//     cout << "전공 : ";
//     cin >> major;
//     cout << "출력\n" << "이름 : " << name << "\t" << "전공 : " << major << endl;
// }

/* 문제
사용자로부터 총5개 정수 받아서 합 출력 프로그램, 배열
사용자로부터 이름 전화번호 문자열 형태로 입력받아 그대로 출력
단수를 하나 받아 해당 구구단 출력*/

// int sum(int a, int b) { retrun a + b; }
// int sum(int a, int b int c) { return a + b + c; }
// double sum(double a, double b) { return a + b; }
// int main(){
//     cout << "sum(1,2) : " << sum(1,2) << endl;
//     cout << "sum(1,2,3)" << sum(1,2,3) << endl;
//     cout << "sum(1.2,2.3) : " sum(1.2,2.3) << endl;
// }

// void swap(int* x, int* y)
// {
//     int tmp = *x;
//     *x = *y;
//     *y = tmp;
// }
// int main()
// {
//     int n1 = 10, n2 = 20;
//     cout << "swap 사용 전 n1 n2 : " << n1 << " " << n2 << endl;
//     swap(&n1, &n2);
//     cout << "swap 사용 후 n1 n2 : " << n1 << " " << n2 << endl;
// }

// int main(){
//     int num = 0;

//     cout << "정수 입력 : ";
//     cin >> num;
//     for(int i = 1; i <= 9; i++){
//         cout << num << " x " << i << " = " << num * i << " " ;
//     }
//     return 0;
// }

// int sum(int a = 10, int b  = 20){
//     return a + b;
// }
// int main(){
//     cout << "sum() = " << sum() << endl;
//     cout << "sum(1) = " << sum(1) << endl;
//     cout << "sum(1, 2) = " << sum(1, 2) << endl;
// }

// #define Func1(x) x *x
// inline int Func2(int x) // 매크로 함수를 사용하는 경우도 있지만 보다 복잡한 로직 처리하는경우 inline 예약어를 반환자료형 앞에 붙여서 인라인화처리 또는 일반함수로 치라해 성능효율 업
// {
//     return x * x;
// }
// int main()
// {
//     int result = 0;
//     int x = 5;
//     cout << "FUNC(x) = " << Func1(x) << endl;
//     cout << "FUNC(x) = " << Func2(x + 3) << endl;
// }

