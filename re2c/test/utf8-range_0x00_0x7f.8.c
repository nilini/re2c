/* Generated by re2c */
#line 1 "utf8-range_0x00_0x7f.8.re"

#line 5 "utf8-range_0x00_0x7f.8.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x7F) goto yy3;
yy3:
	++YYCURSOR;
#line 2 "utf8-range_0x00_0x7f.8.re"
	{ return 0; }
#line 15 "utf8-range_0x00_0x7f.8.c"
}
#line 3 "utf8-range_0x00_0x7f.8.re"

re2c: warning: line 3: control flow is undefined for strings that match '[\x80-\xFF]', use default rule '*' [-Wundefined-control-flow]
