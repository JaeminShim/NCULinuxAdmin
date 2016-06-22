// file.c

#include <stdio.h>
#include <fcntl.h>

// file id
// 0: stdin
// 1: stdout
// 2: stderr
// 3~: 사용자 오픈 파일

// 리눅스 시스템 프로그래밍 예제: 리다이렉션 구현

int main()
{
	int fd = open("a.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);

	close(1);	// 표준 출력(stdout)을 닫는다

	dup(fd);	// fd(3)을 복제한다. 비어있는 파일 번호 중 가장 빠른 번호에 복사된다.
	close(fd);	// 이제 3은 필요 없다.

	printf("fd: %d\n", fd);	// a.txt로 리다이렉션 되었을 것이다.

	getchar();

	//close(fd);

	getchar();
}

