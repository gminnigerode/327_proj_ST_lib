
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"
using namespace std;

Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
	populatePhrases();
}

Smalltalk_American::Smalltalk_American(string myNationality,int iPerson):Smalltalk(myNationality,iPerson){
	populatePhrases();
}

Smalltalk_American::~Smalltalk_American(void){

}

void Smalltalk_American::populatePhrases(){
	mySmallTalk.emplace_back(AMERICAN_PHRASE_1);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_2);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_3);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_4);
	mySmallTalk.emplace_back(AMERICAN_PHRASE_5);
}
