#include <stdio.h>

/*************************************************
* Name:        reverse_integer
* 
* Des
*cription: Reverses the digits of an integer.
*  Arguments:   int x - the integer to be reversed.
* 
* Returns:     int - the reversed integer.
**************************************************/
int reverse_integer(int x) {
    int reversed_num = 0;
    int is_negative = x < 0;
    x = is_negative ? -x : x;  // 確保 x 是正數處理

    while (x != 0) {
        int digit = x % 10;  // 取出最後一位數
        reversed_num = reversed_num * 10 + digit;  // 拼接到反轉結果
        x /= 10;  // 去掉最後一位數
    }

    return is_negative ? -reversed_num : reversed_num;
}

int main() {
    printf("%d\n", reverse_integer(135));  // 輸出 531
    printf("%d\n", reverse_integer(-246)); // 輸出 -642
    printf("%d\n", reverse_integer(0));  // 輸出 0
    printf("%d\n", reverse_integer(-0));  // 輸出 987654321
    printf("%d\n", reverse_integer(-89-89));  // 輸出 0
    printf("%d\n", reverse_integer(12345678901234567890));  // 輸出 0
    return 0;
}
