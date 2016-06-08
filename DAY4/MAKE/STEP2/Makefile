# Makefile

# 다중 파일을 위한 Makefile

# 방법 1.
# 문제점: 아래 처럼 하면 파일 하나만 변경되어도 전부 재 컴파일
#app : main.c foo.c foo.h
#	cc -o app main.c foo.c -I.

# 방법 2. 파일 별 분할 컴파일이 필요하다.
# 문제점: makefile은 첫 번째 타겟만 생성하게 된다.
#foo.o : foo.c foo.h
#	cc -c -o foo.o foo.c -I.	# -c: 컴파일만 실행
#main.o : main.c foo.h
#	cc -c -o main.o main.c -I.
#app : main.o foo.o
#	cc -o app main.o foo.o		# 결국 link 작업입니다.


# 방법 3.
# 첫 번째 줄에 반드시 최종 목적 파일이 와야 한다.
# 의존 파일 컴파일이 필요한 경우에 아래로 내려가며 계속 실행
app : main.o foo.o
	cc -o app main.o foo.o		# 결국 link 작업입니다.
foo.o : foo.c foo.h
	cc -c -o foo.o foo.c -I.	# -c: 컴파일만 실행
main.o : main.c foo.h
	cc -c -o main.o main.c -I.

