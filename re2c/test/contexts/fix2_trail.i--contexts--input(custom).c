/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
#define YYDISTTYPE ptrdiff_t
    const char *YYMARKER;
    const char *YYCTXMARKER;
    
{
	char yych;
	YYBACKUPCTX ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
	{ printf("error\n"); return; }
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '1':	goto yy5;
	default:	goto yy3;
	}
yy5:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '1':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYRESTORE ();
	goto yy3;
yy7:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '2':	goto yy8;
	default:	goto yy6;
	}
yy8:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '2':	goto yy9;
	default:	goto yy6;
	}
yy9:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '2':	goto yy10;
	default:	goto yy6;
	}
yy10:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':	goto yy11;
	default:	goto yy6;
	}
yy11:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':	goto yy12;
	default:	goto yy6;
	}
yy12:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':	goto yy13;
	default:	goto yy6;
	}
yy13:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':	goto yy14;
	default:	goto yy6;
	}
yy14:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '4':	goto yy15;
	default:	goto yy6;
	}
yy15:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '4':	goto yy16;
	default:	goto yy6;
	}
yy16:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '4':	goto yy17;
	default:	goto yy6;
	}
yy17:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '4':	goto yy18;
	default:	goto yy6;
	}
yy18:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '4':	goto yy19;
	default:	goto yy6;
	}
yy19:
	YYSKIP ();
	YYRESTORECTX (YYDIST() - 5);
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                YYCTX((YYDIST() - 9)) - YYCTXMARKER, YYCTXMARKER,
                YYCTX((YYDIST() - 7)) - YYCTX((YYDIST() - 9)), YYCTX((YYDIST() - 9)),
                YYCTX((YYDIST() - 4)) - YYCTX((YYDIST() - 7)), YYCTX((YYDIST() - 7)),
                YYCURSOR - YYCTX((YYDIST() - 4)), YYCTX((YYDIST() - 4)),
                YYCURSOR);
                return;
        }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
