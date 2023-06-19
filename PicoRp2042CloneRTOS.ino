
#include "pico/stdlib.h"

#include "FreeRTOS.h"

#include "task.h"

void setup(){
  Serial.begin(115200);
  xTaskCreate(satu,"satu",128,NULL,1,NULL);
  xTaskCreate(dua,"dua",128,NULL,1,NULL);
}

void satu(void *parameter){
  int i = 0;
  while(true){
    if(i>10) i =0;
    Serial.print("[1] TASK satu value: ");
    Serial.println(i);
    i++;
    delay(1000);
  }
}

void dua(void *parameter){
  int i=0;
  while(true){
    if(i>10) i=0;

    Serial.print("\t\t\t\t\t[2] TASK dua value: ");
    Serial.println(i);

    i++;

    delay(500);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
}
