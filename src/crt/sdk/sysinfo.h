/* sysinfo.h
 * Created on Thu May 25 2023 by Seal Sealy (seal331)
 * Adding During Codename Phase: "Esaul"
 * Copyright (c) 2023 - SkylightOS Project
*/

typedef struct systeminfo {
	// the reason why buildnum is a char and not an int
	// is becausw we will later need to concatenate it with an str
	// and i don't feel like implementing snprintf for this
        //char[4] buildnum;
	char *buildcodename;
	char *buildmajorminor;
	char *buildnum;
	char *buildtype;
	char *buildlab;
	char *builduser;
	char *cpuarch;
	char *builddate;
} systeminfo;

systeminfo sysinfo();
void sysinfo_display();