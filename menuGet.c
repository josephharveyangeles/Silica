#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

menuGet(int *i){
    switch(*i){
       case 1: sfx(4);funcMul(); *i=1;break;
       case 2: sfx(4);funcDiv(); *i=2;break;
       case 3: sfx(4);funcAdd(); *i=3;break;
       case 4: sfx(4);funcSub(); *i=4;break;
       case 5: sfx(4);func2b();  *i=5;break;
       case 6: funcAb(); *i=6;break;
       case 7: sfx(4);exit(0);
       default: *i=0;

       }
}

//Multiplication module
funcMul(){

char ans[5];
int ians =0;
int score = 0;
int iscore = 500;
int rand2, rand10;
short lvlRandNum = 2;
short randomFlag = 10;
short gOvrFlag = 0;

/*using the current time generate
a random seed as a reference for
generationg random numbers.
*/
srand ( time(NULL) );


  

    while(lvlRandNum<=8){
        rand2 = rand() % 2;
        rand10 = rand() % 10;
        
        if(score>=iscore){
           iscore+=500;
           lvlRandNum++;
           sfx(3);
           }
        
        do{
            
           clrBmnuPne();
           gxy(35,17);color(0x1e);printf("[q]");
           color(0x17);printf("-Quit");
           gxy(47,12);color(0x1e);
           printf("%d x %d ", (rand2 + lvlRandNum), rand10);
           gxy(62,17);color(0x1a);printf("%5d",score);
           color(0x1e);
           gxy(53,12);
           printf("= ");
           color(0x1a);
           
           gets(ans);
           
           if( strcmp(ans,"uplvl")==0)break;
           
        }while((nonDigitFound(ans)==1) || (ans[0]=='\0')  );
        
        if(ans[0]=='q'){
           gOvrFlag=4;
           break;
        }
        
        if( strcmp(ans,"uplvl")==0){
           lvlRandNum++;sfx(3);
           continue;
        }
        
        ians = atoi(ans);
        
        if(ians == (rand2 + lvlRandNum)*rand10){
                score+=7;
                continue;
        }
        
        else if(ians != (rand2 + lvlRandNum)*rand10){
                score-=5;
                invalidAns(1);
                gOvrFlag++;
                if(gOvrFlag==3){
                   break;
                }
                else
                continue;
        }
        
        
        
            
    }
    switch(gOvrFlag){
       case 3: gameEnd(0,score);break;
       case 4: gameEnd(4,score);break;
       default: gameEnd(1,score);
    }
}




funcDiv(){
          
char ans[5];
char ans2[5];
int ians, ians2 =0;
int score = 0;
int iscore = 500;
int randa, randb;
short lvlRandNum = 10;

short gOvrFlag = 0;

srand ( time(NULL) );


  

    while(lvlRandNum<=100){
    
        do{
           randa = rand() % lvlRandNum + 1;
           randb = rand() % lvlRandNum + 1;
        }while((randa<randb)||(randb==0));
        
        if(score>=iscore){
           iscore+=500;
           lvlRandNum+=10;
           sfx(3);
           }
        
        do{
            
           clrBmnuPne();
           gxy(35,17);color(0x1e);printf("[q]");
           color(0x17);printf("-Quit");
           gxy(44,12);color(0x1e);
           printf("%3d %c %2d ", randa, 246, randb);
           gxy(62,17);color(0x1a);printf("%5d",score);
           color(0x1e);
           gxy(53,12);
           printf("= ");
           
           gxy(51,13);
           printf("r = ");
           
           color(0x1a); gxy(55,12);
           gets(ans); //get quotient
           
           if((strcmp(ans,"uplvl")==0)||(ans[0]=='q'))break;
           
           gxy(55,13);
           gets(ans2); //get remainder
           
          
           
        }while( ((nonDigitFound(ans)==1)||(ans[0]=='\0') ) && ((nonDigitFound(ans2)==1)||(ans2[0]=='\0') ) );
        
        if(ans[0]=='q'){
           gOvrFlag=4;
           break;
        }
        
        if( strcmp(ans,"uplvl")==0){
           lvlRandNum+=10;sfx(3);
           continue;
        }
        
        ians = atoi(ans);
        ians2 = atoi(ans2);
        
        
        if((ians == (randa / randb))&&(ians2 == (randa%randb))){
                score+=7;
                continue;
        }
        
        else if((ians != (randa / randb))||(ians2 != (randa%randb))){
                score-=3;
                gOvrFlag++;
                if(ians2 != (randa%randb))
                invalidAns(2);
                else if (ians != (randa / randb))invalidAns(1);
                else{
                     invalidAns(2);
                     invalidAns(1);
                     score-=2;
                     }
                
        }
        /*
        else if((ians != (randa / randb))&&(ians2 == (randa%randb))){
                score-=3;
                invalidAns(1);
                gOvrFlag++;
        }
        */
        
        
        if(gOvrFlag==3){
                   break;
                }
        else
                continue;
        
            
    }
    switch(gOvrFlag){
       case 3: gameEnd(0,score);break;
       case 4: gameEnd(4,score);break;
       default: gameEnd(1,score);
    }          
}

//addition module
funcAdd(){
char ans[5];
int ians =0;
int score = 0;
int iscore = 500;
int randa, randb;
short lvlRandNum = 10;

short gOvrFlag = 0;

srand ( time(NULL) );


  

    while(lvlRandNum<=100){
        randa = rand() % lvlRandNum + 1;
        randb = rand() % lvlRandNum;
        
        if(score>=iscore){
           iscore+=500;
           lvlRandNum+=10;
           sfx(3);
           }
        
        do{
            
           clrBmnuPne();
           gxy(35,17);color(0x1e);printf("[q]");
           color(0x17);printf("-Quit");
           gxy(44,12);color(0x1e);
           printf("%3d + %2d ", randa, randb);
           gxy(62,17);color(0x1a);printf("%5d",score);
           color(0x1e);
           gxy(53,12);
           printf("= ");
           color(0x1a);
           
           gets(ans);
           
           if( strcmp(ans,"uplvl")==0)break;
           
        }while((nonDigitFound(ans)==1) || (ans[0]=='\0')  );
        
        if(ans[0]=='q'){
           gOvrFlag=4;
           break;
        }
        
        if( strcmp(ans,"uplvl")==0){
           lvlRandNum+=10;sfx(3);
           continue;
        }
        
        ians = atoi(ans);
        
        if(ians == (randa + randb)){
                score+=7;
                continue;
        }
        
        else if(ians != (randa + randb)){
                score-=5;
                invalidAns(1);
                gOvrFlag++;
                if(gOvrFlag==3){
                   break;
                }
                else
                continue;
        }
        
        
        
            
    }
    switch(gOvrFlag){
       case 3: gameEnd(0,score);break;
       case 4: gameEnd(4,score);break;
       default: gameEnd(1,score);
    }
}

//subtraction module
funcSub(){
char ans[5];
int ians =0;
int score = 0;
int iscore = 500;
int randa, randb;
short lvlRandNum = 10;

short gOvrFlag = 0;

srand ( time(NULL) );


  

    while(lvlRandNum<=100){
        randa = rand() % lvlRandNum + 1;
        randb = rand() % lvlRandNum;
        
        if(score>=iscore){
           iscore+=500;
           lvlRandNum+=10;
           sfx(3);
           }
        
        do{
            
           clrBmnuPne();
           gxy(35,17);color(0x1e);printf("[q]");
           color(0x17);printf("-Quit");
           gxy(44,12);color(0x1e);
           printf("%3d - %2d ", randa, randb);
           gxy(62,17);color(0x1a);printf("%5d",score);
           color(0x1e);
           gxy(53,12);
           printf("= ");
           color(0x1a);
           
           gets(ans);
           
           if( strcmp(ans,"uplvl")==0)break;
           
        }while((nonDigitFound(ans)==1) || (ans[0]=='\0')  );
        
        if(ans[0]=='q'){
           gOvrFlag=4;
           break;
        }
        
        if( strcmp(ans,"uplvl")==0){
           lvlRandNum+=10;sfx(3);
           continue;
        }
        
        ians = atoi(ans);
        
        if(ians == (randa - randb)){
                score+=7;
                continue;
        }
        
        else if(ians != (randa - randb)){
                score-=5;
                invalidAns(1);
                gOvrFlag++;
                if(gOvrFlag==3){
                   break;
                }
                else
                continue;
        }
        
        
        
            
    }
    switch(gOvrFlag){
       case 3: gameEnd(0,score);break;
       case 4: gameEnd(4,score);break;
       default: gameEnd(1,score);
    }
}

//base2 module
func2b(){
char ans[5];
int ians =0;
int score = 0;
int iscore = 500;
int randx;
short lvlRandNum = 10;

short gOvrFlag = 0;

srand ( time(NULL) );


  

    while(lvlRandNum<=20){
        randx = rand() % lvlRandNum + 1;
        
        if(score>=iscore){
           iscore+=500;
           lvlRandNum+=5;
           sfx(3);
           }
        
        do{
            
           clrBmnuPne();
           gxy(35,17);color(0x1e);printf("[q]");
           color(0x17);printf("-Quit");
           gxy(48,12);color(0x1e);
           printf("%2d ", randx);
           gxy(62,17);color(0x1a);printf("%5d",score);
           color(0x1e);
           gxy(51,12);
           printf("= ");
           color(0x1a);
           
           gets(ans);
           
           if( strcmp(ans,"uplvl")==0)break;
           
        }while((nonDigitFound(ans)==1) || (ans[0]=='\0')  );
        
        if(ans[0]=='q'){
           gOvrFlag=4;
           break;
        }
        
        if( strcmp(ans,"uplvl")==0){
           lvlRandNum+=5;
           sfx(3);
           continue;
        }
        
        ians = atoi(ans);
        
        if(ians == (pow(2,randx))){
                score+=7;
                continue;
        }
        
        else if(ians != (pow(2,randx))){
                score-=5;
                invalidAns(3);
                gOvrFlag++;
                if(gOvrFlag==3){
                   break;
                }
                else
                continue;
        }
        
        
        
            
    }
    switch(gOvrFlag){
       case 3: gameEnd(0,score);break;
       case 4: gameEnd(4,score);break;
       default: gameEnd(1,score);
    }
}

funcAb(){
   //description
   
   clrBmnuPne();
   gxy(36,10);color(0x17);
   printf("      Copyright(C) MDAS%c2%c     ",250,252);
   gxy(36,11);printf("          Version  1.0         ");
   gxy(36,12);printf("                               ");
   gxy(36,13);printf("           05.25.2012          ");
   gxy(36,15);printf("      josephharveyangeles      ");
   
   cursorHome();
   sfx(5);
   getch();
}



int nonDigitFound(char x[]){
    int c; 
    for(c=0; x[c]!='\0'; c++){
       if(x[0]=='q')break;
       else if((isalpha(x[c]))||(x[c]==' ')){
       return 1;
       break;
       }
    
    }
   return 0; 
}

invalidAns(int i){
    putchar(7);
    color(0x1c);
    if(i==1){
       gxy(53,12);
       }
    else if(i==2){
       gxy(53,13);
       }
    else if(i==3){
       gxy(51,12);
       }
    putchar('=');
    
    Sleep(200);
}


gameEnd(int i, int s){
   clrBmnuPne();
   
   if(i==0){      
      color(0x1c);
      gxy(47,12);
      printf("Game Over");
      sfx(6);
      }
   else if(i==1){      
      color(0x1a);gxy(43,12);
      printf("Congratulations!!");
      sfx(6);
   }
   
   
   color(0x1e);gxy(44,13);
   printf("your score: ");
   color(0x1a);printf("%d",s);
   gxy(35,17);color(0x17);
   sfx(2);
   printf("Press any key to continue%c%c %c",250,250,250);
   cursorHome();
   getch();
}
