/*  Traffic Lights.*/

// 設定紅黃綠燈Pin 值
  int LEDRed = 11;
  int LEDYellow = 12;
  int LEDGreen = 13;

void setup() {                
  pinMode(LEDRed, OUTPUT);     
  pinMode(LEDYellow, OUTPUT);     
  pinMode(LEDGreen, OUTPUT);               
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(9, 0);  // 關閉小數點
}



void loop() {
  digitalWrite(LEDRed, LOW);     // 綠燈
  digitalWrite(LEDYellow, LOW);
  digitalWrite(LEDGreen, HIGH);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  delay(10000);      //等待7秒鐘



  digitalWrite(LEDRed, LOW);   // 黃燈
  digitalWrite(LEDGreen, LOW);
  digitalWrite(LEDYellow, HIGH);
  delay(2000);     //等待2秒鐘

  digitalWrite(LEDYellow, LOW);
  digitalWrite(LEDGreen, LOW);
  digitalWrite(LEDRed, HIGH);   // 紅燈
  //19
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '18'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '17'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '16'
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '15'
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '14'
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '13'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '12'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
    digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '11'
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(10, 1);
  delay(1000);
  // 顯示數字 '10'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(10, 1);
  delay(1000);
     //9
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '8'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '7'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '6'
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '5'
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '4'
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '3'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '2'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '1'
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
      digitalWrite(10, 0);
  delay(1000);
  // 顯示數字 '0'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
    digitalWrite(10, 0);
  delay(1000); 

}
