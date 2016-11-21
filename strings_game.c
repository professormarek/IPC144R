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

#define MAX_NAME_SIZE 100
//function prototypes (headers)
void printWelcomeScreen(void);
void getHeroName(char name[]);
void hitCharacter(char whoIsHitting[], char whoWasHit[], int damage, int *hp);
void clearBuffer(void);

int main(void){

	//represent hero health
	int heroHP = 15;
	//represent the damage the the hero can do to the monster
	int heroDamage = 7;
	//represent monster health
	int monsterHP = 20;
	//represent the damage the monster can do to the hero
	int monsterDamage = 5;
	char monsterName[] = "Freiza";
	/*reserve enough space for hero name 100 characters or less +1 for the terminating null*/
	char heroName[MAX_NAME_SIZE + 1] = "DEFAULT NAME";
	//show intro screen
	printWelcomeScreen();
	//get the user's name
	getHeroName(heroName);
	//use strlen to get and display the number of characters hero's name
	printf("DEBUG: user entered: %s, length: %d\n", heroName, strlen(heroName));
	printf("A wild %s appears\n", monsterName);
	//the hero battles the monster as long as the both have HP > 0
	while(heroHP > 0 && monsterHP > 0) {
		//hero hits the monster
		hitCharacter(heroName, monsterName, heroDamage, &monsterHP); 
		//if the monster is still alive (monsterHP > 0)
		if(monsterHP > 0){
			//monster hits the hero
			hitCharacter(monsterName, heroName, monsterDamage, &heroHP);
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
