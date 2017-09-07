#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<string.h>

class flight
{
  private:
  char departure[20], destination[20];
  char name[20];
  int Fno, Sno;
  int del;
  int seats[30], i;
  bool is_booked;
  char fullname[20];
  char flightname[20],source[20],arrival[20];
  float date, time, Fno1;
  public:


  void viewSchedule ();//DONE
  void bookTicket (); //DONE
  void seatCheck ();  //DONE
  void deleteTicket (); //DONE
  void boardingPass (); //DONE
  void displayMessage(); //DONE
  void trending();  //DONE
};

void flight::trending()
{ system("cls");
cout << "\n                  Labeeb's News Block";
cout << "\n                 -------------------";
cout << "\n";
cout << "\nAIR INDIA GOES PURE VEGETARIAN";
cout << "\n--------------------------------";
cout << "\nAir India, the goverment funded national airline has recently decreed";
cout << "\nthat only vegetarian food wll be served to its passengers travelling";
cout << "\nwithin the country. This decision came as a shock to the passengers,";
cout << "\nwith many taking hilarious digs on the already debted Airline network";
cout << "\non social media.";
cout << "\n";
cout << "\nVISERION - A DESERVING & HUGE COMEBACK";
cout << "\n--------------------------------------";
cout << "\nNothing lasts forever in this world. So was the fate of the air giant,";
cout << "\nViserion. The DANY lmtd. run airline declared bankruptcy in the 2000's.";
cout << "\nIt was then auctioned and bought by the White Walkers corp. in 2017.";
cout << "\nStarting with only a few running luxury flights, Viserion saw a massive";
cout << "\nleap in its reservations and has since been only a source of profit";
cout << "\nfor the proud owners who now are rapidly expanding the buisness.";
cout << "\nThis enormous comeback shows that viserion is back to give a tough ";
cout << "\ntime to its competitors";
cout << "\n";
cout << "\nAIR INDIA TO BE PRIVATISED SOON";
cout << "\n-------------------------------";
cout << "\nNow, the current NDA government has embarked on another attempt to";
cout << "\nprivatise the airline. Air India has around Rs52,000 crore of debt on";
cout << "\nits books, and at least seven unions. The NDA government previously";
cout << "\ntried to privatise the heavily debted airline but A mix of political";
cout << "\ntentativeness, bureaucratic red tape, and smart lobbying by rivals put";
cout << "\n paid to that, though.";
cout << "\n";
cout << "\nAFTER SPICE JET, INDIGO TO HIKE EXCESS BAGGAGE FEE";
cout << "\n--------------------------------------------------";
cout << "\nIndia's largest domestic airline, IndiGo, has hiked its excess baggage";
cout << "\ncharges for domestic flyers checking-in more than 15 kg. This move comes";
cout << "\nafter an initiative taken by Spice Jet to hike excess baggage fee.";
cout << "\nIndiGo, which controls 40 per cent of domestic market share, hike is";
cout << "\nsimilar to the increase in baggage charges implemented by SpiceJet";
cout << "\nfrom Friday. The two airlines together account for 53 per cent of domestic market share.";
cout << "\n";
system("pause 5");
}






void flight::boardingPass()
{

cout << "\n";

cout << "\n";
cout << "\n";
 system("sleep 2");
cout << "\n";
cout << "\n";
system("cls");
cout << "\n";
cout << "\n--------------------------------------------------------------";
cout << "\n                      BOARDING PASS"<<endl;
cout << "\nAIRLINE: ";
puts(flightname);
cout << "\n";
cout << "\nPASSENGER NAME: "; puts(name);

cout << "\nSOURCE: "; puts(departure);

cout << "\nDESTINATION: "; puts(destination);

cout << "\nCLASS:             ECONOMY";
cout << "\nDATE OF DEPARTURE: "<<date<<"      TIME OF DEPARTURE: "<<time;
cout << "\nFLIGHT NUMBER:     "<<Fno  <<"     GATE NUMBER:        2";
cout << "\n--------------------------------------------------------------";
cout << "\n";
cout << "\nPLEASE PRINT THE BOARDING PASS FOR THE DAY OF TRAVEL";

cout << "\nTHIS BOARDING PASS IS ISSUED WITH THE PROVIDED INFORMATION";

cout << "\nIT SHOULD BE KEPT IN MIND THAT A BOARDING PASS WILL STAND INVALID,";
cout << "\nIF IT HAS BEEN ISSUED USING UNFAIR MEANS.";
cout << "\nFROM ALL OF US AT Labeeb's. WE WISH YOU A PLEASANT JOURNEY";
cout << "\nTHANK YOU AND HAVE A NICE DAY";
cout << "\n";
}



void flight::displayMessage ()
{ system("cls");
  cout << "\nRequest Processed.";
  cout << "\nBooking Cancelled";
  cout <<"\nThanks for choosing Labeeb's Aviaton Services ~ Labeeb (CEO, Labeeb's)";
  cout << "\n";
  system("pause 5");
}



void flight::seatCheck ()
{
   is_booked = false;

  cout << "\nChecking Availability Of Seats...";
  cout << "\n";

   system("pause 5");

  for (i = 0; i < 30; i++)
  {
    if (seats[i] == 1)  //continue checking array until you find an unbooked seat
    {
      continue;
    }
    else
    {
      seats [i] = 1;   //once you find an emoty seat, book it and break out of loop. you don't need to continue loop and hence waste runtime
      is_booked = true;
      break;
    }
  } system("cls");
  if (is_booked)
  {
    cout << "\nYour Seat Has Been Booked Succesfully";
    cout << "\nPlease view your boarding pass from the MAIN MENU";
    cout << "\nFrom all of us in Labeeb's, We wish you a pleasant and comfortable journey.";
    cout << "\n";
    system("pause");
    cout << "\nYou can now print a boarding pass.";
    cout << "\nThank you for your co-operation.";
    cout << "\n";

    system("pause 5");

    boardingPass();
  }
  else
  {
    cout << "\nNo Seats Available\n";
  }
  system("pause 5");
}


void flight::deleteTicket ()
{ system("cls");
  is_booked = true;
char delname[20];
int  delres, delfno;
cout << "\nWELCOME TO Labeeb's Aviation services.";
cout << "\n";
cout << "\nPlease enter your name:- ";
gets(delname);
cout << "\nPlease enter you flight number:- ";
cin >> delfno;

cout << "\nFLIGHT NUMBER - "<<delfno;
cout << "\nDeleting reservation...";

system("pause 10");

for (i = 0; i < 30; i++)
{
if (seats[i]==0)
{
 continue;
}
else
{
seats[i] = 0;
is_booked = false;
break;
}
}
  system("cls");
if(is_booked == false)
{
cout << "\nSeat reservation has been deleted successfully";
cout << "\nIf boarding pass has been issued, it stands invalid";
cout << "\nThanks for choosing Labeeb's aviation services.";
}
else
{
cout << "\nError 404";
cout << "\nServers have crashed. Please try again later";
}



cout << "\n";
system("pause 5");
}





void flight::viewSchedule()
{
  cout << "\nLIST OF AVAILABLE FLIGHTS:-";
  cout <<
    "\nS.No F.NO    F. NAME             FROM      DESTINATION    TIME   DATE  ";
  cout <<
    "\n-----------------------------------------------------------------------";
  cout <<
    "\n1    2342.   JET AIRWAYS         BANGALORE  BBSR          12:30  14/07";
           
  cout <<
    "\n2    2435.   JET AIRWAYS         NEW DELHI  RANCHI        17:35  12/07";
    
  cout <<
    "\n3    3646.   AIR ASIA            BBSR       BENGALURU     17:45  17/07";
    
  cout <<
    "\n4    3078.   AIR ASIA            PATNA      MUMBAI        00:15  20/07";
    
  cout <<
    "\n5    4534.   AIR INDIA           MUMBAI     PATNA         15:15  27/07";
    
  cout <<
    "\n6    4435.   AIR INDIA           RANCHI     NEW DELHI     15:45  29/07";
    
  cout <<
    "\n7    5443.   SPICE JET           TRIVANDRUM AHMEDABAD     23:40  12/08";
    
  cout <<
    "\n8    6557.   INDIGO              AHMEDABAD  TRIVANDRUM    05:16  31/07";
    
  cout <<
    "\n9    7231.   VISTARA             MUMBAI     BANGALORE     18:00  23/07";
    
  cout <<
    "\n10   7123.   VISTARA             BANGALORE  MUMBAI        06:45  23/07";
    
  cout <<
    "\n11   6652.   INDIGO              BBSR       KOLKATA       18:20  28/07";
    
  cout <<
    "\n12   4412.   AIR INDIA           NEW DELHI  JAIPUR        03:10  25/07";
    
  cout <<
    "\n13   6256.   INDIGO              KOLKATA    BHUBANESWAR   04:50  02/08";
    
  cout <<
    "\n14   4214.   AIR INDIA           NEW DELHI  KOLKATA       09:15  02/08";
    
  cout <<
    "\n15   4839.   AIR INDIA           NEW DELHI  MUMBAI        19:15  06/08";
    
  cout <<
    "\n16   2786.   JET AIRWAYS         JAIPUR     NEW DELHI     21:55  05/08";
    
  cout <<
    "\n17   6324.   INDIGO              KOLKATA    NEW DELHI     09:15  02/08";
    
  cout <<
    "\n18   5432.   SPICE JET           MUMBAI     NEW DELHI     23:50  09/08";
    
  cout <<
    "\n19   4675.   AIR INDIA           BENGALURU  CHENNAI       00:35  18/09";
    
  cout <<
    "\n20   4576.   AIR INDIA           CHENNAI    BENGALURU     12:30  19/09";
    
  cout <<
    "\n21   6938.   INDIGO              PUDUCHERRY MANGALORE     13:05  12/09";
    
  cout <<
    "\n22   6109.   INDIGO              MANGALORE  PUDUCHERRRY   03:25  16/09";
    
  cout <<
    "\n23   7456.   VISTARA             HYDERABAD  AMRITSAR      14:50  12/08";
    
  cout <<
    "\n24   4354.   AIR INDIA           NEW DELHI  SHIMLA        12:35  15/08";
    
  cout <<
    "\n25   2323.   JET AIRWAYS         SHIMLA     NEW DELHI     23:40  15/08";
    
  cout <<
    "\n26   2675.   JET AIRWAYS         MUMBAI     AMRITSAR      12:35  12/09";
    
  cout <<
    "\n27   5477.   SPICE JET           NEW DELHI  SRINAGAR      05:15  23/08";
    
  cout <<
    "\n28   4343.   AIR INDIA           SRINAGAR   NEW DELHI     00:55  30/09";
    
  cout <<
    "\n29   4487.   AIR INDIA           PATNA      RANCHI        23:45  23/09";
    
  cout <<
    "\n30   7222.   VISTARA             RANCHI     PATNA         11:25  14/10";
    
  cout <<
    "\n31   5254.   SPICE JET           BHOPAL     DEHRADUN      12:45  14/10";
    
  cout <<
    "\n32   5212.   SPICE JET           DEHRADUN   RANCHI        16:15  17/10";
    
  cout <<
    "\n33   6879.   INDIGO              RANCHI     DEHRADUN      21:30  20/09";
    
  cout <<
    "\n34   6546.   INDIGO              DEHRADUN   BHOPAL        22:35  30/09";
    
  cout << "\n";
  cout <<
    "\n35   1485.   VISERION            NEW DELHI  BANGALORE     00:00  25/07";
  cout << "\n              [EXCLUSIVE LUXURY ONE-ROUTE AIRLINE]";
  
  cout << "\n";
  cout <<
    "\n36   1485.   VISERION            BANGALORE  NEW DELHI     12:00  25/07";
  cout << "\n              [EXCLUSIVE LUXURY ONE-ROUTE AIRLINE]";//36 FLIGHTS
  
  cout << "\n";
  cout << "\n";
}


void flight::bookTicket ()   //renaming to better describe function. always try to name your functions and variables such that
{                            //anyone can read and understand what is being done
  int ch1;
  cout << "\nENTER PASSENGER'S FULL NAME:- ";
  gets (name);
  cout << "\n";
  cout << "\nEnter inquired details of selected flight below in BOLD letters.";
  cout << "\nEnter serial number:-";
  cin >> Sno;
  cout << "\nEnter Flight Number:- ";
  cin >> Fno;
  cout << "\nEnter flight name:- ";
  gets(flightname);
  cout << "\nEnter place of departure:- ";
  gets (departure);
  cout << "\nEnter place of arrival:- ";
  gets (destination);
  cout << "\nEnter Date of departure (Day.Month format):- ";
  cin >> date;
  cout << "\nEnter time of departure (Hours.Minutes format):- ";
  cin >> time;
  switch (Sno)  //better to use a switch here, as it is faster to evaluate than if-else conditions.
  {
      case 1:
      cout << "\nFLIGHT NUMBER H342 - JET AIRWAYS";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
  {
    seatCheck();       //you don't need to call this function with an object context. as we are already bound to f1 object at this point (through main)
  }
  else if (ch1 == 2)
  {
    displayMessage();  //try to break up repeating components of your code
                       //into blocks(or modules) which can be called again and again instead of retyping the code multiple times
  }
  break;

  case 2:

      cout << "\nFLIGHT NUMBER H435 - JET AIRWAYS";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
  }
    break;
  case 3:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 4:

      cout << "\nFLIGHT NUMBER G078 - AIR ASIA";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
      }
      break;
 case 5:

      cout << "\nFLIGHT NUMBER S534 - AIR INDIA";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
      }
      break;
  case 6:
      cout << "\nFLIGHT NUMBER S534 - AIR INDIA";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
      }
      break;
   case 7:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 8:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 9:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 10:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 11:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 12:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 13:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 14:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 15:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 16:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 17:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 18:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 19:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 20:
      cout << "\nFLIGHT NUMBER 4576 - AIR INDIA ";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 21:
        cout << "\nFLIGHT NUMBER 6938 - INDIGO ";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 22:
        cout << "\nFLIGHT NUMBER 6109 - INDIGO";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 23:
         cout << "\nFLIGHT NUMBER 7456 - VISTARA";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 24:
        cout << "\nFLIGHT NUMBER 4354 - AIR INDIA";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 25:
          cout << "\nFLIGHT NUMBER 2323 - JET AIRWAYS";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
    case 26:
          cout << "\nFLIGHT NUMBER 2675 - JET AIRWAYS ";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
    case 27:
         cout << "\nFLIGHT NUMBER 5477 - SPICE JET ";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
     case 28:
         cout << "\nFLIGHT NUMBER 4343 - AIR INDIA";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
    case 29:
       cout << "\nFLIGHT NUMBER 4487 - AIR INDIA";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
    case 30:
         cout << "\nFLIGHT NUMBER 7222 - VISTARA";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
    case 31:
         cout << "\nFLIGHT NUMBER 5254 - SPICE JET";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
    case 32:
         cout << "\nFLIGHT NUMBER 5212 - SPICE JET";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 33:
         cout << "\nFLIGHT NUMBER 6879 - INDIGO";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 34:
           cout << "\nFLIGHT NUMBER 6546 - INDIGO";
      cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 35:
        cout << "\n            Welcome To VISERION EXCLUSIVES, Where Your Heart Meets Satisfaction!";  cout<<"\n";
        cout << "\nFLIGHT NUMBER 1485 - VISERION (EXCLUSIVE)";
        cout << "\nThis flight package includes a complimentary stay at ";
        cout << "\nRADISSON BLU or SURYA PALACE in NEW DELHI.";
        cout << "\n------------    ------------                ";
        cout << "\n";
        cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
         cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;
   case 36:
         cout << "\n           Welcome To VISERION EXCLUSIVES, Where Your Heart Meets Satisfaction!";   cout<<"\n";
        cout << "\nFLIGHT NUMBER 1485 - VISERION (EXCLUSIVE)";
        cout << "\nThis flight package includes a complimentary stay at";
        cout << "\nTHE OBEROI  or SHERATON GRAND in BENGALURU.";
        cout << "\n-----------    --------------                ";
        cout << "\n";
        cout << "\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
         cin >> ch1;
      if (ch1 == 1)
      {
         seatCheck();
         }
      else if (ch1 == 2)
      {
        displayMessage();
        }
        break;


   default:

        cout <<"\nInvalid Entry, try again!\n";
 }
}




int main (){
int option;
do { cout << "\n";
system("cls");

  flight f1;  //using a more intutive name for object. if you have a second person trying to book flight, you can easily create more

  cout << '\a';
  cout << "\n                       WELCOME TO Labeeb's AVIATION SERVICE's,";
  cout << "\n                       AIRLINE / FLIGHT RESERVATION SYSTEM  ";
  cout << "\n                       -----------------------------------   ";
  cout << "\n                     MY NAME IS LABS, I'AM Labeeb's HELPER BOT.";
  cout << "\n                     GREETINGS TO YOU, VALUABLE CUSTOMER.";

  cout << "\n";

  
  cout << "\n";

  cout << "\nLabeeb's/All Rights Reserved.";
  cout << "\n";
  cout << "\nMAIN MENU";
  cout << "\nPLEASE CHOOSE YOUR REQUIRED OPERATION:- ";
  cout << "\n";
  cout << "\n1. VIEW SCHEDULE & BOOK TICKET ";
  cout << "\n2. PRINT BOARDING PASS";
  cout << "\n3. DELETE TICKET";
  cout << "\n4. TRENDING NEWS";
  cout << "\n5. EXIT" << endl;
  cout << "\nYOUR CHOICE (Enter one of these numbers 1/2/3/4/5):-";
  cin >> option;
  switch (option)
  {
    case 1:
      f1.viewSchedule();
      f1.bookTicket();

      break;
   
    case 2:
      f1.boardingPass();
      
       break;
      
    case 3:
       f1.deleteTicket();

       break;

    case 4:
      f1.trending();

       break;

    case 5:

      return 0;

    default:
      cout<< "\nInvalid Input!";

  }
  }while(option);

  getch ();
  }


