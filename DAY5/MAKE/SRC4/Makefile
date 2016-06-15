# makefile4

# 핵심
# 1. 최종 목적파일(실행파일)이 반드시 첫 번째 줄에 있어야 한다.
# 2. 경로 및 컴파일러 옵션 등을 위한 환경 변수를 도입한다.
# 3. all 지시어의 등장과 .o 파일의 이동
# 4. install과 cleanall 
#    make install -f makefile4
#    또는 make install // 파일 이름이 Makefile인 경우
#    make cleanall -f makefile4


OBJPATH=./obj
INCPATH=./include
CC=cc
CFLAGS=-Wall -I$(INCPATH)	# -Wall: show all warnings
INSTPATH=./bin


# all 지시어: 예약된 이름
all : getobj app putobj

app : main.o foo.o goo.o
	$(CC) -o app main.o foo.o goo.o

foo.o: foo.c $(INCPATH)/foo.h
	$(CC) -c foo.c $(CFLAGS)

goo.o: goo.c $(INCPATH)/goo.h
	$(CC) -c goo.c $(CFLAGS)

main.o: main.c $(INCPATH)/foo.h $(INCPATH)/goo.h
	$(CC) -c main.c $(CFLAGS)

getobj:
	@-if [ ! -d $(OBJPATH) ]; then	\
		mkdir $(OBJPATH);			\
	fi
	@-mv $(OBJPATH)/*.o .

putobj:
	@-if [ ! -d $(OBJPATH) ]; then	\
		mkdir $(OBJPATH);			\
	fi
	@-mv *.o $(OBJPATH)

install:
	@-if [ ! -d $(INSTPATH) ]; then	\
		mkdir $(INSTPATH);			\
	fi
	@-cp -p ./app $(INSTPATH)/app
	@-chmod 700 $(INSTPATH)/app
	@echo "Installed in " $(INSTPATH)/app

cleanall:
	@-rm app
	@-rm -r $(OBJPATH)
	@-rm -r $(INSTPATH)
	@echo cleanall!

# make -f makefile4 으로 빌드
# 특정 LABEL 실행: make [LABEL] -f makefile4

# 접두어 -: 에러 무시하고 계속 실행
# 접두어 @: 명령 화면 출력하지 않음


