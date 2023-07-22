#define ROW1 12
#define ROW2 11
#define ROW3 10
#define ROW4 9
#define ROW5 8
#define ROW6 7

#define COL1 6
#define COL2 5
#define COL3 4
#define COL4 3
#define COL5 2
#define COL6 1


const int row[] = {ROW1, ROW2, ROW3, ROW4, ROW5, ROW6};
const int col[] = {COL1,COL2, COL3, COL4, COL5, COL6 };


int A[6][6] = {{0,0,0,0,0,0},
		       {0,1,1,1,1,0},
		       {0,1,0,0,1,0},
		       {0,1,0,0,1,0},
		       {0,1,1,1,1,0},
		       {0,0,0,0,0,0}};

void setup() {
  Serial.begin(1);
  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {

  delay(1);
  yaz(A);

}

void  yaz(int matrix[6][6]){
  for (int c=0; c<6; c++){
    
    digitalWrite(col[c], HIGH);
    
    for (int r = 0; r < 6; r++){
      
      digitalWrite(row[r], 255*matrix[r][c]);
     delay(1);}
    
    for (int r = 0; r < 6; r++){
      digitalWrite(row[r], HIGH);
     delay(1);}
  
    digitalWrite(col[c], LOW);
  }
}