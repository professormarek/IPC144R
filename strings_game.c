/*
this program is a game that simulates a battle between a hero and a monster
in this game the monster name is hard-coded (literal string)
the player (hero) name will be entered by the user
both the hero and the monster have Health Points (HP)
the battle will continue until either the hero or monster has HP <= 0
simulate the battle between the hero and monster:
the characters take turns hitting each other 
each character has a certain amount of damage they do to the other
Damage is subracted from the approprate character's HP
the winner will be the character with HP > 0

cheat: by entering a secret hero name, the hero will get a lot stronger

*/
#include <stdio.h>
//strlen, strcmp, strcpy, and strcat come from string.h
#include <string.h>
//access to the rand() and srand() functions
#include <stdlib.h>
//need the time in order to seed the random number generator
#include <time.h>


#define MAX_NAME_SIZE 100
//function prototypes (headers)
void printWelcomeScreen(void);
void getHeroName(char name[]);
void hitCharacter(char whoIsHitting[], char whoWasHit[], int damage, int *hp);
void clearBuffer(void);

int main(void){
	/*call srand and pass the current system time in order to get
	a different series of numbers out of rand() each time the game is played*/
	srand(time(NULL));
	//represent hero health
	int heroHP = 15;
	//represent the damage the the hero can do to the monster
	int heroDamage = 7;
	//represent monster health
	int monsterHP = 20;
	//represent the damage the monster can do to the hero
	int monsterDamage = 4;
	char monsterName[] = "Freiza";
	/*reserve enough space for hero name 100 characters or less +1 for the terminating null*/
	char heroName[MAX_NAME_SIZE + 1] = "DEFAULT NAME";
	//store the secret cheat code name
	char cheatCode[] = "CHUCKNOR";// see internet memes for chuck norris jokes
	//show intro screen
	printWelcomeScreen();
	//get the user's name
	getHeroName(heroName);
	//at this point we can check whether the user has entered the cheat code
	if(strcmp(heroName, cheatCode) == 0){
		//if strcmp returns 0 that means the strings are identical
		//display an exciting power up message!!
		printf("Chuck Norris can make fire by rubbing two ice cubes. CHEAT ACTIVATED!!!!\n\n");
		//give the hero extra health
		heroHP += 10;
	}
	
	//use strlen to get and display the number of characters hero's name
	printf("DEBUG: user entered: %s, length: %d\n", heroName, strlen(heroName));
	printf("A wild %s appears\n", monsterName);
	//the hero battles the monster as long as the both have HP > 0
	while(heroHP > 0 && monsterHP > 0) {
		printf("%s health: %d: %s health: %d\n\n", heroName, heroHP, 
			monsterName, monsterHP);
		//hero hits the monster
		//in order to introduce some random behavior, alter the hero's damage each time
		int damage = heroDamage + rand() % 3;
		printf("DEBUG: randomly chose %d damage for the hero\n", damage);
		hitCharacter(heroName, monsterName, damage, &monsterHP); 
		//if the monster is still alive (monsterHP > 0)
		if(monsterHP > 0){
			//monster hits the hero
			damage = monsterDamage + rand() % 6;
			hitCharacter(monsterName, heroName, damage, &heroHP);
		}
		printf("press Enter to continue the battle!!!\n");
		clearBuffer(); //this will wait until the user presses enter
	}
	if(heroHP > 0){
		printf("%s won the battle!!!!!!\n", heroName);
	}else{
		printf("%s won the battle :(\n", monsterName); 
	}
	return 0;
}

void printWelcomeScreen(void){
	printf("WELCOME TO DEAD ZONE\n");
}


void getHeroName(char name[]){
	//prompt the user to enter the hero's name
	printf("What epic name shall thou be known by.. brave warrior (%d characters maximum): ", MAX_NAME_SIZE);
	//use scanf to copy the entered name into our array
	//don't forget we #define'd MAX_NAME_SIZE as 100	
	scanf("%100[^\n]",name); 
	clearBuffer();
}

void hitCharacter(char whoIsHitting[], char whoWasHit[], int damage, int *hp){
	//subtract damage from the remaining Health Points
	*hp = *hp - damage;
	//display what happened to the user:
	printf("%s hit %s for %d\n", whoIsHitting, whoWasHit, damage) ;
	printf("%s has %d health remaining\n", whoWasHit, *hp);
}

void clearBuffer(void){
	while(getchar() != '\n');

}
