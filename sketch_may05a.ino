int BL, BR, FL, FR;

//BR = A1, BR = A2, FL = A3, FR = A4;
boolean BBL, BBR, BFL, BFR, flag1, flag2, flag3, flag4 = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  BR = analogRead(A1);
  BL = analogRead(A2);
  FL = analogRead(A3);
  FR = analogRead(A4);
  /*
    Serial.println("BL = " + String(BL) + "  ");
    Serial.print("BR = " + String(analogRead(A2)) + "  ");
    Serial.print("FL = " + String(analogRead(A3)) + "  ");
    Serial.print("FR = " + String(analogRead(A4)) + "  ");
  */
  if (BL > 850) {
    BBL = true;
  }
  else {
    BBL = false;
  }

  if (BR > 810) {
    BBR = 1;
  }
  else {
    BBR = 0;
  }

  if (FL > 800) {
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



  if (flag1 == 0) {
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
  }

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
}
Serial.println("BL = " + String(BBL) + "  ");
Serial.print("BR = " + String(BBR) + "  ");
Serial.print("FL = " + String(BFL) + "  ");
Serial.print("FR = " + String(BFR) + "  ");
}
