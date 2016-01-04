/* Garoudan Megadrive/Genesis port */
/* Started on December 2015 */

/* This program is under GPLv3 license */
/* You can see more details in LICENSE file */

# include <genesis.h>

void show_info();
void show_intro();
void show_pstart();

int main () {

	show_info();

	/* Game loop start here */
	while (TRUE) {
		show_intro();
		show_pstart();
	}

	return 0;

}
