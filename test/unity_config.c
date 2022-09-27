#include "unity_config.h"

void unityOutputStart()
{
  // init uart to 115200 8N1
}

void unityOutputChar(char c)
{
 // write char to UART output register, wait for it to be sent
}

void unityOutputFlush() {}

void unityOutputComplete()
{
 // todo disable UART again
}
