 void UpdateDisplay()
 {
    u8g2.firstPage();
    do {
      u8g2.setFont(u8g2_font_ncenB10_tr);
      u8g2.drawStr(20,12,"Hello Illyria!");
      u8g2.setFont(u8g2_font_ncenB10_tr);
      u8g2.drawStr(0,22,"How was your day today");
      u8g2.setFont(u8g2_font_ncenB08_tr);
      u8g2.drawStr(0,42,"How was your day today");
      u8g2.setFont(u8g2_font_courB08_tf);
      u8g2.drawStr(0,32,"How was your day today");
    } while ( u8g2.nextPage() );
    //delay(1000);
 }
