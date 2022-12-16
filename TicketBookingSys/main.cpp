#include <iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

char ch;
string date;

class Bookticket
{
    public:
    string fname,lname,eml,ph,userName,pass,user1,pass1,fro,dest,tra1,tra2,gend,seat,age;
    float amt;

    void signUp()
    {
        cout<<endl;
        cout<<"\t\t\t --------------------------"<<endl;
        cout<<"\t\t\t | CREATE ACCOUNT/SIGN UP |"<<endl;
        cout<<"\t\t\t --------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t_________________________________________________"<<endl;
        cout<<endl;
        cout<<"\t\t\t ENTER FIRST NAME     : ";
        cin>>fname;
        cout<<endl;
        cout<<"\t\t\t ENTER LAST NAME      : ";
        cin>>lname;
        cout<<endl;
        cout<<"\t\t\t ENTER EMAIL ID       : ";
        cin>>eml;
        cout<<endl;
        cout<<"\t\t\t ENTER CONTACT NUMBER : ";
        cin>>ph;
        cout<<endl;
        cout<<"\t\t\t ENTER CURRENT DATE : ";
        cin>>date;
        cout<<endl;
        cout<<"\t\t\t CREATE USERNAME      : ";
        cin>>userName;
        cout<<endl;
        cout<<"\t\t\t CREATE PASSWORD      : ";
        cin>>pass;
        cout<<endl;
        cout<<"\t\t\t_________________________________________________"<<endl;
        system("cls");
    }

    void userLogin()
    {
        int choice,j;
        j=1;
        cout<<endl;
        cout<<"\t\t\t --------------"<<endl;
        cout<<"\t\t\t | USER LOGIN |"<<endl;
        cout<<"\t\t\t --------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t___________________________________________"<<endl;
        cout<<endl;
        cout<<"\t\t\t ENTER EMAIL ID       : ";
        cin>>eml;
        cout<<endl;
        cout<<"\t\t\t ENTER USERNAME       : ";
        cin>>user1;
        cout<<endl;
        cout<<"\t\t\t ENTER PASSWORD       : ";
        cin>>pass1;

        system("cls");
        SetConsoleCP(437);
        SetConsoleOutputCP(437);
        int bar1=177,bar2=219;

        cout<<"\n\n\n\t\t\t\tLOADING.....";
        cout<<"\n\n\n\t\t\t\t";
        for(int i=0;i<25;i++)
        cout<<(char)bar1;

        cout<<"\r";
        cout<<"\t\t\t\t";
        for(int i=0;i<25;i++)
        {
            cout<<(char)bar2;
            Sleep(50);
        }
        system("cls");
        if(user1==userName && pass1==pass)
        {
             cout<<"\t\tUSERNAME OR PASSWORD MATCH SUCCESSFULLY......"<<endl;
             cout<<endl;

             while(j)
             {
                 if(choice!=0)
                 {
                     cout<<endl;
                     cout<<"\t\t ========~:SELECTION CARD:~========"<<endl;
                     cout<<"\t\t|                                 |"<<endl;
                     cout<<"\t\t|        1) SEARCH BUSES          |"<<endl;
                     cout<<"\t\t|                                 |"<<endl;
                     cout<<"\t\t|        2) BOOK TICKET           |"<<endl;
                     cout<<"\t\t|                                 |"<<endl;
                     cout<<"\t\t|        0) EXIT/CLOSE            |"<<endl;
                     cout<<"\t\t|                                 |"<<endl;
                     cout<<"\t\t ----------------------------------"<<endl;
                     cout<<endl;
                 }
                 y:
                 cout<<"\t\tSELECT FROM CARD : ";
                 cin>>choice;
                 system("cls");
                 switch(choice)
                 {
                      case 1:
                      searchBus();
                      system("pause");
                      break;

                      case 2:
                      bookTick();
                      system("pause");
                      break;

                      case 0:
                      j=0;
                      break;

                      default:
                       cout<<"CHOOSE VALID INPUT FROM ABOVE CARD,TRY AGAIN..!"<<endl;
                       goto y;
                 }
             }

        }
        else
        {
            cout<<"INCORRECT USERNAME OR PASSWORD,TRY AGAIN..!"<<endl;
        }
        cout<<endl;
        //system("cls");
    }
    void searchBus()
    {

        cout<<endl;
        cout<<"\t\t\t ----------------"<<endl;
        cout<<"\t\t\t | SEARCH BUSES |"<<endl;
        cout<<"\t\t\t ----------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t_______________________________"<<endl;
        cout<<endl;
        cout<<"\t\t\tFROM        >> ";
        cin>>fro;
        cout<<endl;
        cout<<"\t\t\tDESTINATION << ";
        cin>>dest;
        cout<<endl;
        cout<<"\t\t\t_______________________________"<<endl;
        cout<<endl;
        system("cls");
        buses();
    }
    private:
    void buses()
    {
        cout<<endl;
        system("cls");
        SetConsoleCP(437);
        SetConsoleOutputCP(437);
        int bar1=177,bar2=219;

        cout<<"\n\n\n\t\t\t\tSEARCHING BUSES.....";
        cout<<"\n\n\n\t\t\t\t";
        for(int i=0;i<25;i++)
        cout<<(char)bar1;

        cout<<"\r";
        cout<<"\t\t\t\t";
        for(int i=0;i<25;i++)
        {
            cout<<(char)bar2;
            Sleep(80);
        }
        system("cls");
        if((fro=="NAGPUR" && dest=="MUMBAI")||(fro=="MUMBAI" && dest=="NAGPUR"))
        {
            cout<<endl;
            cout<<"\t\t\t"<<date<<endl;
            cout<<endl;
            cout<<"\t\t\tNAGPUR --------> MUMBAI"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tPURPLE BUS SERVICE\t23 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C . A/C SEATER/SLEEPER\tRATE\n\t\t\t                              1850 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t4:00 PM [17h 30m] 9:00 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tHANS TRAVELS\t        16 AVAILABEL SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tNON A/C SLEEPER\t\t        RATE\n\t\t\t                              1300 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t5:15 PM [18h 30m] 11:48 AM"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tSANJAY TRAVELS\t          13 AVAILABEL SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C SLEEPER\t\t\tRATE\n\t\t                                       2000 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t4:15 PM [17h 10m] 10:45 AM"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
        }
        else if((fro=="PUNE" && dest=="HYDERABAD")||(fro=="HYDERABAD" && dest=="PUNE"))
        {
            cout<<endl;
            cout<<"\t\t\t"<<date<<endl;
            cout<<endl;
            if(fro=="PUNE" && dest=="HYDERABAD")
            {
                cout<<"\t\t\tPUNE --------> HYDERABAD"<<endl;
            }
            else if(fro=="HYDERABAD" && dest=="PUNE")
            {
                cout<<"\t\t\tHYDERABAD --------> PUNE"<<endl;
            }
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tRAHUL TRAVELS\t         26 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C . A/C SEATER/SLEEPER\tRATE\n\t\t\t                              1050 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t12:25 AM [8h 35m] 9:00 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tBEST EXPRESS\t         17 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C SEATER/SLEEPER\t\tRATE\n\t\t\t                              893 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t1:30 AM [8h 35m] 9:30 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tSHRI SAI GANESH TRAVELS\t  24 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C SEATER/SLEEPER\t        RATE\n\t\t\t                              1240 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t5:00 PM [11h 10m] 4:00 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
        }
        else if((fro=="NAGPUR" && dest=="SHIRDI")||(fro=="SHIRDI" && dest=="NAGPUR"))
        {
            cout<<endl;
            cout<<"\t\t\t"<<date<<endl;
            cout<<endl;
            if(fro=="NAGPUR" && dest=="SHIRDI")
            {
                cout<<"\t\t\tNAGPUR --------> SHIRDI"<<endl;
            }
            else if(fro=="SHIRDI" && dest=="NAGPUR")
            {
                cout<<"\t\t\tSHIRDI --------> NAGPUR"<<endl;
            }
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tBTP BUSES\t         18 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C SLEEPER\t                RATE\n\t\t\t                              800 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t06:00 PM [13h 5m] 7:00 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tPRASANNA PURPLE GRAND\t 11 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C SEATER/SLEEPER\t\tRATE\n\t\t\t                              1020 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t06:45 PM [13h 20m] 7:45 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
            cout<<"\t\t\tSHRI SAI GANESH TRAVELS\t  24 AVAILABLE SEATS"<<endl;
            cout<<endl;
            cout<<"\t\t\tA/C SEATER/SLEEPER\t        RATE\n\t\t\t                              1240 Rs/-"<<endl;
            cout<<endl;
            cout<<"\t\t\t5:00 PM [11h 10m] 4:00 AM"<<endl;
            cout<<"\t\t\t-------------------------------------------"<<endl;
        }
        else
        {
             cout<<"\t\t\tENTER VALID INPUT,TRY AGAIN...!"<<endl;
        }
    }
    public:
    void bookTick()
    {
        string selBus;
        cout<<endl;
        cout<<"\t\t\t ----------------"<<endl;
        cout<<"\t\t\t | BOOK TICKET |"<<endl;
        cout<<"\t\t\t ----------------"<<endl;
        cout<<endl;
        cout<<"\t\tSELECT BUS : ";
        cin>>selBus;

        if((fro=="NAGPUR" && dest=="MUMBAI")||(fro=="MUMBAI" && dest=="NAGPUR"))
        {
             if(selBus=="PURPLE")
            {
                cout<<endl;
                cout<<"\t\t23 AVAILABLE SEATS"<<endl;
                cout<<endl;
                cout<<"\t\tRATE\n\t        1850 Rs/-"<<endl;
                cout<<endl;
                cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                cout<<endl;
                cout<<"\t\t--------------------------------------"<<endl;
                cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                cout<<endl;
                cout<<"\t\tSELECT YOUR SEAT  : ";
                cin>>seat;
                cout<<endl;
            }
            else if(selBus=="HANS")
            {
                cout<<endl;
                cout<<"\t\t16 AVAILABLE SEATS"<<endl;
                cout<<endl;
                cout<<"\t\tRATE\n\t        1300 Rs/-"<<endl;
                cout<<endl;
                cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                cout<<endl;
                cout<<"\t\t--------------------------------------"<<endl;
                cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                cout<<endl;
                cout<<"\t\tSELECT YOUR SEAT  : ";
                cin>>seat;
                cout<<endl;
            }
            else if(selBus=="SANJAY")
            {
                cout<<endl;
                cout<<"\t\t13 AVAILABLE SEATS"<<endl;
                cout<<endl;
                cout<<"\t\tRATE\n\t        2000 Rs/-"<<endl;
                cout<<endl;
                cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                cout<<endl;
                cout<<"\t\t--------------------------------------"<<endl;
                cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                cout<<endl;
                cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                cout<<endl;
                cout<<"\t\tSELECT YOUR SEAT  : ";
                cin>>seat;
                cout<<endl;
            }
            else
            {
                      cout<<endl;
                       cout<<"\t\tPLEASE,SELECT BUS FROM ABOVE LIST...!"<<endl;
            }
        }
           else if((fro=="PUNE" && dest=="HYDERABAD")||(fro=="HYDERABAD" && dest=="PUNE"))
           {
                if(selBus=="RAHUL")
                {
                    cout<<endl;
                    cout<<"\t\t23 AVAILABLE SEATS"<<endl;
                    cout<<endl;
                    cout<<"\t\tRATE\n\t        1050 Rs/-"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                    cout<<endl;
                    cout<<"\t\t--------------------------------------"<<endl;
                    cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT YOUR SEAT  : ";
                    cin>>seat;
                    cout<<endl;
                }
                else if(selBus=="BEST")
                {
                    cout<<endl;
                    cout<<"\t\t16 AVAILABLE SEATS"<<endl;
                    cout<<endl;
                    cout<<"\t\tRATE\n\t        893 Rs/-"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                    cout<<endl;
                    cout<<"\t\t--------------------------------------"<<endl;
                    cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT YOUR SEAT  : ";
                    cin>>seat;
                    cout<<endl;
                }
                else if(selBus=="SHRI")
                {
                    cout<<endl;
                    cout<<"\t\t13 AVAILABLE SEATS"<<endl;
                    cout<<endl;
                    cout<<"\t\tRATE\n\t        1240 Rs/-"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                    cout<<endl;
                    cout<<"\t\t--------------------------------------"<<endl;
                    cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT YOUR SEAT  : ";
                    cin>>seat;
                    cout<<endl;
                }
                else
                {
                       cout<<endl;
                       cout<<"\t\tPLEASE,SELECT BUS FROM ABOVE LIST...!"<<endl;
                }
           }
          else if((fro=="NAGPUR" && dest=="SHIRDI")||(fro=="SHIRDI" && dest=="NAGPUR"))
          {
               if(selBus=="BTP")
                {
                    cout<<endl;
                    cout<<"\t\t23 AVAILABLE SEATS"<<endl;
                    cout<<endl;
                    cout<<"\t\tRATE\n\t        800 Rs/-"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                    cout<<endl;
                    cout<<"\t\t--------------------------------------"<<endl;
                    cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT YOUR SEAT  : ";
                    cin>>seat;
                    cout<<endl;
                }
                else if(selBus=="PRASANNA")
                {
                    cout<<endl;
                    cout<<"\t\t16 AVAILABLE SEATS"<<endl;
                    cout<<endl;
                    cout<<"\t\tRATE\n\t        1020 Rs/-"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                    cout<<endl;
                    cout<<"\t\t--------------------------------------"<<endl;
                    cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT YOUR SEAT  : ";
                    cin>>seat;
                    cout<<endl;
                }
                else if(selBus=="SHRI")
                {
                    cout<<endl;
                    cout<<"\t\t13 AVAILABLE SEATS"<<endl;
                    cout<<endl;
                    cout<<"\t\tRATE\n\t        1240 Rs/-"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT SEAT FROM BELOW"<<endl;
                    cout<<endl;
                    cout<<"\t\t--------------------------------------"<<endl;
                    cout<<"\t\t| A1 |\t| A2 |\t| A3 |\t| A4 |\t| A5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| B1 |\t| B2 |\t| B3 |\t| B4 |\t| B5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| C1 |\t| C2 |\t| C3 |\t| C4 |\t| C5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\t| D1 |\t| D2 |\t| D3 |\t| D4 |\t| D5 |"<<endl;
                    cout<<endl;
                    cout<<"\t\tSELECT YOUR SEAT  : ";
                    cin>>seat;
                    cout<<endl;
                }
                  else
                {
                    cout<<endl;
                    cout<<"\t\tPLEASE,SELECT BUS FROM ABOVE LIST...!"<<endl;
                }
          }
        }
        void addDet()
        {
            cout<<endl;
            cout<<"\t\t\t -------------------------"<<endl;
            cout<<"\t\t\t | ADD TRAVELLER DETAILS |"<<endl;
            cout<<"\t\t\t -------------------------"<<endl;
            cout<<endl;
            cout<<"\t\t___________________________________________"<<endl;
            cout<<endl;
            cout<<"\t\tFIRST NAME : ";
            cin>>tra1;
            cout<<endl;
            cout<<"\t\tLAST NAME  : ";
            cin>>tra2;
            cout<<endl;
            cout<<"\t\tENTER AGE  : ";
            cin>>age;
            cout<<endl;
            cout<<"\t\tGENDER     : ";
            cin>>gend;
            cout<<endl;
            cout<<"\t\t___________________________________________"<<endl;
            cout<<endl;
            //system("cls");
            SetConsoleCP(437);
            SetConsoleOutputCP(437);
            int bar1=177,bar2=219;

            cout<<"\n\n\n\t\t\t\tSAVING DETAILS.....";
            cout<<"\n\n\n\t\t\t\t";
            for(int i=0;i<25;i++)
            cout<<(char)bar1;

            cout<<"\r";
            cout<<"\t\t\t\t";
            for(int i=0;i<25;i++)
            {
                cout<<(char)bar2;
                Sleep(80);
            }
            system("cls");
            payment();
        }
        void payment()
        {
            int upi;
            cout<<endl;
            cout<<"\t\t\t ------------"<<endl;
            cout<<"\t\t\t | PAYMENT |"<<endl;
            cout<<"\t\t\t ------------"<<endl;
            cout<<endl;
            cout<<"\t\tENTER UPI ID : ";
            cin>>upi;
            cout<<endl;
            if(upi>4)
            {
                cout<<endl;
                cout<<"PLEASE ENTER VALID UPI ID..!"<<endl;
            }
            cout<<endl;
            system("cls");
            SetConsoleCP(437);
            SetConsoleOutputCP(437);
            int bar1=177,bar2=219;

            cout<<"\n\n\n\t\t\t\tLOADING PAYMENT DETAILS.....";
            cout<<"\n\n\n\t\t\t\t";
            for(int i=0;i<25;i++)
            cout<<(char)bar1;

            cout<<"\r";
            cout<<"\t\t\t\t";
            for(int i=0;i<25;i++)
            {
                cout<<(char)bar2;
                Sleep(80);
            }
            system("cls");
            cout<<endl;
            cout<<"\t\tENTER AMOUNT TO BE PAID : ";
            cin>>amt;
            cout<<endl;
             system("cls");
            SetConsoleCP(437);
            SetConsoleOutputCP(437);
             bar1=177,bar2=219;

            cout<<"\n\n\n\t\t\t\t PAYMENT SUCCESSFULL..!";
            cout<<"\n\n\n\t\t\t\t";
            for(int i=0;i<25;i++)
            cout<<(char)bar1;

            cout<<"\r";
            cout<<"\t\t\t\t";
            for(int i=0;i<25;i++)
            {
                cout<<(char)bar2;
                Sleep(80);
            }
             system("cls");
            cout<<endl;
            cout<<"\t\t\t\t    CONGRATULATIONS :)..."<<endl;
            cout<<"\t\tYOUR BUS JOURNEY FROM "<<fro<<" TO "<<dest<<" ON "<<date<<" IS SUCCESSFULY BOOKED...!"<<endl;

        }

        void showTicket()
        {
              cout<<"\t\t\t\t       : BOOKING STATUS :"<<endl;
              cout<<endl;
              cout<<"\t\t\t\t"<<fro<<"\t------>"<<"\t"<<dest<<endl;
              cout<<endl;
              cout<<"\t\t\t\t "<<date<<endl;
              cout<<endl;
              cout<<"\t\t\t\t--------------------------------------------------"<<endl;
              cout<<"\t\t\t\tTICKET NUMBER\t\tXALM3308620002"<<endl;
              cout<<endl;
              cout<<"\t\t\t\tTRIP ID\t\t\tIXIBS1433729614"<<endl;
              cout<<endl;
              cout<<"\t\t\t\tSEAT\t\t\t"<<seat<<endl;
              cout<<endl;
              cout<<"\t\t\t\t--------------------------------------------------"<<endl;
              cout<<"\t\t\t\t           DOWNLOAD E-TICKET...."<<endl;
              cout<<endl;
              system("pause");
            SetConsoleCP(437);
            SetConsoleOutputCP(437);
             int bar1=177,bar2=219;

            cout<<"\n\n\n\t\t\t\t DOWNLOADING TICKET...";
            cout<<"\n\n\n\t\t\t\t";
            for(int i=0;i<25;i++)
            cout<<(char)bar1;

            cout<<"\r";
            cout<<"\t\t\t\t";
            for(int i=0;i<25;i++)
            {
                cout<<(char)bar2;
                Sleep(50);
            }
             system("cls");
             cout<<"\t\t\t\t ------------------------------------------------------------------------"<<endl;
             cout<<endl;
             cout<<"\t\t\t\t                "<<fro<<" TO "<<dest<<" "<<date<<endl;
             cout<<endl;
             cout<<"\t\t\t\t ------------------------------------------------------------------------"<<endl;
             cout<<"\t\t\t\t         BOARDING POIINT\t\t\tDROPPING POINT"<<endl;
             cout<<"\t\t\t\t           "<<fro<<"\t\t\t\t     "<<dest<<endl;
             cout<<"\t\t\t\t               ^___________________________________^"<<endl;
             cout<<endl;
             cout<<"\t\t\t\t           BOARDING TIME : "<<date<<" 4:10 PM"<<endl;
             cout<<endl;
             cout<<"\t\t\t\t           TRAVELLER   ->  "<<tra1<<" "<<tra2<<endl;
             cout<<endl;
             cout<<"\t\t\t\t           AGE         -> "<<age<<endl;
             cout<<endl;
             cout<<"\t\t\t\t           SEAT NO     -> "<<seat<<endl;
             cout<<endl;
             cout<<"\t\t\t\t           TICKET PRICE  -> "<<amt<<" Rs/-"<<endl;
             cout<<endl;
             cout<<"\t\t\t\t                           HAPPY JOURNEY...!"<<endl;
             cout<<"\t\t\t\t ------------------------------------------------------------------------"<<endl;
            system("pause");
        }
};

int main()
{
    system("color 5f");
    Bookticket t1;
    int select,i;
    i=1;
    cout<<"\n\t\t     \xB3\xB2=\xB2=\xB2-\xB3 TICKET BOOKING APP \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<endl;
    cout<<"\t\t=============~::SELECTION CARD::~============="<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t|         1) CREATE ACCOUNT/SIGN UP          | "<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t|         2) USER LOGIN                      |"<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t|         3) ADD TRAVELLER DETAILS           |"<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t|         4) DOWNLOAD TICKET                 |"<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t|         5) CANCEL TICKET                   |"<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t|         0) EXIT/CLOSE                      |"<<endl;
    cout<<"\t\t|                                            |"<<endl;
    cout<<"\t\t ============================================"<<endl;
    cout<<endl;

    while(i)
    {
        if(select!=0)
        {
                cout<<endl;
                cout<<"\t\t=============~::SELECTION CARD::~============="<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t|         1) CREATE ACCOUNT/SIGN UP          | "<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t|         2) USER LOGIN                      |"<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t|         3) ADD TRAVELLER DETAILS           |"<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t|         4) DOWNLOAD  TICKET                |"<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t|         5) CANCEL TICKET                   |"<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t|         0) EXIT/CLOSE                      |"<<endl;
                cout<<"\t\t|                                            |"<<endl;
                cout<<"\t\t ============================================"<<endl;
                cout<<endl;

        }
        cout<<"\t\tSELECT OPERATION YOU PERFORM : ";
        cin>>select;
        system("cls");
        SetConsoleCP(437);
        SetConsoleOutputCP(437);
        int bar1=177,bar2=219;

        cout<<"\n\n\n\t\t\t\tLOADING.....";
        cout<<"\n\n\n\t\t\t\t";
        for(int i=0;i<25;i++)
        cout<<(char)bar1;

        cout<<"\r";
        cout<<"\t\t\t\t";
        for(int i=0;i<25;i++)
        {
            cout<<(char)bar2;
            Sleep(50);
        }
        system("cls");

        switch(select)
        {
             case 1:
             t1.signUp();
             break;

             case 2:
             t1.userLogin();
             break;

             case 3:
             t1.addDet();
             break;

             case 4:
             t1.showTicket();
             break;

             case 0:
             cout<<endl;
             cout<<"\t\t~~~~~~~~~~~~~THANK YOU FOR USING OUR APPLICATION..,VISIT AGAIN~~~~~~~~~~~~~"<<endl;
             i=0;
             break;

             default:
             cout<<"SELECT VALID OPERATION FROM SELECTION CARD..!"<<endl;
        }
    }

    getch();
    return 0;
}
