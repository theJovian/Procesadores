scanner: scanner.l
		flex scanner.l;
		gcc -lfl lex.yy.c;
		./a.out;

