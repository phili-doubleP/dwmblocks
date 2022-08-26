// Modify the given location of files as per your system
const char *cpu_hwmon_name = "hwmon4";				// Found in /sys/class/hwmon/hw.....
const char *network_wifi_name = "wlp3s0b1";			// Found in /sys/class/net/wl....
const char *network_lan_name = "enp0s25";			// Found in /sys/class/net/en....
const char *backlight_driver_name = "intel_backlight";		// Found in /sys/class/backlight/.......
const char *power_adapter_name = "AC";				// Found in /sys/class/power_supply/ADP.....
const char *power_battery_name = "BAT0";			// Found in /sys/class/power_supply/BAT.....

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", 0, "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", 0, "date '+%b %d (%a) %I:%M%p'",					5,		0},

	{ "",			1,		"end",						0,	    	20 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
