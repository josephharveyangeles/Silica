screenMenuGet(int *i){
     
     if(*i<=0)*i=7;
     else if(*i>7)*i=1;
     
          switch(*i){
                case 1:scrnMul();break;
                case 2:scrnDiv();break;
                case 3:scrnAdd();break;
                case 4:scrnSub();break;
                case 5:scrn2b();break;
                case 6:scrnAb();break;
                case 7:scrnEx();break;
                
          }
     

}

scrnMul(){
   //highlight Multiplication
   gxy(11,9);color(0x9e); printf(" %c Multiplication    ",26);
   gxy(11,10);color(0x70);printf(" %c Division          %c",16,179);
   gxy(11,18);color(0x70);printf(" %c Exit              %c",16,179);
   
   clrBmnuPne();
   
   color(0x17);
   
   gxy(35,9); printf("    Evaluate the product of the ");
   gxy(35,10);printf("  given random integers.        ");
   gxy(35,11);printf("            a x b = ?           ");
   gxy(35,12);printf("    You earned a point for each ");
   gxy(35,13);printf("  correct answer. The random in ");
   gxy(35,14);printf("  tegers gets more difficult ea ");
   gxy(35,15);printf("  ch time a 500 score points is ");
   gxy(35,16);printf("  exceeded.                     ");
   
   
   cursorHome();
}


scrnDiv(){
   //highlight Division
   gxy(11,9);color(0x70); printf(" %c Multiplication    %c",16,179);
   gxy(11,10);color(0x9e);printf(" %c Division          ",26);
   gxy(11,11);color(0x70);printf(" %c Addition          %c",16,179);
   
   clrBmnuPne();
   
   color(0x17);
   gxy(35,9); printf("    Divide the numbers and find ");
   gxy(35,10);printf("  the remainder.                ");
   gxy(35,11);printf("          a %c = ? , r = ?       ",246);
   gxy(35,12);printf("    You earned a point for each ");
   gxy(35,13);printf("  correct answer. The random in ");
   gxy(35,14);printf("  tegers gets more difficult ea ");
   gxy(35,15);printf("  ch time a 500 score points is ");
   gxy(35,16);printf("  exceeded.                     ");
   
   cursorHome();
}

scrnAdd(){
   //highlight Addition
   gxy(11,10);color(0x70);printf(" %c Division          %c",16,179);
   gxy(11,11);color(0x9e);printf(" %c Addition          ",26);
   gxy(11,12);color(0x70);printf(" %c Subtraction       %c",16,179);
   
   clrBmnuPne();
   
   color(0x17);
   gxy(35,9); printf("      Find the sum of the given ");
   gxy(35,10); printf("  numbers.                      ");
   gxy(35,11);printf("            a + b = ?           ");
   gxy(35,12);printf("    You earned a point for each ");
   gxy(35,13);printf("  correct answer. The random in ");
   gxy(35,14);printf("  tegers gets more difficult ea ");
   gxy(35,15);printf("  ch time a 500 score points is ");
   gxy(35,16);printf("  exceeded.                     ");
   
   cursorHome();
}

scrnSub(){
   //highlight subtraction
   gxy(11,11);color(0x70);printf(" %c Addition          %c",16,179);
   gxy(11,12);color(0x9e);printf(" %c Subtraction       ",26);
   gxy(11,14);color(0x70);printf(" %c 2%c                %c",16,252,179);
   
   clrBmnuPne();
   
   color(0x17);
   gxy(35,9); printf("      Subtract the given random ");
   gxy(35,10); printf("  numbers.                      ");
   gxy(35,11);printf("            a - b = ?           ");
   gxy(35,12);printf("    You earned a point for each ");
   gxy(35,13);printf("  correct answer. The random in ");
   gxy(35,14);printf("  tegers gets more difficult ea ");
   gxy(35,15);printf("  ch time a 500 score points is ");
   gxy(35,16);printf("  exceeded.                     ");
   
   cursorHome();
}

scrn2b(){
   //highlight 2base
   gxy(11,12);color(0x70);printf(" %c Subtraction       %c",16,179);
   gxy(11,14);color(0x9e);printf(" %c 2%c                ",26,252);
   gxy(11,16);color(0x70);printf(" %c About MDAS%c2%c     %c",16,250,252,179);
   
   clrBmnuPne();
   
   color(0x17);
   gxy(35,8); printf("        Evaluate the expression");
   gxy(35,9);printf("  given a number as an exponent");
   gxy(35,10);printf("  of a base 2 integer.         ");
   gxy(35,11);printf("            n = x             ");
   gxy(35,12);printf("  where:    n is, 2%c = x     ",252); 
   gxy(35,13);printf("    You earned a point for each ");
   gxy(35,14);printf("  correct answer. The random in ");
   gxy(35,15);printf("  tegers gets more difficult ea ");
   gxy(35,16);printf("  ch time a 500 score points is ");
   gxy(35,17);printf("  exceeded.. ");
   
   
   cursorHome();
}

scrnAb(){
   //highlight About
   gxy(11,14);color(0x70);printf(" %c 2%c                %c",16,252,179);
   gxy(11,16);color(0x9e);printf(" %c About MDAS%c2%c     ",26,250,252);
   gxy(11,18);color(0x70);printf(" %c Exit              %c",16,179);
   
   clrBmnuPne();
   color(0x10);
   gxy(35,8); printf("                                ");
   gxy(35,9); printf("           %c%c      %c%c",219,219,219,219);
   gxy(35,10);printf("             %c%c%c%c%c%c",219,219,219,219,219,219);
   gxy(35,11);printf("           %c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219);
   gxy(35,12);printf("           %c%c  %c%c  %c%c",219,219,219,219,219,219);
   gxy(35,13);printf("         %c%c%c%c%c%c%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gxy(35,14);printf("           %c%c      %c%c ",219,219,219,219);
   gxy(35,15);printf("             %c%c  %c%c ",219,219,219,219);
   gxy(35,16);printf("                                ");
   gxy(35,17);printf("                                ");
   
   
   cursorHome();
}

scrnEx(){
   //highlight Exit
   gxy(11,9);color(0x70); printf(" %c Multiplication    %c",16,179);
   gxy(11,16);color(0x70);printf(" %c About MDAS%c2%c     %c",16,250,252,179);
   gxy(11,18);color(0x9e);printf(" %c Exit              ",26);
   
   clrBmnuPne();
   
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
   
   cursorHome();
}

clrBmnuPne(){
   color(0x17);
   gxy(35,8); printf("                                ");
   gxy(35,9); printf("                                ");
   gxy(35,10);printf("                                ");
   gxy(35,11);printf("                                ");
   gxy(35,12);printf("                                ");
   gxy(35,13);printf("                                ");
   gxy(35,14);printf("                                ");
   gxy(35,15);printf("                                ");
   gxy(35,16);printf("                                ");
   gxy(35,17);printf("                                ");
}

cursorHome(){
   gxy(66,17);color(0x1e);putchar(250);
   gxy(66,17);//cursor
}
