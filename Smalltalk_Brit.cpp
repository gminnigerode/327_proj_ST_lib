/**
 * Smalltalk_Brit.cpp
 * Author: George Minnigerode
 */

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"
using namespace std;

/**
 * Brit constructor that passes Brit nationality to Smalltalk constructor
 */
Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT,iPerson){
	populatePhrases();
}

/**
 * Brit destructor
 */
Smalltalk_Brit::~Smalltalk_Brit(void){

}

/**
 * Fills mySmallTalk vector with appropriate phrases
 */
void Smalltalk_Brit::populatePhrases(){
	mySmallTalk.emplace_back(BRIT_1);
	mySmallTalk.emplace_back(BRIT_2);
	mySmallTalk.emplace_back(BRIT_3);
	mySmallTalk.emplace_back(BRIT_4);
	mySmallTalk.emplace_back(BRIT_5);
	mySmallTalk.emplace_back(BRIT_6);
	mySmallTalk.emplace_back(BRIT_7);
}
