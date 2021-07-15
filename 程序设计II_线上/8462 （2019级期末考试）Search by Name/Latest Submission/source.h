

struct T_student {
	double student_id;
	char last_name[9];
	char first_name[8];
	double age;
	char sex[2];
	double major;
	double advisor;
	char city_code[4];
};

struct T_student student[] = {
	{ 1001,    "Smith",   "Linda", 18, "F", 600, 1121, "BAL" },
	{ 1002,      "Kim",   "Tracy", 19, "F", 600, 7712, "HKG" },
	{ 1003,    "Jones",  "Shiela", 21, "F", 600, 7792, "WAS" },
	{ 1004,    "Kumar",  "Dinesh", 20, "M", 600, 8423, "CHI" },
	{ 1005,  "Gompers",    "Paul", 26, "M", 600, 1121, "YYZ" },
	{ 1006,  "Schultz",    "Andy", 18, "M", 600, 1148, "BAL" },
	{ 1007,     "Apap",    "Lisa", 18, "F", 600, 8918, "PIT" },
	{ 1008,   "Nelson",   "Jandy", 20, "F", 600, 9172, "BAL" },
	{ 1009,      "Tai",    "Eric", 19, "M", 600, 2192, "YYZ" },
	{ 1010,      "Lee",   "Derek", 17, "M", 600, 2192, "HOU" },
	{ 1011,    "Adams",   "David", 22, "M", 600, 1148, "PHL" },
	{ 1012,    "Davis",  "Steven", 20, "M", 600, 7723, "PIT" },
	{ 1014,   "Norris", "Charles", 18, "M", 600, 8741, "DAL" },
	{ 1015,      "Lee",   "Susan", 16, "F", 600, 8721, "HKG" },
	{ 1016, "Schwartz",    "Mark", 17, "M", 600, 2192, "DET" },
	{ 1017,   "Wilson",   "Bruce", 27, "M", 600, 1148, "LON" },
	{ 1018, "Leighton", "Michael", 20, "M", 600, 1121, "PIT" },
	{ 1019,     "Pang",  "Arthur", 18, "M", 600, 2192, "WAS" },
	{ 1020, "Thornton",     "Ian", 22, "M", 520, 7271, "NYC" },
	{ 1021,  "Andreou",  "George", 19, "M", 520, 8722, "NYC" },
	{ 1022,    "Woods", "Michael", 17, "M", 540, 8722, "PHL" },
	{ 1023,  "Shieber",   "David", 20, "M", 520, 8722, "NYC" },
	{ 1024,   "Prater",   "Stacy", 18, "F", 540, 7271, "BAL" },
	{ 1025,  "Goldman",    "Mark", 18, "M", 520, 7134, "PIT" },
	{ 1026,     "Pang",    "Eric", 19, "M", 520, 7134, "HKG" },
	{ 1027,    "Brody",    "Paul", 18, "M", 520, 8723, "LOS" },
	{ 1028,     "Rugh",    "Eric", 20, "M", 550, 2311, "ROC" },
	{ 1029,      "Han",     "Jun", 17, "M", 100, 2311, "PEK" },
	{ 1030,    "Cheng",    "Lisa", 21, "F", 550, 2311, "SFO" },
	{ 1031,    "Smith",   "Sarah", 20, "F", 550, 8772, "PHL" },
	{ 1032,    "Brown",    "Eric", 20, "M", 550, 8772, "ATL" },
	{ 1033,    "Simms", "William", 18, "M", 550, 8772, "NAR" },
	{ 1034,      "Epp",    "Eric", 18, "M",  50, 5718, "BOS" },
	{ 1035,  "Schmidt",   "Sarah", 26, "F",  50, 5718, "WAS" }
};