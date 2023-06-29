//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",	"cpubars",	1,	13},
  //{"",	"memory",	1,	14},
  //{"",  "nettraf",	1,	16}, 
  {"",  "volume",	1, 	10},
  {"",	"backlight",	1,	15},
  {"",	"battery",	1,	11},
  {"",  "clock",	1,	1},
  {"",  "internet",	5,	4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
