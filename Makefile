CC = cc
CFLAGS = -g
LEX = lex
RM = rm
RMFLAGS = -v

default: xsm

xsm: 

clean:
	$(RM) $(RMFLAGS) *.o xsm mem lex.yy.c