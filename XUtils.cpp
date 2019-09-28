/**
 *  Useful stuff 
 *  Xavier Grosjean 2017
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 
#include "XUtils.h"

// return true if current time is after given time + delay
bool XUtils::isElapsedDelay(unsigned long now, unsigned long* lastTime, unsigned long delay) {
  unsigned long elapsed = now - *lastTime;
  bool result = false;
  // millis() overflows unsigned long after about 50 days => <0  but since unsigned,
  // no problem !
  if(elapsed >= delay){
    result = true;
  }
  if(*lastTime == 0) {
    result = true;
  }
  if(result) {
    *lastTime = now;
  }
  return result;
}

// Copy one string into another making sure there is no length overflow
// If from is null, result will be empty string
void XUtils::safeStringCopy(char* to, const char* from, unsigned int length) {
  if(from != NULL) {
    strlcpy(to, from, length + 1); // the length does not include the extra char reserved for nul
    // todo: warn if was bigger ?
  } else {
    *to = 0;    
    // todo: warn ?
  }
}

// Convert a String into a char array that you will need to free yourself when appropriate
// Beware, won't handle multibyte character sets 
void XUtils::stringToCharP(String in, char** out) {
  unsigned int size = in.length() + 100;
  *out = (char *)malloc(size);
  in.toCharArray(*out, size);
}