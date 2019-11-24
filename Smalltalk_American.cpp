/**
 * Smalltalk_American.cpp
 * Author: George Minnigerode
 */

#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"
using namespace std;

/**
 * American constructor that passes American nationality to Smalltalk constructor
 */
Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
	populatePhrases();
}

/**
 * American constructor that passes a nationality to Smalltalk constructor, useful for
 * creating a donut enthusiest object
 */
Smalltalk_American::Smalltalk_American(string myNationality,int iPerson):Smalltalk(myNationality,iPerson){
	populatePhrases();
}

/**
 * American destructor
 */
Smalltalk_American::~Smalltalk_American(void){

}

/**
 * Fills mySmallTalk vector with appropriate phrases
 */
void Smalltalk_American::populatePhrases(){
	mySmallTalk.emplace_back(AMERICAN_PHRASE_1);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_2);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_3);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_4);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_5);
}
