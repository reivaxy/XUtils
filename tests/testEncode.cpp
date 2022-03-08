//
// Created by Xavier on 23/02/2019.
//

#include <XUtils.h>

int main (int argc, char *argv[]) {

    const char *message = "This is the message: %to% encode";
    char result[1000];

    XUtils::URLEncode(message, result);

}