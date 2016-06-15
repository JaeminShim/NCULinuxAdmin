// hello.c

// ctags 로 헤더 DB 구축하기

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "hello";
	char s2[10];

	strcpy(s1, s2);		// ctags 설정 후, 저장 된 상태 & 명령모드에서 CTRL + ]
						// 또는 명령모드에서 tj strcpy	// tj: tag jump
						// 나오려면 CTRL + T
						// "ctags 명령어" 검색하면 다양한 명령어 확인 가능

	printf("%s\n", s2);
}

