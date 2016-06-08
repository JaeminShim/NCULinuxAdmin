// app.c

#include <stdio.h>
#include <app.h>

int main()
{
	printf("app : %d\n", MAX);
}

// 리눅스 컴파일러
// C언어: cc
// C++  : g++

// gcc  : .c 확장자이면 cc로,
//        .cpp 또는 .cc 라면 g++ 사용


// 사용예> cc -o app app.c -I.
// 		-o [출력파일명]	// 출력파일명 설정
// 		-I[디렉토리]	// 인클루드 디렉토리 설정

