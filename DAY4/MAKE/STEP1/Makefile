# makefile1

# 실행파일이름 : 컴파일대상
# [탭 들여쓰기]	컴파일명령문


# 아래처럼 만들면 app.h와 실행 파일의 의존성이 없게 됩니다.
# 그래서 app.h가 수정되어도 다시 컴파일되지 않습니다.

#app : app.c
#	cc -o app app.c -I.

app : app.c app.h
	cc -o app app.c -I.

