/**
 * ST_American_DonutEnthusiest.cpp
 * Author: George Minnigerode
 */

#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"
using namespace std;

/**
 * Constructor for Donut Enthusiest that passes values up to the American constructor
 */
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i): Smalltalk_American(AMERICAN_DE,i){
	populatePhrases();
}

/**
 * Donut Enthusiest destructor
 */
ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){

}

/**
 * Fills mySmallTalk vector with appropriate phrases
 */
void ST_American_DonutEnthusiest::populatePhrases(){
	mySmallTalk.emplace_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.emplace_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.emplace_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.emplace_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.emplace_back(AMERICAN_DE_PHRASE_5);
}
