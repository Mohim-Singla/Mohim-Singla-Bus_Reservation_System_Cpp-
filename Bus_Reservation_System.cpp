#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>


using namespace std;
class Busdata{
public:
    int bus_number;
    string driver;
    string time;
    string starting;
    string ending;
    string reserved[10];
    int vacancy=10;

    Busdata()
    {
        for (int i=0;i<10;i++)
        {
            reserved[i]="0";
        }
    }
};

int main()
{
    cout<<"Enter your Choice: 1. Install Bus Information"<<endl<<"2. Reservation"<<endl<<"3. Show Reservation Information"<<endl<<"4. Buses Available"<<endl<<"0. EXIT"<<endl;
    int choice;
    cin>>choice;
    char busdata[10]={0};
    class Busdata b1;
    b1.bus_number=1001;
    b1.driver="Manoj Kumar";
    b1.time="10:00 A.M.";
    b1.starting="Chandigarh";
    b1.ending="Bathinda";
    busdata[0]='1';
    class Busdata b2;
    b2.bus_number=1002;
    b2.driver="Satish Kumar";
    b2.time="4:00 P.M.";
    b2.starting="Bathinda";
    b2.ending="Faridkot";
    busdata[1]='2';
    while (choice!=0)
    {
        switch (choice)
        {
        case 1:
            {
                cout<<"Available buses are: ";
                for (int i=0;i<2;i++)
                {
                    cout<<i+1<<". b"<<busdata[i]<<setw(5);
                }
                cout<<"\nEnter choice no.: ";
                int x;
                cin>>x;
                switch (x){
                case 1:
                    {
                        cout<<"--------------------------"<<endl;
                        cout<<"Unique Bus Id: B1 "<<b1.bus_number<<endl;
                        cout<<"Bus driver name :"<<b1.driver<<endl;
                        cout<<"Arrival time: "<<b1.time<<endl;
                        cout<<"Starting point: "<<b1.starting<<"     "<<"Ending point: "<<b1.ending<<endl;
                        cout<<"--------------------------"<<endl;
                        break;
                    }
                case 2:
                    {
                        cout<<"--------------------------"<<endl;
                        cout<<"Unique Bus Id: B2 "<<b2.bus_number<<endl;
                        cout<<"Bus driver name :"<<b2.driver<<endl;
                        cout<<"Arrival time: "<<b2.time<<endl;
                        cout<<"Starting point: "<<b2.starting<<"     "<<"Ending point: "<<b2.ending<<endl;
                        cout<<"--------------------------"<<endl;
                        break;
                    }
                default:
                    {
                        cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                        cout<<"Invalid Choice!!! Please TRY AGAIN."<<endl;
                        cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                    }
                }
            }
            cout<<"Enter your Choice: 1. Install Bus Information"<<endl<<"2. Reservation"<<endl<<"3. Show Reservation Information"<<endl<<"4. Buses Available"<<endl<<"0. EXIT"<<endl;
            cin>>choice;
            break;
        case 2:
            {

                cout<<"--------------------------"<<endl;
                cout<<"Reservation Portal"<<endl;
                cout<<"Available buses are: ";
                for (int i=0;i<2;i++)
                {
                    cout<<i+1<<". b"<<busdata[i]<<setw(5);
                }
                cout<<"     0. For Main Menu";
                cout<<"\nEnter choice no.: ";
                int x;
                cin>>x;
                while (x!=0)
                {
                    switch (x)
                    {
                    case 1:
                        {
                            if (b1.vacancy==0)
                            {
                                cout<<endl<<endl<<"All tickets already Reserved"<<endl;

                            }
                            else
                            {
                                cout<<"Number of tickets Available: "<<b1.vacancy<<endl;
                                cout<<"Enter Passenger name: ";
                                string passenger;
                                cin>>passenger;
                                b1.reserved[10-b1.vacancy]=passenger;
                                cout<<"Ticket Booked Successfully. Seat no.: "<<11-b1.vacancy<<endl;
                                b1.vacancy--;
                            }
                        }
                        cout<<"Available buses are: ";
                        for (int i=0;i<2;i++)
                        {
                            cout<<i+1<<". b"<<busdata[i]<<setw(5);
                        }
                        cout<<"     0. For Main Menu";
                        cout<<"\nEnter choice no.: ";
                        cin>>x;
                        break;
                    case 2:
                        {

                            if (b2.vacancy==0)
                            {
                                cout<<endl<<endl<<"All tickets already Reserved"<<endl;

                            }
                            else
                            {
                                cout<<"Number of tickets Available: "<<b2.vacancy<<endl;
                                cout<<"Enter Passenger name: ";
                                string passenger;
                                cin>>passenger;
                                b2.reserved[10-b2.vacancy]=passenger;
                                cout<<"Ticket Booked Successfully. Seat no.: "<<11-b2.vacancy<<endl;
                                b2.vacancy--;


                            }
                        }
                        cout<<"Available buses are: ";
                        for (int i=0;i<2;i++)
                        {
                            cout<<i+1<<". b"<<busdata[i]<<setw(5);
                        }
                        cout<<"     0. For Main Menu";
                        cout<<"\nEnter choice no.: ";
                        cin>>x;
                        break;

                    case 0:
                        {
                            x=0;
                            break;
                        }
                    default:
                        {
                            cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                            cout<<"Invalid Choice!!! Please TRY AGAIN."<<endl;
                            cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                        }

                    }
                }


            }
            cout<<"Enter your Choice: 1. Install Bus Information"<<endl<<"2. Reservation"<<endl<<"3. Show Reservation Information"<<endl<<"4. Buses Available"<<endl<<"0. EXIT"<<endl;
            cin>>choice;
            break;
        case 3:
            {
                cout<<"------------------------------"<<endl;
                cout<<"--Reservation INFO--"<<endl;
                cout<<"Available buses are: ";
                for (int i=0;i<2;i++)
                {
                    cout<<i+1<<". b"<<busdata[i]<<setw(5);
                }
                cout<<"     0. For Main Menu";
                cout<<"\nEnter choice no.: ";
                int y;
                cin>>y;
                switch(y)
                {
                case 1:
                    {
                        for (int i=0;i<10;i++)
                        {
                            if(b1.reserved[0]=="0")
                            {
                                cout<<"No Reservations done."<<endl;
                                break;
                            }
                            else if(b1.reserved[i]!="0")
                            {
                                cout<<i+1<<". "<<b1.reserved[i]<<endl;
                            }

                        }
                        break;
                    }
                case 2:
                    {
                        for (int i=0;i<10;i++)
                        {
                            if(b2.reserved[0]=="0")
                            {
                                cout<<"No Reservations done."<<endl;
                                break;
                            }
                            else if(b2.reserved[i]!="0")
                            {
                                cout<<i+1<<". "<<b2.reserved[i]<<endl;
                            }

                        }
                        break;
                    }
                case 0:
                    {
                        y=0;
                        break;
                    }
                default:
                    {
                        cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                        cout<<"Invalid Choice!!! Please TRY AGAIN."<<endl;
                        cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                    }
                    cout<<"\nEnter choice no.: ";
                    cin>>y;
                    break;
                }
            }
            cout<<"Enter your Choice: 1. Install Bus Information"<<endl<<"2. Reservation"<<endl<<"3. Show Reservation Information"<<endl<<"4. Buses Available"<<endl<<"0. EXIT"<<endl;
            cin>>choice;
            break;
        case 4:
            {

                cout<<"Available buses are: ";
                for (int i=0;i<2;i++)
                    {
                        cout<<i+1<<". b"<<busdata[i]<<setw(5);
                    }
                cout<<"     0. For Main Menu"<<endl;
                int z;
                cin>>z;
                switch(z)
                {
                case 0:
                    {
                        choice=0;
                        break;
                    }
                default:
                    {
                        cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                        cout<<"Invalid Choice!!! Please TRY AGAIN."<<endl;
                        cout<<"!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!"<<endl;
                    }
                }
                cout<<"Enter your Choice: 1. Install Bus Information"<<endl<<"2. Reservation"<<endl<<"3. Show Reservation Information"<<endl<<"4. Buses Available"<<endl<<"0. EXIT"<<endl;
                cin>>choice;
                break;

            }


        }
    }
    }




