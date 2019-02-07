#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include <wiringPi.h>
#include <softTone.h>

#define	PIN	3

int scale [15] = {0, 523, 554, 587, 622, 659, 698, 739, 783, 830, 880, 932, 1046 } ;

int main (int argc, char *argv[]){

  wiringPiSetup () ;
  softToneCreate (PIN) ;
  srand(time(NULL)) ;

  for(int i = 0; i < 15; i++){
      scale[i] *= 2;
  }

  for (int i = 0 ; i < atoi(argv[1]) ; i++){
      int k = rand()%15 ;
      softToneWrite (PIN, scale[k]) ;
      if(k != 0){
          delay (100) ;
      }else{
          delay(rand()%1000+100);
          i-- ;
      }
  }
}
