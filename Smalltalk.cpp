/*
 * Smalltalk.cpp
 *      Author: keith
 *      Author: George Minnigerode
 */

#include <vector>
#include <memory>
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"
using namespace std;

Smalltalk::Smalltalk(string myNationality, int iPerson):nationality(myNationality),iPerson(iPerson){
	current_phrase = 0;
}

Smalltalk::~Smalltalk(void){

}

string Smalltalk::saySomething(){
	string phrase = nationality + " " + to_string(iPerson) + ": ";
	phrase += mySmallTalk[current_phrase%mySmallTalk.size()];
	current_phrase++;
	return phrase;
}

string Smalltalk::getTime(){
	if(pWatch == 0){
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return pWatch->getTime();
}

unique_ptr<Watch> Smalltalk::takeWatch(){
	if(pWatch == 0){
		return unique_ptr<Watch>();
	}
	unique_ptr<Watch> tempWatch = move(pWatch);
	return tempWatch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
	if(this->pWatch != 0){
		return false;
	}
	this->pWatch = move(pWatch);
	return true;
}
