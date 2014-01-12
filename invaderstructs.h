/* Space Invaders */

/* header file for invaders.c */

struct player {
	int r,c;
	char ch;
};

struct alien {
	int r,c;
	int pr,pc;
	int alive; /* 1=alive 0=destroyed */
	char direction; /* 'l'=left 'r'=right */
	char ch;
};

struct shoot {
	int r,c;
	int active; /* 1=active 0=inactive */
	char ch;
};

struct bomb {
	int r,c;
	int active; /* 1=active 0=inactive */
	int loop; /* used to prevent alien from flashing when bomb is dropped */
	char ch;
};

struct options {
	int overall,alien,shots,bombs,bombchance;
};
	
