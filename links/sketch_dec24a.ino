#include <LiquidCrystal.h>

// تهيئة شاشة LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // تحديد نوع الشاشة
  lcd.begin(16, 2);

  // السطر الأول: الاسم واللقب
  lcd.setCursor(0, 0);
  lcd.print("Sherry");   // ← غيّري الاسم إذا لزم

  // السطر الثاني: اسم العمل
  lcd.setCursor(0, 1);
  lcd.print("TP5 LCD Arduino");

  delay(2000); // انتظار ثانيتين قبل البدء بالعداد
}

void loop() {
  // عرض عداد ديناميكي
  for (int i = 0; i <= 10; i++) {
    lcd.clear(); // مسح الشاشة

    lcd.setCursor(0, 0);
    lcd.print("Sherry"); // الاسم يبقى في السطر الأول

    lcd.setCursor(0, 1);
    lcd.print("Compteur: ");
    lcd.print(i);

    delay(1000); // تحديث كل ثانية
  }
}
