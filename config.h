//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "cpu", 	5, 2},
  {"", 	"memory", 1, 2},
  {"",  "nettraf",  2,  15}, 
  {"",  "volume", 1,  10},
  {"",  "clock",  30, 1},
  {"",  "internet", 5,  4},
  {"",  "battery", 60, 4},
  {"", "", 1, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
