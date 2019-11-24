/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 *      Author: George Minnigerode
 */
#include <iostream>
#include <memory>
#include <vector>
#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"
using namespace std;

/**
 * Creates unique pointers to Smalltalk objects of type Brit, American, or American Donut Enthusiest
 * and returns them to a vector after creating and distributing pointers to the appropriate
 * amount of Watch objects
 */
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {

	vector<std::unique_ptr<Smalltalk>> stPointers;

	//Adds Brits
	for(int i=1; i<=numBrit; i++){
		stPointers.emplace_back(new Smalltalk_Brit(i));
	}
	//Adds Americans
	for(int i=1; i<=numAmerican; i++){
		stPointers.emplace_back(new Smalltalk_American(i));
	}
	//Adds American Donut Enthusiests
	for(int i=1; i<=numbAmericanDonutEnthusiest; i++){
		stPointers.emplace_back(new ST_American_DonutEnthusiest(i));
	}
	//Distributes watches to the first pointers in Smalltalk object array
	if(stPointers.size()>=numWatches){
		for(int i = 0; i<numWatches; i++){
			unique_ptr<Watch> tempWatch(new Watch);
			stPointers[i]->giveWatch(tempWatch);
		}
	}
	else{
		for(int i=0; i<stPointers.size(); i++){
			unique_ptr<Watch> tempWatch(new Watch);
			stPointers[i]->giveWatch(tempWatch);
		}
	}
	return stPointers;
}
