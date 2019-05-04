#include "SmartGuesser.hpp"
#include <vector>

using namespace bullpgia;
using namespace std;

string myGuess;
unsigned int myLength;
vector <string> v;

 string guess()
 {
     return myGuess;
 }
 void learn(string replyStr)
 {
    v.insert(replyStr);
 }
 void startNewGame(unsigned int length)
 {
     myGuess = "";
     myLength = length;
 }