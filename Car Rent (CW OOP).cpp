 // object oriented programming course work 2
 // Index number - CODSE202F-051
//Name - T.M.L.M.WEERASINGHE

#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include<unistd.h>      //for hold some thing for few second on display
#include <ctime>        //for current date and time
using namespace std;

class MainInterface    //welcome class  this class use for some visual effect things like "Starting the program please wait....."
{
	public:
	void Welcome()
	{
   ifstream in;
   in.open("welcome.txt");
     if(!in)
    {
    cout << "Cannot open input file.\n";
    }
  char start[1000];
  while(in) {
    in.getline(start, 1000);
    if(in) cout << start << endl;
  }
  in.close();
   sleep(1);                                                    // 1 second wait
  cout<<"\n\t\t\tStarting the program please wait....."<<endl; //this is for some visual effects
 sleep(1);
  cout<<"\n\t\t\tloading up files....."<<endl;
 sleep(1);
  system ("CLS");                                 //clear screen
}
};

class Customer
{
	protected:
    string customer_name;
    string Identy_card_no;
    string car_model;
    string car_number;

    time_t now=time(0);    //to get date and time at running time
    char *DT=ctime(&now);   //to get date and time at running time

	public:
     void getCustomerDetails()
     {
      cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
      cout<<"\t\t\t\t\t------------------------------"<<endl;
      cout<<"\t\t\t\t\t     WELCOME TO KANDY CARS     "<<endl;
      cout<<"\t\t\t\t\t------------------------------\n\n"<<endl;


	  cout << "\t\t\t\tPlease Enter Customer Name: ";
      cin >> customer_name;
      cout << "\t\t\t\tPlease Enter Identy card Number : ";
      cin>>Identy_card_no;
     }
};

class Rent : public Customer   // inherite class from customer class
{
    public:
	int days=0;
	int rental_fee=0;

	void availableCarDetails()

	{

        do{
        cout<<"                                           "<<endl;
        cout << "\t\t\t\t   WelCome Mr/Mrs :-  "<<customer_name<<endl;
        cout<<"                                           "<<endl;
        cout <<"\t\t\t\t*********PLEASE SELECT CAR************"<<endl;
        cout<<"                                           "<<endl;
        cout<<"\t\t\t\t*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/**"<<endl;
        cout<<"                                           "<<endl;
        cout<<" \t\t\t\t Enter               FOR                  "<<endl;
        cout<<"                                           "<<endl;
        cout<<"\t\t\t\t  A :-          Tesla Model S       2011"<<endl;
        cout<<"\t\t\t\t  B :-          HONDA CIVIC         2015"<<endl;
        cout<<"\t\t\t\t  C :-          Ford Mustang        2017"<<endl;
        cout<<"\t\t\t\t  D :-          BMW sedan           2017"<<endl;
        cout<<"\t\t\t\t  E :-          BMW X5 SUV LUXARY.  2021"<<endl;
        cout<<"\t\t\t\t  F :-          BMW series 3        2020"<<endl;
        cout<<"\t\t\t\t  G :-          TOYOTA PRADO SUV    2019"<<endl;
        cout<<"\t\t\t\t  H :-          TOYOTA PRIUS        2020"<<endl;
        cout<<"\t\t\t\t  I :-          BENZ MAYBACH LUXARY 2021"<<endl;

        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>car_model;
        cout<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;


         if(car_model=="A")
         {
 	              system("CLS");

		          cout<<"You have choosed Tesla Model S 2011"<<endl;
		          ifstream A("A.txt");                                              //displaying details of model A
                  char str[200];

                             while(A)
                            {
                                 A.getline(str, 200);
                                  if(A) cout << str << endl;
                            }

          }


           if(car_model=="B")
            {
  	          system("CLS");

		      cout<<"You have choosed Honda CIVIC 2015"<<endl;
		      ifstream inB("B.txt");                                                //displaying details of model B
              char str[200];
              while(inB)
                    {
                    inB.getline(str, 200);
                    if(inB) cout << str << endl;

                    }

           }


        if(car_model=="C")
        {
 	     system("CLS");
	     cout<<"You have choosed Ford Mustang 2017"<<endl;
		 ifstream inC("C.txt");                                                     //displaying details of model C
         char str[200];

         while(inC)
            {
              inC.getline(str, 200);
               if(inC) cout << str << endl;
             }


        }
         if(car_model=="D")
            {
  	          system("CLS");

		      cout<<"You have choosed BMW Sedan 2017"<<endl;
		      ifstream inD("D.txt");                                                //displaying details of model D
              char str[200];
              while(inD)
                    {
                    inD.getline(str, 200);
                    if(inD) cout << str << endl;

                    }

           }
            if(car_model=="E")
            {
  	          system("CLS");

		      cout<<"You have choosed BMW X5 Luxary SUV 2021"<<endl;
		      ifstream inE("E.txt");                                                 //displaying details of model E
              char str[200];
              while(inE)
                    {
                    inE.getline(str, 200);
                    if(inE) cout << str << endl;

                    }

           }
            if(car_model=="F")
            {
  	          system("CLS");

		      cout<<"You have choosed BMW series 3 2020"<<endl;
		      ifstream inF("F.txt");                                              //displaying details of model F
              char str[200];
              while(inF)
                    {
                    inF.getline(str, 200);
                    if(inF) cout << str << endl;

                    }
           }
            if(car_model=="G")
            {
  	          system("CLS");

		      cout<<"You have choosed TOYOTA Prado SUV 2019"<<endl;
		      ifstream inG("G.txt");                                            //displaying details of model G
              char str[200];
              while(inG)
                    {
                    inG.getline(str, 200);
                    if(inG) cout << str << endl;

                    }
           }
            if(car_model=="H")
            {
  	          system("CLS");

		      cout<<"You have choosed TOYOTA PRIUS 2020"<<endl;
		      ifstream inH("H.txt");                                           //displaying details of model H
              char str[200];
              while(inH)
                    {
                    inH.getline(str, 200);
                    if(inH) cout << str << endl;

                    }

           }
           if(car_model=="I")
            {
  	          system("CLS");

		      cout<<"You have choosed BENZ MAYBACH LUXARY 2021"<<endl;
		      ifstream inI("I.txt");                                            //displaying details of model I
              char str[200];
              while(inI)
                    {
                    inI.getline(str, 200);
                    if(inI) cout << str << endl;

                    }

           }


     if(car_model !="A" && car_model !="B" &&  car_model !="C" && car_model !="D" && car_model !="E" && car_model !="F" && car_model !="G" && car_model !="H" && car_model !="I" )
     cout<<"Invaild Car Model. Please try again!"<<endl;
        }

      while(car_model !="A" && car_model !="B" &&  car_model !="C"  && car_model !="D" && car_model !="E" && car_model !="F" && car_model !="G" && car_model !="H" && car_model !="I" );
      cout<<"--------------------------------------------------------------------------"<<endl;
      cout << "Please provide following information: "<<endl;
       cout<<"__________________________________________"<<endl;
      cout<<"Please select a Car No. : ";
      cin >> car_number;
      cout<<"__________________________________________"<<endl;
      cout<<"Number of days you wish to rent the car : ";
      cin >> days;
      cout<<endl;
	}

	void calculateAndShowBill(int A_Price,int B_Price,int C_Price,int D_Price,int E_Price,int F_Price,int G_Price,int H_Price,int I_Price)
	{

		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;

		if(car_model == "A"||car_model=="a")
        rental_fee=days*A_Price;
        if(car_model == "B" ||car_model=="b")
        rental_fee=days*B_Price;
        if(car_model == "C" ||car_model=="c")
        rental_fee=days*C_Price;
        if(car_model == "D" ||car_model=="d")
        rental_fee=days*D_Price;
        if(car_model == "E" ||car_model=="e")
        rental_fee=days*E_Price;
        if(car_model == "F" ||car_model=="f")
        rental_fee=days*F_Price;
        if(car_model == "G" ||car_model=="g")
        rental_fee=days*G_Price;
        if(car_model == "H" ||car_model=="h")
        rental_fee=days*H_Price;
        if(car_model == "I" ||car_model=="i")
        rental_fee=days*I_Price;
    }

    void calculateAndShowBill(float tax,float Caution_Money,float advanc)                                            // used polymophism is funtion overloading
    {


    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#KanC5561"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
    cout << "\t\t	| Customer Id Card No:"<<"-----------|"<<setw(10)<<Identy_card_no<<" |"<<endl;
    cout << "\t\t	| Car Catogary :"<<"-----------------|"<<setw(10)<<car_model<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<car_number<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rental_fee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<Caution_Money<<" |"<<endl;
    cout << "\t\t \t| Advanced      :"<<"----------------|"<<setw(10)<< advanc<<"|"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rental_fee+Caution_Money+tax-advanc<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	 # This is a computer generated invooice and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	.........................................................."<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	.........................................................."<<endl;
    //int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thanks.txt");

  char str[300];                                                           //thank you display variable

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
	void WriteData()
	{

	    fstream x;
	    x.open("Rented_Car.txt",ios::app);
	    x<<setw(5)<<"Customer Name-"<<customer_name<<setw(5)<<"      Rented Car -"<<car_model<<setw(5)<<"     Car Number-"<<car_number<<setw(5)<<"     Booked Days -"<<days<<"     Date and Time  "<<DT<<endl;
	    x.close();

	}
};

int main()
{
    char again ='Y';
    while(again=='Y'||again=='y')                                     // this while loop for repeat program at the begining
    {

         MainInterface W;                                            //object created for WelcomeInterface class
         W.Welcome();

         Rent Car;                                                    //object created for rent class and further member functions are called
         Car.getCustomerDetails();
         Car.availableCarDetails();
         Car.calculateAndShowBill(100,200,300,400,500,600,700,800,900);
         Car.calculateAndShowBill(200,5000,1500);
         Car.WriteData();

         cout<<"          For another Order Press (Y)    To End the Program Press (N) ";
         cin>>again;
    }

return 0;
}
