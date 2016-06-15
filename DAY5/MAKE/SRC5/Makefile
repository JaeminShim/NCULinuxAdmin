# makefile1

# .c.o: .c를 .o로
# $< : 현재 소스 이름
.c.o:
	cc -c $< -I.

app : main.o foo.o goo.o
	cc -o app main.o foo.o goo.o

# 빌드 명령은 위의 명령으로 충분하지만
# 헤더 파일 수정 시 다시 빌드 되도록 해야 합니다. (dependency)
main.o : foo.h goo.h
foo.o : foo.h
goo.o : goo.h

#make -f makefile1 foo
