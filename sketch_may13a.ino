int BL, BR, FL, FR;

//BR = A, BR = A, FL = A, FR = A2;
boolean BBL, BBR, BFL, BFR, flag1, flag2, flag3, flag4, oldflag1, oldflag2, oldflag3, oldflag4 = 0, k;

void setup() {
  Serial.begin(115200);

  pinMode(13, OUTPUT);
}

void loop() {
  //FL = analogRead(A1);
  //delayMicroseconds(10);
  BL = analogRead(A2);
  //delayMicroseconds(10);
  BR = analogRead(A3);
  //delayMicroseconds(10);
  //FR = analogRead(A4);
  /*
    Serial.println("BL = " + String(BL) + "  ");
    Serial.print("BR = " + String(analogRead(A2)) + "  ");
    Serial.print("FL = " + String(analogRead(A3)) + "  ");
    Serial.print("FR = " + String(analogRead(A4)) + "  ");
  */
  if (BL > 915) {
    BBL = true;
  }
  else {
    BBL = false;
  }

  if (BR > 910) {
    BBR = 1;
  }
  else {
    BBR = 0;
  }

  if (FL > 455) {
    BFL = 1;
  }
  else {
    BFL = 0;
  }

  if (FR > 800) {
    BFR = 1;
  }
  else {
    BFR = 0;
  }



  /*if (flag1 == 0) {
    if (BFL == 1) {
      flag1 = 1;
    }
    }
    else if (flag1 == 1) {
    if (BFL == 1) {
      flag1 = 0;
    }
    }

    if (flag2 == 0) {
    if (BFR == 1) {
      flag2 = 1;
    }
    }
    else if (flag2 == 1) {
    if (BFR == 1) {
      flag2 = 0;
    }
    }*/

  if (flag3 == 0) {
    if (BBL == 1) {
      flag3 = 1;
    }
  }
  else if (flag3 == 1) {
    if (BBL == 1) {
      flag3 = 0;
    }
  }

  if (flag4 == 0) {
    if (BBR == 1) {
      flag4 = 1;
    }
  }
  else if (flag4 == 1) {
    if (BBR == 1) {
      flag4 = 0;
    }
  }
  if (k == 0) {
    if (BBL == 1 || BBR == 1) {
      oldflag3 = BBL;
      oldflag4 = BBR;
        BL = analogRead(A2);
        BR = analogRead(A3);
       if (BL > 915) {
          BBL = true;
        }
        else {
          BBL = false;
        }
      
        if (BR > 910) {
          BBR = 1;
        }
        else {
          BBR = 0;
        }
      if ((oldflag3 == 1 && BBL == 0) || (oldflag4 == 1 && BBR == 0)) {
        k = 1;
      }
    }
  }

  if (k == 1) {
    if (BBL == 1 || BBR == 1) {
      oldflag3 = BBL;
      oldflag4 = BBR;
      BL = analogRead(A2);
        BR = analogRead(A3);
       if (BL > 915) {
          BBL = true;
        }
        else {
          BBL = false;
        }
      
        if (BR > 910) {
          BBR = 1;
        }
        else {
          BBR = 0;
        }
      if ((oldflag3 == 1 && BBL == 0) || (oldflag4 == 1 && BBR == 0)) {
        k = 0;
      }
    }
  }
  analogWrite(A5, 0);
  Serial.println(k);
}
  /*Serial.println("BL = " + String(BBL) + "  ");
  Serial.print("BR = " + String(BBR) + "  ");
  //Serial.print("FL = " + String(FL) + "  ");
  //Serial.print("FR = " + String(FR) + "  ");
}*/
