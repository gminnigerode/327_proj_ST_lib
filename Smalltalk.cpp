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
	return "";
}

string Smalltalk::getTime(){
	return "";
}

unique_ptr<Watch> Smalltalk::takeWatch(){
	return NULL;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
	return true;
}

