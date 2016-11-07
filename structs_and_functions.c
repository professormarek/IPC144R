/*
this program demonstrates passing struct variables (objects) to functions
*/

#include <stdio.h>

//tell the compiler what pieces of information make up a planet
struct Planet{
	double diameter_km; //referred to as fields
	double distance_from_sun_km;
	double mass_kg;
};

/*
example of passing a struct object to a function
prints out the Planet that's passed as an argument
*/
void displayPlanet(struct Planet planet){
	printf("this planet's distance from sun (km): %lf\n", planet.distance_from_sun_km);
	printf("this planet's mass (kg): %lf\n", planet.mass_kg);
	printf("this planet's diameter (km): %lf\n", planet.diameter_km);

}

/*
demonstrate whether structs are passed by value or by address
this function allows the user to type in data for a planet
*/
void getPlanetFromUser(struct Planet *planet){
	printf("DEBUG: planet's address: %p\n", &planet);
	//prompt the user for a new diameter
	printf("Enter planet's diameter: ");
	//demonstrates the -> operator
	scanf("%lf", &(planet->diameter_km));
	//prompt the user for a new distance
	//demonstrate dereference and apply the dot
	printf("Enter planet's distance from sun: ");
	scanf("%lf", &((*planet).distance_from_sun_km));
	//prompt the user for a new mass
	printf("Enter planet's mass: ");
	scanf("%lf", &(planet->mass_kg));
}


int main(void){
	//create a variable (object) of our Planet type - this allocates memory
	struct Planet jupiter = {142800.0,778500000.0 ,18980000000000000000000000000.0};
	struct Planet mercury = {4878.0, 57910000.0,   3285000000000000000.0 };
	//call the displayPlanet functino and pass jupiter
	printf("Jupiter's info: \n");
	displayPlanet(jupiter); 
	//display mercury
	printf("Mercury's info: \n");
	displayPlanet(mercury);
	printf("DEBUG: mercury's address: %p\n", &mercury);
	//let the user fix mercury's info
	getPlanetFromUser(&mercury);
	//display it again to see whether our function worked...
	printf("Mercury's changed info: \n");
	displayPlanet(mercury);
	return 0;
}
