screenInitz(){
   
   int i;
   //white bg
   for(i=0; i<=24; i++){
       color(0xf0);
       gxy(0,i);
       printf("                                                                                ");
   }
   gxy(0,0);
   //main blue window
   for(i=5; i<=19; i++){
       color(0x10);
       gxy(10,i);
       printf("                                                            ");
   }
   
   //shadow backdrop y
   for(i=6; i<=20;i++){
       color(0x80);
       gxy(70,i);
       putchar(178);
   }
   //shadow backdrop x
   for(i=11; i<=70; i++){
      color(0x80);
      gxy(i,20);
      putchar(178);
   }
   
   //titlebar
   gxy(10,5);
   color(0x80);
   printf(" MDAS%c2%c 1.0                                                ",250,252);
   
   //outline corners left
   color(0x70);
   gxy(10,6);putchar(201);
   gxy(10,19);putchar(200);
   
   //outline x
   for(i=11; i<=68; i++){
      color(0x70);gxy(i,6);putchar(205);
      color(0x70);gxy(i,19);putchar(205);
   }
   //outline y
   for(i=7;i<=18;i++){
      color(0x70);gxy(10,i);putchar(186);
      color(0x70);gxy(69,i);putchar(186);
   }
   //outline corner right
   gxy(69,6);putchar(187);
   gxy(69,19);putchar(188);
   
   gxy(32,6);putchar(209);
   gxy(32,19);putchar(207);
   
   //lightgrey menupane
   for(i=7;i<=18;i++){
       gxy(11,i);printf("                     %c",179);
   }
   
   //main menu
   gxy(11,7);color(0x80);printf("      %c%c%c%c%c%c%c%c       %c",250,250,250,250,250,250,250,250,179);
   gxy(10,8);color(0x70);putchar(199);
   for(i=0;i<=20;i++){putchar(196);}putchar(180);
   gxy(11,9);color(0x70);printf(" %c Multiplication",16);
   gxy(11,10);color(0x70);printf(" %c Division",16);
   gxy(11,11);color(0x70);printf(" %c Addition",16);
   gxy(11,12);color(0x70);printf(" %c Subtraction",16);
   gxy(10,13);color(0x70);putchar(199);
   for(i=0;i<=20;i++){putchar(196);}putchar(180);
   gxy(11,14);color(0x70);printf(" %c 2%c",16,252);
   gxy(10,15);color(0x70);putchar(199);
   for(i=0;i<=20;i++){putchar(196);}putchar(180);
   gxy(11,16);color(0x70);printf(" %c About MDAS%c2%c",16,250,252);
   gxy(10,17);color(0x70);putchar(199);
   for(i=0;i<=20;i++){putchar(196);}putchar(180);
   gxy(11,18);color(0x70);printf(" %c Exit",16);
   
   
   //bluepane border
   color(25);
   gxy(34,7);putchar(218);for(i=0;i<=31;i++){putchar(196);}putchar(191);
   for(i=8;i<=17;i++){gxy(34,i);putchar(179);gxy(67,i);putchar(179);}
   gxy(34,18);putchar(192);for(i=0;i<=31;i++){putchar(196);}putchar(217);
   
   //instruction text
   
   gxy(50,11);
   color(0x1e);printf("[w]");color(0x17);printf("-up");
   color(0x17);
   gxy(51,11);putchar(30);
   gxy(45,12);
   printf("down-");color(0x1e);printf("[s]");color(0x17);
   gxy(51,12);putchar(31);
   gxy(40,15);printf("Press ");color(0x1e);printf("Enter ");color(0x17);
   printf("to select...");color(0x1e);
   gxy(66,17);putchar(250);gxy(66,17);
}
