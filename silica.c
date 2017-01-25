/*
  Name: Project Silica
  Copyright: MDAS 2^n 1.0
  Author: Joseph Harvey C. Angeles
  Date: 25/05/12 19:29
  Description: 
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
       
   int menu =0;
   int menuCh =0;
   screenInitz();
   sfx(1);
   
   for(;;){
      
      menuCh = getArrowPressed();
      
      switch(menuCh){
             case 1: menu--; Beep(330,150); break;
             case 2: menu++; Beep(330,150); break;
             case 5: menuGet(&menu); break;
      }
      /*
      if((menuCh=='s')||(menuCh=='S')){Beep(330,150);menu++;}
      else if((menuCh=='w')||(menuCh=='W')){Beep(330,150);menu--;}
      else if(menuCh=='\r')menuGet(&menu);
      //else if (menuCh=='e')exit(0);
      */
      
      screenMenuGet(&menu);
   }
   
}

int getArrowPressed(){
      char x,y,alpha;
      alpha=224;
      do{
         do{
         x = getch();
         }while((x!=alpha)&&(x!='\r'));
         if(x=='\r')break;
         y = getch();
      }while((y!='H')&&(y!='P')&&(y!='M')&&(y!='K'));
      
      if(x=='\r')return 5;
      else{
      switch(y){
         case 'H': return 1; break; //up
         case 'P': return 2; break; //down
         case 'K': return 3; break; //left
         case 'M': return 4; break; //right
        
         default: return 0; //null
      }
      }
}


