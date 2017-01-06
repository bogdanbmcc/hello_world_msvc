// hello_world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>


int _tmain(int argc, _TCHAR* argv[])
{
  printf("Hello World!\n");
  printf("\n..to exit press any key ...");
  while ( 1 )
  {
    if ( kbhit() )
    {
      break;
    }
  }
  printf(" exiting...");
  while( kbhit() )
  {
    getch();
  }
  printf("\nExited.\n");
	return 0;
}

