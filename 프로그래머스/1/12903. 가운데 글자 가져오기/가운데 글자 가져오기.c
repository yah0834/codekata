#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 가운데 글자(들)을 반환하는 함수
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(s); //문자열 길이 구하기
    char* answer;
    
    //길이가 홀수일 경우 : 가운데 1글자만 반환
    if (len % 2 == 1) {
        answer = (char*)malloc(2); //문자 1개 + '\0' -> 2칸 할당
        answer[0] = s[len / 2]; //가운데 글자
        answer[1] = '\0'; //문자열 종료
    }
    //길이가 짝수일 결우 : 가운데 2글자 반환
    else{
    answer = (char*)malloc(3); //문자 2개 + '\0' -> 3칸 할당
        answer[0] = s[(len / 2) -1]; //가운데 왼쪽글자
        answer[1] = s[len / 2]; //가운데 오른쪽 글자
        answer[2] = '\0'; //문자열 종료
}
    return answer;
}