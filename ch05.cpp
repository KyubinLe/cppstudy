// string 클래스

#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     string str1; // 디폴트생성자 이용 객체생성
//     string str2("Hello World1");
//     cout << str1 << endl;
//     cout << str2 << endl;
//     string str4 = str2;
//     cout << str4 << endl;
//     // string의 동적확장확인
//     string str6("1");
//     str6+="helloa";
//     cout << str6 << endl;
//     return 0;
// }

// int main()
// {
//     string addr[3];
//     string name[3];
//     cout << "이름입력 : ";
//     for (int i = 0; i < 3; i++)
//     {
//         getline(cin, name[i], '\n');
//     }
//     if (name[0] > name[1] && name[0] > name[2])
//     {
//         cout << "사전 편찬순서 제일뒤에 있는 이름:" << name[0] << endl;
//     }

//     //이름 입력받아 사전편찬 순서대로 출력
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = i; j < 3; j++)
//         {
//             if (name[i] > name[j])
//             {
//                 string tmp = name[i];
//                 name[i] = name[j];
//                 name[j] = tmp;
//             }
//         }
//     }
//     cout << "결과 \n";
//     for (int i = 0; i < 3; i++)
//     {
//         cout << name[i] << endl;
//     }
// }

// 뮨재 이름name[3], 학번id[3], 전공major[3]을 각각 getliune입력 후 입력받은 스트링형 문자뎔들을 이름순으로 내림차순 정렬해서 각각표시
#include <iostream>
#include <string>
using namespace std;
class people
{
public:
    string name, id, major;

public:
    void addpeople(string a, string b, string c);
};
int main()
{

    return 0;
}

void people::addpeople(){
    
}