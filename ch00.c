// 01 포인터 기본
// #include <stdio.h>

// int main(){
//     int num = 10;
//     int* ptr1 = &num;
//     *ptr1 = 55;
//     printf("num : %d\n", *ptr1);
//     int* ptr2 = ptr1;
//     *ptr2=22;
//     printf("*ptr1: %d\n*ptr2 :%d\n", *ptr1, *ptr2);

//     return 0;
// }

// 02포인터

// #include <stdio.h>

// int main()
// {
//     int num1 = 10; // num1에 10
//     int num2 = 20; // nun2에 20

//     int *ptr1 = &num1; // ptr1에 num1값
//     int *ptr2 = &num2; // ptr2에 num2값

//     int num3 = *ptr1 + *ptr2; // num3에 ptr1과 ptr2의 값

//     ptr1 = &num3; // nun3주소값을 ptr1
//     *ptr1 = 22; // ptr1값을 22로 변경
//     int num4 = *ptr1 + *ptr2;
//     printf("num 1 : %d num2 : %d num3 : %d num4 : %d\n", num1, num2, num3, num4);

//     return 0;
// }

// 동적할당

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("메모리 공간 부족..");
    }
    *ptr = 50;
    printf("*ptr : %d\n", *ptr);

    free(ptr);

    int *arr = (int *)malloc(sizeof(int) * 4);
    if (arr == NULL)
    {
        return -1;
    }
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("arr[0]=%d\n", *(arr + 0));
    printf("arr[1]=%d\n", *(arr + 1));
    printf("arr[2]=%d\n", *(arr + 2));
    return 0;
}