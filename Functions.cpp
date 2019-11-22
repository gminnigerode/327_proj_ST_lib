//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
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

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {

	vector<std::unique_ptr<Smalltalk>> stPointers;

	for(int i=1; i<=numBrit; i++){
		stPointers.emplace_back(new Smalltalk_Brit(i));
	}

	for(int i=1; i<=numAmerican; i++){
		stPointers.emplace_back(new Smalltalk_American(i));
	}

	for(int i=1; i<=numbAmericanDonutEnthusiest; i++){
		stPointers.emplace_back(new ST_American_DonutEnthusiest(i));
	}

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
