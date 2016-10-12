#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
 void frnt();
 void dishtv();                    //Declaring functions
 void dishpack();
 void airtel();
 void airtelpack();
 void tata();
 void tatapack();
 void video();
 void videopack();
 void end();

    void main()
      {
	clrscr();
	frnt();
	int ch,gdriver = EGA, gmode = EGAHI;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	setbkcolor(6);
	ro:
	cout<<"\t\t\t******************************";
	cout<<"\n\t\t\t*   Welcome to DTH Services  *";
	cout<<"\n\t\t\t******************************";
	cout<<"\n\nEnter Your Choice";
	cout<<"\n1). Dishtv\n2). Airtel Digital Tv\n3). Tata sky\n4). Videocon D2H\n\n";
	cin>>ch;
	 if(ch>4)
	     {
		cout<<"\nYour choice is invalid....!\n";
		goto ro;
	     }
	 for(int i=0;i<=7;i++)
	     {
		delay(100);
		setbkcolor(i);
	     }
	 switch(ch)
	    {
	       case 1:
		 dishtv();
		 break;

	      case 2:
		airtel();
		break;

	      case 3:
		tata();
		break;
	      case 4:
		video();
		break;
	    }
	end();
	getch();
      }


   void frnt()                         //front page
	 {
	   int gm,gd=DETECT,p,i,j,k,q=0;
	   initgraph(&gd,&gm,"c:\\tc\\bgi");
	     delay(2000);
		for(i=0;i<625;i+=20,q+=2)
		   {
		      for(j=0;j<=5;j++)
			  {
			       setcolor(j);
			       circle(i,420,j-1);
			       circle(i,430,j+15);
			       circle(i,450,j+1);
			       circle(i,20,j+1);
			       circle(i,40,j+15);
			       circle(i,60,j+1);
			   }
		      setcolor(i);
			  for(p=135;p<160;p+=3)
			       {
				   delay(5);
				   circle(330,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(200,205,"WELCOME GUYS");
				}
		   }
	 }


      void dishtv()
	{
	  clrscr();
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(1);
	  cout<<"\t\t\t\t%%DISHTV%%";
	  cout<<"\n\t\t\tSAB PAR DISH SAWAR HAI";
	  cout<<"\n\nDo you want to see packages?If yes ,then press 1.\n";
	  cin>>n;
	    if(n==1)
	      dishpack();
	    else
	      {
		setcolor(3);
		rectangle(1,55,220,100);
		cout<<"You pressed an invalid key\n\nThanks for visiting....";
	      }
	  getch();
	}

      void dishpack()
	{
	  clrscr();
	  char m,g,j[30];
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  back:                  //Label created
	  cout<<"\nChoose your pack..\n";
	  cout<<"1).Super Family\n2).Super Gold\n3).Super World\n4).Super Platinum\n5).Paradise Pack\n";
	  cin>>n;
	  switch(n)
	   {
	    case 1:
	      cout<<"You selected Super Family pack";
	      cout<<"\nYou will get 215 channels\n";
	      cout<<"\nIn this you will get different options such as:-\n1).Entertainment  -13\t2).Hindi Movies  -12\t3).Kids  -2\t4).Music  -9\t5).Hindi News  -17\t6).English News  -1\t7).Buisness News  -2\t8).International  -4\t9).Devotional  -12\t10).Sports  -1\t11).Infotenment  -4\t12).Educational  -3\t13).Lifestyle  -5\t14).Marathi  -10\t15).Hindi  -8\t16).Punjabi  -9\t17).Gujrati  -3\t18).Odiya  -7\t19).Bangala  -14\t20).Urdu  -4\t21).North-East  -7\t22).Other States  -1\t23).South Zone  -19";
	      cout<<"\nTotal cost = Rs. 200 per month";
	      break;

	    case 2:
	      cout<<"You selected Super Gold pack";
	      cout<<"\nYou will get 247 channels\n";
	      cout<<"\nIn this you will get different options such as:-\n1).Entertainment  -14\t2).Hindi Movies  -14\t3).Kids  -6\t4).Music  -10\t5).Hindi News  -17\t6).English News  -2\t7).Buisness News  -2\t8).International  -4\t9).Devotional  -12\t10).Sports  -7\t11).Infotenment  -5\t12).Educational  -3\t13).Lifestyle  -5\t14).Marathi  -10\t15).Hindi  -8\t16).Punjabi  -9\t17).Gujrati  -3\t18).Odiya  -7\t19).Bangala  -14\t20).Urdu  -4\t21).North-East  -8\t22).Other States  -1\t23).South Zone  -19\t24).English Movies  -2";
	      cout<<"\nTotal cost = Rs. 255 per month";
	      break;

	    case 3:
	      cout<<"You selected Super World pack";
	      cout<<"\nYou will get 258 channels\n";
	      cout<<"\nIn this you will get different options such as:-\n1).Entertainment  -14\t2).Hindi Movies  -14\t3).Kids  -6\t4).Music  -11\t5).Hindi News  -17\t6).English News  -4\t7).Buisness News  -3\t8).International  -4\t9).Devotional  -12\t10).Sports  -7\t11).Infotenment  -5\t12).Educational  -3\t13).Lifestyle  -5\t14).Marathi  -10\t15).Hindi  -8\t16).Punjabi  -9\t17).Gujrati  -3\t18).Odiya  -7\t19).Bangala  -14\t20).Urdu  -4\t21).North-East  -8\t22).Other States  -1\t23).South Zone  -19\t24).English Movies  -2\t25).English Movies  -4\t26).English Entertainment  -1";
	      cout<<"\nTotal cost = Rs. 305 per month";
	      break;

	    case 4:
	      cout<<"You selected Super Platinum pack";
	      cout<<"\nYou will get 281 channels\n";
	      cout<<"\nIn this you will get different options such as:-\n1).Entertainment  -14\t2).Hindi Movies  -14\t3).Kids  -6\t4).Music  -13\t5).Hindi News  -17\t6).English News  -6\t7).Buisness News  -5\t8).International  -4\t9).Devotional  -12\t10).Sports  -7\t11).Infotenment  -8\t12).Educational  -3\t13).Lifestyle  -5\t14).Marathi  -10\t15).Hindi  -8\t16).Punjabi  -9\t17).Gujrati  -3\t18).Odiya  -7\t19).Bangala  -14\t20).Urdu  -4\t21).North-East  -8\t22).Other States  -1\t23).South Zone  -19\t24).English Movies  -2\t25).English Movies  -4\t26).English Entertainment  -5";
	      cout<<"\nTotal cost = Rs. 380 per month";
	      break;

	    case 5:
	      cout<<"You selected Paradise pack";
	      cout<<"\nYou will get 295 channels\n";
	      cout<<"\nIn this you will get different options such as:-\n1).Entertainment  -14\t2).Hindi Movies  -14\t3).Kids  -9\t4).Music  -13\t5).Hindi News  -17\t6).English News  -6\t7).Buisness News  -6\t8).International  -4\t9).Devotional  -12\t10).Sports  -7\t11).Infotenment  -8\t12).Educational  -3\t13).Lifestyle  -5\t14).Marathi  -10\t15).Hindi  -8\t16).Punjabi  -9\t17).Gujrati  -3\t18).Odiya  -7\t19).Bangala  -14\t20).Urdu  -4\t21).North-East  -8\t22).Other States  -1\t23).South Zone  -19\t24).English Movies  -2\t25).English Movies  -6\t26).English Entertainment  -10";
	      cout<<"\nTotal cost = Rs. 400 per month";
	      break;

	    default:
	      cout<<"\nInvalid Selection...Want to retry?(Y/N)";
	      cin>>m;
	       if(m=='y'||m=='Y')
		 goto back;
	       else
		 {
		 cout<<"\nThans for visiting.";
		 getch();
		 end();
		 }
	   }
	    cout<<"\n\nGET A NEW DISHTV CONNECTION AT ONLY RS. 12990 ALONG WITH SUPER PLATINUM PACK...!";
	    cout<<"\nDo you want to see distributors(a) or exit(b)?\n";
	    cin>>g;
	     if(g=='a'||g=='A')
	       {
		 for(int i=0;i<7;i++)
		   {
		     delay(100);
		     setbkcolor(i);
		   }
		 cout<<"\nEnter your city:";
		 gets(j);
		 cout<<"\nDistributers are:";
		 cout<<"\n1).Paras Enterprises,Surajpole,";
		 puts(j);
		 cout<<"\n2).Divya Electronics,Vijay Nagar,";
		 puts(j);
		 cout<<"\nFor Further information,visit-www.dishtv.in";
	       }
	     else
	       {
		 cout<<"Thanx for visiting.";
		 getch();
		 end();
	       }
	   getch();
	}


      void airtel()
	{
	   clrscr();
	   int gdriver = EGA,n,gmode = EGAHI;
	   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	   setbkcolor(4);
	   cout<<"\t\t\t\t##AIRTEL DIGITAL TV##";
	   cout<<"\n\n*When you are NO.1 in Technology,the news will already become.";
	   cout<<"\n\nDo you want to see packages?If yes ,then press 1.\n";
	   cin>>n;
	     if(n==1)
	       airtelpack();
	     else
	       {
		 setcolor(3);
		 rectangle(1,55,220,100);
		 cout<<"You pressed an invalid key\n\nThanks for visiting....";
	       }
	   getch();
	}

      void airtelpack()
	{
	  clrscr();
	  char m,g,j[30];
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  back:                  //Label created
	  cout<<"\nChoose your pack..\n";
	  cout<<"1).Value Sports\n2).Economy Sports\n3).Mega\n4).Altra\n";
	  cin>>n;
	    switch(n)
	     {
	       case 1:
		 cout<<"You selected Value Sports Pack.";
		 cout<<"\nIn this,you will get 143 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -14\t2).Movies  -5\t3).News  -24\t4).Sports  -1\t5).Kids Infotenment  -5\t6).Music  -4\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -34";
		 cout<<"Total cost is Rs.158 per month";
		 break;

	       case 2:
		 cout<<"You selected Economy Sports Pack.";
		 cout<<"\nIn this,you will get 162 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -14\t2).Movies  -5\t3).News  -30\t4).Sports  -6\t5).Kids Infotenment  -9\t6).Music  -5\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -34";
		 cout<<"Total cost is Rs.220 per month";
		 break;

	       case 3:
		 cout<<"You selected Mega Pack.";
		 cout<<"\nIn this,you will get 182 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -14\t2).Movies  -13\t3).News  -35\t4).Sports  -6\t5).Kids Infotenment  -16\t6).Music  -5\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -34";
		 cout<<"Total cost is Rs.290 per month";
		 break;

	       case 4:
		 cout<<"You selected Ultra Pack.";
		 cout<<"\nIn this,you will get 196 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -24\t2).Movies  -13\t3).News  -35\t4).Sports  -8\t5).Kids Infotenment  -18\t6).Music  -5\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -43";
		 cout<<"Total cost is Rs.360 per month";
		 break;

	       default:
		cout<<"\nInvalid Selection...Want to retry?(Y/N)";
		cin>>m;
		 if(m=='y'||m=='Y')
		   goto back;
		 else
		   {
		     cout<<"\nThanx for visiting.";
		     getch();
		     end();
		   }
	     }
	    cout<<"\nDo you want to see distributors(a) or exit(b)?\n";
	    cin>>g;
	     if(g=='a'||g=='A')
	       {
		 for(int i=0;i<7;i++)
		   {
		     delay(100);
		     setbkcolor(i);
		   }
		 cout<<"\nEnter your city:";
		 gets(j);
		 cout<<"\nDistributers are:";
		 cout<<"\n1).Kushal Enterprises,Surajpole,";
		 puts(j);
		 cout<<"\n2).Parshvanath Electronics,Vijay Nagar,";
		 puts(j);
		 cout<<"\nFor Further information,visit-www.airtel.in/digitaltv";
	       }
	     else
	       {
		 cout<<"Thanx for visiting.";
		 getch();
		 end();
	       }
	getch();
      }


     void tata()
	{
	   clrscr();
	   int gdriver = EGA,n,gmode = EGAHI;
	   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	   setbkcolor(2);
	   cout<<"\t\t\t^^TATA SKY^^";
	   cout<<"\n\t\t\tPoochne me kya jaata hai...";
	   cout<<"\n\n\t\t\tFREE SUBSCRIPTION";
	   cout<<"\n\nDo you want to see packages?If yes ,then press 1.\n";
	   cin>>n;
	    if(n==1)
	      tatapack();
	    else
	      {
		 setcolor(3);
		 rectangle(1,55,220,100);
		 cout<<"You pressed an invalid key\n\nThanks for visiting....";
	      }
	   getch();
	}

     void tatapack()
       {
	  clrscr();
	  char m,g,j[30];
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(5);
	  back:                  //Label created
	  cout<<"\nChoose your pack..\n";
	  cout<<"1).Dhamaal Mix Pack\n2).Supreme Sports Kids Pack\n3).Grand Sports Pack\n";
	  cin>>n;
	   switch(n)
	     {
	       case 1:
		 cout<<"You selected Dhamaal Mix Pack.";
		 cout<<"You will get 72 channels.";
		 cout<<"\nIn this you will get different options such as:-1).Hindi  -8\t2).Hindi Entertainment  -10\t3).Hindi Movies  -7\t4).Knowledge  -5\t5).Music  -2\t6).Kids  -1\t7).Hindi News  -10\t8).Doordarshan  -18\t9).Others  -11";
		 cout<<"\nTotal cost is Rs.175 per month.";
		 break;
	       case 2:
		 cout<<"You selected Supreme Sports Kids Pack.";
		 cout<<"You will get 82 channels.";
		 cout<<"\nIn this you will get different options such as:-1).Hindi Entertainment  -10\t2).Hindi Movies  -7\t3).Knowledge  -6\t4).Music  -8\t5).Kids  -7\t6).Hindi News  -10\t7).Doordarshan  -18\t8).Sports  -5\t9).Others  -11";
		 cout<<"\nTotal cost is Rs.250 per month.";
		 break;
	       case 3:
		 cout<<"You selected Grand Sports Pack.";
		 cout<<"You will get 111 channels.";
		 cout<<"\nIn this you will get different options such as:-1).Hindi Entertainment  -10\t2).Hindi Movies  -7\t3).Knowledge  -6\t4).Music  -8\t5).Kids  -7\t6).Hindi News  -10\t7).Doordarshan  -18\t8).Sports  -5\t9).English Entertainment  -9\t10).English News  -12\t11).English Movies  -8\t12).Others  -11";
		 cout<<"\nTotal cost is Rs.380 per month.";
		 break;
	       default:
		cout<<"\nInvalid Selection...Want to retry?(Y/N)";
		cin>>m;
		 if(m=='y'||m=='Y')
		   goto back;
		 else
		   {
		     cout<<"\nThanx for visiting.";
		     getch();
		     end();
		   }
	     }
	    cout<<"\nDo you want to see distributors(a) or exit(b)?\n";
	    cin>>g;
	     if(g=='a'||g=='A')
	       {
		 for(int i=0;i<7;i++)
		   {
		     delay(100);
		     setbkcolor(i);
		   }
		 cout<<"\nEnter your city:";
		 gets(j);
		 cout<<"\nDistributers are:";
		 cout<<"\n1).Mohan Centre,Rajpole,";
		 puts(j);
		 cout<<"\n2).Mahavir Electronics,Maharaj Nagar,";
		 puts(j);
		 cout<<"\nFor Further information,visit-www.tatasky.com";
	       }
	     else
	       {
		 cout<<"Thanx for visiting...";
		 getch();
		 end();
	       }
	    getch();
       }


     void video()
       {
	   clrscr();
	   int gdriver = EGA,n, gmode = EGAHI;
	   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	   setbkcolor(3);
	   cout<<"\t\t\t\t!!VIDEOCON D2H!!";
	   cout<<"\n\n\nMAXIMUM 400+ CHANNELS AND 22 HD CHANNELS.";
	   cout<<"\nNO OTHER DTH SERVICES OFFERS IT...!";
	   cout<<"\n\nDo you want to see packages?If yes ,then press 1.\n";
	   cin>>n;
	     if(n==1)
	       videopack();
	     else
	       {
		  setcolor(1);
		  rectangle(1,55,220,100);
		  cout<<"You pressed an invalid key\n\nThanks for visiting....";
	       }
	 getch();
       }


     void videopack()
       {
	   clrscr();
	   char m,g,j[30];
	   int gdriver = EGA,n, gmode = EGAHI;
	   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	   setbkcolor(3);
	   back:                  //Label created
	   cout<<"\n**Choose your pack**\n";
	cout<<"1).Super Gold\n2).New Gold\n3).New Diamond\n4).Platinum\n";
	  cin>>n;
	    switch(n)
	     {
	       case 1:
		 cout<<"You selected Super Gold Pack Pack.\n";
		 cout<<"\nIn this,you will get 277 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -19\t2).Movies  -7\t3).News  -26\t4).Sports  -12\t5).Kids Infotenment  -7\t6).Music  -5\t7).Punjabi  -6\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -34";
		 cout<<"\nTotal cost is Rs.200 per month.";
		 break;

	       case 2:
		 cout<<"You selected New Gold Pack.\n";
		 cout<<"\nIn this,you will get 286 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -14\t2).Movies  -5\t3).News  -30\t4).Sports  -18\t5).Kids Infotenment  -9\t6).Music  -5\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -34";
		 cout<<"\nTotal cost is Rs.266 per month.";
		 break;

	       case 3:
		 cout<<"You selected New Diamond Pack.\n";
		 cout<<"\nIn this,you will get 333 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -14\t2).Movies  -13\t3).News  -35\t4).Sports  -18\t5).Kids Infotenment  -16\t6).Music  -5\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -6\t10).Zonic -34";
		 cout<<"\nTotal cost is Rs.321 per month.";
		 break;

	       case 4:
		 cout<<"You selected Platinum Pack.\n";
		 cout<<"\nIn this,you will get 344 channels.";
		 cout<<"In this,you will get different options such as:-1).Entertainment  -44\t2).Movies  -23\t3).News  -35\t4).Sports  -18\t5).Kids Infotenment  -18\t6).Music  -11\t7).Punjabi  -5\t8).Doordarshan Channel  -18\t9).Devotional  -16\t10).Zonic -43";
		 cout<<"\nTotal cost is Rs.396 per month.";
		 break;

	       default:
		cout<<"\nInvalid Selection...Want to retry?(Y/N)";
		cin>>m;
		 if(m=='y'||m=='Y')
		   goto back;
		 else
		   {
		     cout<<"\nThanx for visiting.";
		     getch();
		     end();
		   }
	     }
	     cout<<"\NNOW GET BENIFITS UPTO ONE YEAR SUBSCRIPTION WORTH RS.5604/-FREE";
	    cout<<"\nDo you want to see distributors(a) or exit(b)?\n";
	    cin>>g;
	     if(g=='a'||g=='A')
	       {
		 for(int i=0;i<7;i++)
		   {
		     delay(100);
		     setbkcolor(i);
		   }
		 cout<<"\nEnter your city:";
		 gets(j);
		 cout<<"\nDistributers are:";
		 cout<<"\n1).Vikas Enterprises,Surajpole,";
		 puts(j);
		 cout<<"\n2).Mahajan Center,Vijay Nagar,";
		 puts(j);
		 cout<<"\nFor Further information,visit-www.videocond2h.com";
	       }
	     else
	       {
		 cout<<"Thanx for visiting.";
		 getch();
		 end();
	       }
	getch();
      }


       void end()                         //last page
	 {
	   int gm,gd=DETECT,p,i,j,k,q=0;
	   initgraph(&gd,&gm,"c:\\tc\\bgi");
	     delay(1000);
		for(i=0;i<625;i+=20,q+=2)
		   {
		      for(j=0;j<=5;j++)
			  {
			       setcolor(j);
			       circle(i,420,j-1);
			       circle(i,430,j+15);
			       circle(i,450,j+1);
			       circle(i,20,j+1);
			       circle(i,40,j+15);
			       circle(i,60,j+1);
			   }
		      setcolor(i);
			  for(p=70;p<100;p+=3)
			       {
				   delay(5);
				   circle(130,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(90,205,"THANX");
				}
			  for(p=70;p<100;p+=3)
			       {
				   delay(5);
				   circle(300,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(265,205,"FOR");
				}
			for(p=70;p<100;p+=3)
			       {
				   delay(5);
				   circle(465,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(420,205,"VISITING");
				}
			for(int r=0;r<90;r++)
			  putpixel(rand()%800,rand()%500,rand());
		   }
		   getch();
		   exit(0);
	 }