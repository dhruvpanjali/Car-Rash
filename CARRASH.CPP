#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_UP 72
#define KEY_DOWN 80
					     // ENTER KEY = 13
 void CAR();
 void gameover(int score);
 void L1();
 void L2();
 void INSTRUCTIONS();
 void MENU();

 int X=170,Y=175;

//

 void main()
{
 clrscr();
 int gd,gm=DETECT;
 initgraph(&gm,&gd,"c:\\turboc3\\bgi");

 L1();
}

//


  void L1()
{
 clrscr();
 cleardevice();
 setbkcolor(15);

 int T,i,load=1; float S;
 char l[50];

 setlinestyle(0,1,10);

 for(i=10,S=100,T=175;S<=620;S+=5.2,i+=5)
{
 cleardevice();
 sound(i+50);
 setcolor(1);
 settextstyle(0,0,4);
 outtextxy(100,50,"LOADING");
 settextstyle(0,0,4);
 outtextxy(90,350,"CREATOR:");
 setcolor(4);
 outtextxy(400,350,"@DKP");

 setcolor(4);
 settextstyle(0,0,3);
 sprintf(l,"%d",load);
 outtextxy(400,50,l);
 outtextxy(480,50,"%");

 load+=1;
 int loading=load;

 setcolor(4);
 line(0,241,639,241);

 setcolor(8);
 setfillstyle(SOLID_FILL,GREEN);        // CAR
 bar3d(S-85,T+48,S-60,T+60,10,20);
 bar3d(S-60,T+40,S-30,T+60,10,20);
 bar3d(S-30,T+50,S,T+60,10,20);          // PLAYER BONET

 setfillstyle(SOLID_FILL,DARKGRAY);      // CAR
 circle(S-60,T+60,4);
 circle(S-30,T+60,4);

 delay(40);
 nosound();
}
 delay(350);
 MENU();
}

//

 void MENU()
{
 clrscr();
 cleardevice();

 sound(300);
 delay(50);
 nosound();

 int ch,x=150,y=210,z=462;
 char A,B,CH;

 for(;;)
{
 setbkcolor(11);
 setcolor(1);

 settextstyle(0,0,7);
 outtextxy(100,50,"CAR RASH");

 setcolor(4);

 settextstyle(10,0,3);
 outtextxy(160,150,"1> START GAME");

 settextstyle(10,0,3);
 outtextxy(160,210,"2> INSTRUCTIONS");

 settextstyle(10,0,3);
 outtextxy(160,270,"3> EXIT");

 setcolor(8);
 setlinestyle(0,1,3);
 rectangle(z,x,206,y);

 if(kbhit())
{                                            // w = 119
 int k=getch();

 if(k==72)              // UP
{
 y-=60;
 x-=60;
 sound(300);
 delay(50);
 nosound();

 if(x<150)
{
 x=150;
 y=210;
}
 }

 if(k==80)                 //DOWN
{
 y+=60;
 x+=60;
 sound(300);
 delay(50);
 nosound();

 if(y>330)
{
 y=330;
 x=270;
}
 }

 if((y==210)&&(x==150))
{
 z=462;
 if(k==13)
 L2();
}

 if((y==270)&&(x==210))
{
 z=485;
 if(k==13)
 INSTRUCTIONS();
}

 if((y==330)&&(x==270))
{
 z=308;
 if(k==13)
 exit(0);
}
delay(65);
cleardevice();
}
 }
  }

//

 void L2()
{
 clrscr();
 cleardevice();
 setbkcolor(15);

 sound(300);
 delay(50);
 nosound();

 int T,i,load=1; float S;
 char l[50];

 setlinestyle(0,1,2);

 for(i=10,S=100,T=175;S<=620;S+=5.2,i+=5)
{
 cleardevice();
 sound(i+50);
 setcolor(1);
 settextstyle(0,0,4);
 outtextxy(100,50,"LOADING");
 settextstyle(0,0,4);
 outtextxy(90,350,"CREATOR:");
 setcolor(4);
 outtextxy(400,350,"@DKP");

 setcolor(4);
 settextstyle(0,0,3);
 sprintf(l,"%d",load);
 outtextxy(400,50,l);
 outtextxy(480,50,"%");

 load+=1;
 int loading=load;

 setcolor(4);
 line(0,241,639,241);

 setcolor(8);
 setfillstyle(SOLID_FILL,GREEN);        // CAR
 bar3d(S-85,T+48,S-60,T+60,10,20);
 bar3d(S-60,T+40,S-30,T+60,10,20);
 bar3d(S-30,T+50,S,T+60,10,20);          // PLAYER BONET

 setfillstyle(SOLID_FILL,DARKGRAY);      // CAR
 circle(S-60,T+60,4);
 circle(S-30,T+60,4);

 delay(40);
 nosound();
}
 delay(350);
 CAR();
}

//

 void gameover(int score)
{
 clrscr();
 cleardevice();
 nosound();
 setbkcolor(7);

 char arr[50];
 int l=150,m=210,Z=440;

 for(;;)
{
 setcolor(1);
 settextstyle(0,0,8);
 outtextxy(68,70,"GAMEOVER");

 settextstyle(10,0,2);
 outtextxy(161,150,"1> START AGAIN");

 settextstyle(10,0,2);
 outtextxy(161,210,"2> MAIN MENU");

 settextstyle(10,0,2);
 outtextxy(161,270,"3> EXIT");

 settextstyle(0,0,2);
 outtextxy(161,350,"HIGH SCORE:");
 sprintf(arr,"%d",score);
 setcolor(4);
 outtextxy(350,350,arr);

 setcolor(8);
 setlinestyle(0,1,3);
 rectangle(Z,l,206,m);

 if(kbhit())
{                                            // w = 119
 int q=getch();

 if(q==72)             // UP
{
 m-=60;
 l-=60;
 sound(300);
 delay(50);
 nosound();

 if(l<150)
{
 l=150;
 m=210;
}
 }

 if(q==80)                // DOWN
{
 m+=60;
 l+=60;
 sound(300);
 delay(50);
 nosound();

 if(m>330)
{
 m=330;
 l=270;
}
 }

 if((l==150)&&(m==210))
{
 Z=440;
 if(q==13)
 CAR();
}

 if((l==210)&&(m==270))
{
 Z=398;
 if(q==13)
 MENU();
}

 if((m==330)&&(l==270))
{
 Z=288;
 if(q==13)
 exit(0);
}

delay(65);
cleardevice();
}
 }
  }

//

 void INSTRUCTIONS()
{
 clrscr();
 cleardevice();

 sound(300);
 delay(50);
 nosound();

 setbkcolor(15);

 setcolor(4);
 settextstyle(0,0,2);
 outtextxy(50,100,"<-- USE ARROW KEYS TO MOVE CAR -->");

 setcolor(1);
 settextstyle(0,0,2);
 outtextxy(8,200,"                           ");

 setcolor(4);
 settextstyle(0,0,2);
 outtextxy(60,300,"PRESS (ENTER) OR (ESC) TO RETURN");

 getch();

 sound(300);
 delay(50);
 nosound();

 MENU();
}

//

 void CAR()
{
 cleardevice();
 setlinestyle(0,1,1);
 setbkcolor(0);
 int score=0;

 for(;;)
{
 int c=540,d=610,e=575,f=477,g=512,h=550,i=620,j=560,k=495,l=530,m=460,n=530;
 int p=595,q=540,r=600;

 for(int a=350,b=385,o=535;o>100;a--,b--)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,LIGHTCYAN);       //MIDDLE ENEMY 1     (small car)
 bar3d(a,210,b,236,4,20);

 if(a<300)
{
 setfillstyle(SOLID_FILL,LIGHTBLUE);       //ABOVE ENEMY 1      (circle)
 pieslice(e,178,0,360,14);
 e--;
}
 if(e<320)
{
 setfillstyle(SOLID_FILL,LIGHTRED);       //BELOW ENEMY 1      (big car)
 bar3d(c,258,d,284,4,20); c--;d--;
}
//

 if(c<280)
{
 setfillstyle(SOLID_FILL,LIGHTCYAN);       //MIDDLE ENEMY 2      (circle)
 pieslice(j,222,0,360,14);
 j--;
 setfillstyle(SOLID_FILL,LIGHTRED);       //MIDDLE ENEMY 2 (A)     (circle)
 pieslice(p,222,0,360,14);
 p--;
}
 if(p<470)
{
 setfillstyle(SOLID_FILL,LIGHTBLUE);       //ABOVE ENEMY 2      (big car)
 bar3d(h,167,i,193,4,20); h--;i--;
}
 if(h<310)
{
 setfillstyle(SOLID_FILL,LIGHTRED);       //BELOW ENEMY 2     (small car)
 bar3d(f,258,g,284,4,20); f--;g--;
}

//

 if(f<250)
{
 setfillstyle(SOLID_FILL,LIGHTCYAN);       //MIDDLE ENEMY 3      (big car)
 bar3d(m,210,n,236,4,20); m--;n--;
}
 if(m<459)
{
 setfillstyle(SOLID_FILL,LIGHTRED);       //ABOVE ENEMY 3     (small car)
 bar3d(k,167,l,193,4,20); k--;l--;

 setfillstyle(SOLID_FILL,LIGHTBLUE);       //ABOVE ENEMY 3 (A)    (big car)
 bar3d(q,167,r,193,4,20); q--;r--;
}
 if(q<430)
{
 setfillstyle(SOLID_FILL,LIGHTGREEN);       //BELOW ENEMY 3      (circle)
 pieslice(o,272,0,360,14);
 o--;
}

//

 setcolor(WHITE);          //LINE BELOW BASE
 line(0,152,639,152);

 setcolor(WHITE);          //LINE ABOVE BASE
 line(0,298,639,298);

 if(Y>213)
{ Y=213; }

 setfillstyle(SLASH_FILL,BLUE);      // TOP GROUND
 bar(0,0,640,150);

 setfillstyle(SLASH_FILL,BLUE);      // BASE GROUND
 bar(0,300,640,600);

 setfillstyle(SOLID_FILL,WHITE);      // DIVIDER
 bar(10,225,50,235);

 setfillstyle(SOLID_FILL,WHITE);      // DIVIDER
 bar(300,225,340,235);

 setfillstyle(SOLID_FILL,WHITE);      // DIVIDER
 bar(590,225,630,235);

 if(Y<137)
 { Y=137; }

 setfillstyle(SOLID_FILL,RED);              // CAR
 bar3d(X-85,Y+48,X-60,Y+60,10,20);
 bar3d(X-60,Y+40,X-30,Y+60,10,20);
 bar3d(X-30,Y+50,X,Y+60,10,20);          // PLAYER BONET

 setfillstyle(SOLID_FILL,WHITE);      // CAR
 circle(X-60,Y+60,4);
 circle(X-30,Y+60,4);

 setcolor(14);
 settextstyle(0,0,4);
 outtextxy(150,50,"SCORE =");

 char arr[50];
 settextstyle(0,0,4);
 sprintf(arr,"%d",score);
 outtextxy(400,50,arr);

 score++;
 int hs=score;

 if(score==1001)
{
 sound(1050);
 delay(50);
 nosound();

 settextstyle(0,0,6);
 outtextxy(218,360,"NICE");
 delay(1000);
}
 if(score==2001)
{
 sound(1050);
 delay(50);
 nosound();

 settextstyle(0,0,6);
 outtextxy(75,365,"IMPRESSIVE");
 delay(1000);
}
 if(score==3001)
{
 sound(1050);
 delay(50);
 nosound();

 settextstyle(0,0,6);
 outtextxy(55,365,"U R ROCKING");
 delay(1000);
}
 if(score==4001)
{
 sound(1050);
 delay(50);
 nosound();

 settextstyle(0,0,6);
 outtextxy(100,365,"GOOD LUCK");
 delay(1000);
}
 if(kbhit())
{
 int s=getch();

 if(s==27)
{
 sound(300);
 delay(50);
 nosound();

 gameover(score);
}

 if(s==72)
{
 Y-=38;
 sound(300);
 delay(30);
 nosound();
}

 if(s==80)
{
 Y+=38;
 sound(300);
 delay(30);
 nosound();
}
 }

 int CH;
 if(((e<=191)&&(e>=85))&&(Y==137))     //ABOVE ENEMY 1
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

 if(((a<=180)&&(b>=85))&&(Y==175))     //MIDDLE ENEMY 1
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

 if(((c<=180)&&(d>=85))&&(Y==213))    //BELOW ENEMY 1
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

//

 if(((h<=180)&&(h>=85))&&(Y==137))     //ABOVE ENEMY 2
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

 if(((j<=191)&&(p>=85))&&(Y==175))     //MIDDLE ENEMY 2
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

 if(((f<=180)&&(g>=85))&&(Y==213))    //BELOW ENEMY 2
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

//

 if(((k<=180)&&(r>=85))&&(Y==137))     //ABOVE ENEMY 3
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

 if(((m<=180)&&(n>=85))&&(Y==175))     //MIDDLE ENEMY 3
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

 if(((o<=191)&&(o>=85))&&(Y==213))    //BELOW ENEMY 3
{
 sound(50);
 delay(50);
 nosound();
 gameover(score);
}

//

cleardevice();
}
 }
  }


