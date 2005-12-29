/* Generated by re2c */
#line 1 "cvsignore.s.re"

#define YYFILL(n) if (cursor >= limit) break;
#define YYCTYPE char
#define YYCURSOR cursor
#define YYLIMIT limit
#define YYMARKER marker

#line 16 "cvsignore.s.re"


#define APPEND(text) \
	append(output, outsize, text, sizeof(text) - sizeof(YYCTYPE))

inline void append(YYCTYPE *output, size_t & outsize, const YYCTYPE * text, size_t len)
{
	memcpy(output + outsize, text, len);
	outsize += (len / sizeof(YYCTYPE));
}

void scan(YYCTYPE *pText, size_t *pSize, int *pbChanged)
{
	// rule
	// scan lines
	// find $ in lines
	//   compact $<keyword>: .. $ to $<keyword>$
  
	YYCTYPE *output;
	const YYCTYPE *cursor, *limit, *marker;

	cursor = marker = output = *pText;

	size_t insize = *pSize;
	size_t outsize = 0;

	limit = cursor + insize;

	while(1) {
loop:

#line 43 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	goto yy0;
	++YYCURSOR;
yy0:
	if((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	if(yych != '$')	goto yy4;
	goto yy2;
yy2:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych){
	case 'D':	goto yy10;
	case 'I':	goto yy9;
	case 'L':	goto yy8;
	case 'R':	goto yy7;
	case 'S':	goto yy5;
	default:	goto yy3;
	}
yy3:
#line 53 "cvsignore.s.re"
{ output[outsize++] = cursor[-1]; if (cursor >= limit) break; goto loop; }
#line 67 "<stdout>"
yy4:	yych = *++YYCURSOR;
	goto yy3;
yy5:	yych = *++YYCURSOR;
	if(yych == 'o')	goto yy44;
	goto yy6;
yy6:	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy3;
	}
yy7:	yych = *++YYCURSOR;
	if(yych == 'e')	goto yy32;
	goto yy6;
yy8:	yych = *++YYCURSOR;
	if(yych == 'o')	goto yy25;
	goto yy6;
yy9:	yych = *++YYCURSOR;
	if(yych == 'd')	goto yy19;
	goto yy6;
yy10:	yych = *++YYCURSOR;
	if(yych != 'a')	goto yy6;
	goto yy11;
yy11:	yych = *++YYCURSOR;
	if(yych != 't')	goto yy6;
	goto yy12;
yy12:	yych = *++YYCURSOR;
	if(yych != 'e')	goto yy6;
	goto yy13;
yy13:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy15;
	if(yych != ':')	goto yy6;
	goto yy14;
yy14:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy6;
	goto yy18;
yy15:	++YYCURSOR;
	goto yy16;
yy16:
#line 48 "cvsignore.s.re"
{ APPEND(L"$Date$"); goto loop; }
#line 107 "<stdout>"
yy17:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy18;
yy18:	if(yych == 0x0A)	goto yy6;
	if(yych == '$')	goto yy15;
	goto yy17;
yy19:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy21;
	if(yych != ':')	goto yy6;
	goto yy20;
yy20:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy6;
	goto yy24;
yy21:	++YYCURSOR;
	goto yy22;
yy22:
#line 49 "cvsignore.s.re"
{ APPEND(L"$Id$"); goto loop; }
#line 127 "<stdout>"
yy23:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy24;
yy24:	if(yych == 0x0A)	goto yy6;
	if(yych == '$')	goto yy21;
	goto yy23;
yy25:	yych = *++YYCURSOR;
	if(yych != 'g')	goto yy6;
	goto yy26;
yy26:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy28;
	if(yych != ':')	goto yy6;
	goto yy27;
yy27:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy6;
	goto yy31;
yy28:	++YYCURSOR;
	goto yy29;
yy29:
#line 50 "cvsignore.s.re"
{ APPEND(L"$Log$
{ APPEND(L"Revision 1.1  2005/12/29 15:42:02  helly
{ APPEND(L"- Allow to test with specific switches by providing them in test filename
{ APPEND(L"- Add first unicode tests
{ APPEND(L""); goto loop; }
#line 150 "<stdout>"
yy30:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy31;
yy31:	if(yych == 0x0A)	goto yy6;
	if(yych == '$')	goto yy28;
	goto yy30;
yy32:	yych = *++YYCURSOR;
	if(yych != 'v')	goto yy6;
	goto yy33;
yy33:	yych = *++YYCURSOR;
	if(yych != 'i')	goto yy6;
	goto yy34;
yy34:	yych = *++YYCURSOR;
	if(yych != 's')	goto yy6;
	goto yy35;
yy35:	yych = *++YYCURSOR;
	if(yych != 'i')	goto yy6;
	goto yy36;
yy36:	yych = *++YYCURSOR;
	if(yych != 'o')	goto yy6;
	goto yy37;
yy37:	yych = *++YYCURSOR;
	if(yych != 'n')	goto yy6;
	goto yy38;
yy38:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy40;
	if(yych != ':')	goto yy6;
	goto yy39;
yy39:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy6;
	goto yy43;
yy40:	++YYCURSOR;
	goto yy41;
yy41:
#line 51 "cvsignore.s.re"
{ APPEND(L"$Revision$"); goto loop; }
#line 188 "<stdout>"
yy42:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy43;
yy43:	if(yych == 0x0A)	goto yy6;
	if(yych == '$')	goto yy40;
	goto yy42;
yy44:	yych = *++YYCURSOR;
	if(yych != 'u')	goto yy6;
	goto yy45;
yy45:	yych = *++YYCURSOR;
	if(yych != 'r')	goto yy6;
	goto yy46;
yy46:	yych = *++YYCURSOR;
	if(yych != 'c')	goto yy6;
	goto yy47;
yy47:	yych = *++YYCURSOR;
	if(yych != 'e')	goto yy6;
	goto yy48;
yy48:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy50;
	if(yych != ':')	goto yy6;
	goto yy49;
yy49:	yych = *++YYCURSOR;
	if(yych == '$')	goto yy6;
	goto yy53;
yy50:	++YYCURSOR;
	goto yy51;
yy51:
#line 52 "cvsignore.s.re"
{ APPEND(L"$Source$"); goto loop; }
#line 220 "<stdout>"
yy52:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy53;
yy53:	if(yych == 0x0A)	goto yy6;
	if(yych == '$')	goto yy50;
	goto yy52;
}
#line 55 "cvsignore.s.re"

	}
	output[outsize] = '\0';

	// set the new size
	*pSize = outsize;
	
	*pbChanged = (insize == outsize) ? 0 : 1;
}