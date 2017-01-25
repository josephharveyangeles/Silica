#include <windows.h>

sfx(int i){
        switch(i){
                  case 1: sfx1();break;
                  case 2: sfx2();break;
                  case 3: sfx3();break;
                  case 4: sfx4();break;
                  case 5: sfx5();break;
                  case 6: sfx6();break;
                  }
}


//opening
sfx1(){
       Sleep(1000);
       Beep(659,100);
       Beep(659,100);
       Sleep(100);
       Beep(659,200);
       Sleep(200);
       Beep(523,200);
       Beep(659,400);
       Beep(784,800);
       Sleep(400);
       Beep(392,800);
       
}

//quit sound
sfx2(){
       Sleep(500);
       Beep(349,200);
       Beep(262,200);
       Beep(175,200);
       Sleep(200);
}

//lvlup sound
sfx3(){
Sleep(500);
       Beep(330,100);
       Beep(392,100);
       Beep(523,100);
       Beep(494,100);
       Beep(659,100);
}

//enter menu
sfx4(){
       Beep(392,120);
       Beep(415,120);
       Beep(440,120);
       Beep(466,120);
       Beep(494,120);
       Beep(523,120);
       Beep(554,120);
       Beep(587,120);
}

sfx5(){
       
       Beep(196,200);
       Beep(185,200);
       Beep(196,200);
       Beep(165,800);
       Beep(175,400);
       Beep(185,400);
       Beep(196,800);
       Beep(262,800);
       Beep(330,200);
       Beep(330,100);
       Beep(294,400);
       Beep(330,400);
       Beep(349,400);
       Beep(247,400);
       Beep(294,800);
       Beep(262,400);
       Beep(196,200);
       Beep(185,200);
       Beep(196,200);
       Beep(262,800);
}

sfx6(){
Beep(262,50);
Beep(277,50);
Beep(294,50);
Sleep(600);
Beep(247,200);
Beep(349,200);
Sleep(400);
Beep(349,200);
Beep(349,300);
Beep(330,300);
Beep(294,300);
Beep(262,200);
Beep(165,200);
Sleep(200);
Beep(165,200);
Beep(131,200);
}
//gameOver
//Congrats
//about
//exit
