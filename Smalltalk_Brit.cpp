
#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"
using namespace std;

Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT,iPerson){
	populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit(void){

}

void Smalltalk_Brit::populatePhrases(){
	mySmallTalk.emplace_back(BRIT_1);
	mySmallTalk.emplace_back(BRIT_2);
	mySmallTalk.emplace_back(BRIT_3);
	mySmallTalk.emplace_back(BRIT_4);
	mySmallTalk.emplace_back(BRIT_5);
	mySmallTalk.emplace_back(BRIT_6);
	mySmallTalk.emplace_back(BRIT_7);
}
