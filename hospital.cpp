#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Doctor1
{
int id;
char name[20],Q[20],age[20],exp[20],city[20],special[20];
};
struct Patient1
{
int id1;
char name[20],age[20],city[20],dis[20],room[20],sym[20],con[20],date[20],charg[20],bill[20];
};

class Doctor;
class Patient;
class Hospital
{
public:
int counter=0;
};

class Doctor:public Hospital
{
public:
int docid=0;
struct Doctor1 arr[10];
void add_doc_info()
{
int i,en;
cout<<"How Many Entries you want to add :";
cin>>en;
for(i=1;i<=en;i++)
{
cout<<"\nEnter Doctor's ID :";
cin>>arr[docid].id;
cout<<"Enter Doctor's Name :";
cin>>arr[docid].name;
cout<<"Enter Doctor's Age :";
cin>>arr[docid].age;
cout<<"Enter Doctor's Qualification :";
cin>>arr[docid].Q;
cout<<"Enter Doctor's Specialization :";
cin>>arr[docid].special;
cout<<"Enter Doctor's Experience :";
cin>>arr[docid].exp;
cout<<"Enter Doctor's city :";
cin>>arr[docid].city;
docid++;
counter++;
cout<<"\n";
cout<<"You filled all the entries of Doctor "<<i<<" successfully"<<"\n";
cout<<"\nEnter value for Doctor "<<i+1<<"\n";
}
}
void Display()
{
system("cls");
int n,i;
cout<<"\n Enter the Doctor's ID to display Record :";
cin>>n;
if(n==0)
{
cout<<"\n\n OOPS!!!! "<<"\n\n";
cout<<"Note:- No Record To Display Plz Go Back And Enter Some Entries…… "<<"\n";
}
else
{
int status=0;
for(i=0;i<docid;i++)
{
if(arr[i].id==n)
{
status=1;
break;
}
}
if(status)
{
cout<<"\n\n";
cout<<"1.Doctor's ID :"<<arr[i].id<<"\n";
cout<<"2.Doctor's Name :"<<arr[i].name<<"\n";
cout<<"3.Doctor's Age :"<<arr[i].age<<"\n";
cout<<"4.Doctor's Qualification :"<<arr[i].Q<<"\n";
cout<<"5.Doctor's Specialization :"<<arr[i].special<<"\n";
cout<<"6.Doctor's Experience :"<<arr[i].exp<<"\n";
cout<<"8.Doctor's city :"<<arr[i].city<<"\n";
cout<<"\n Press Any KEY To choose another Option…. ";
}
else
{
cout<<"\n\n No such ID in database "<<endl;
cout<<"\n Press Any KEY To choose another Option…. ";
}
}
getch();
}

 

void Doctor_detail()
{
int i;
if(docid==0)
{
cout<<"\n\n\n OOPS!!!! "<<"\n\n";
cout<<"Note:- No Record To Display Plz Go Back And Enter Some Entries…… "<<"\n";
}
else{
cout<<"********************************************************************************"<<"\n";
cout<<"\t \t \t Details Of All The Doctors In The Hospital \n";
cout<<"********************************************************************************"<<"\n \n";

cout<<"ID"<<"\t\t"<<"Name"<<"\t\t"<<"Specialization"<<"\t\t"<<"Qualification"<<"\t\t"<<"Age";
cout<<"\n \n";

for(i=0;i<docid;i++)
{
cout<<arr[i].id<<"\t\t"<<arr[i].name<<"\t\t"<<arr[i].special<<"\t \t \t"<<arr[i].Q<<"\t \t \t"<<arr[i].age<<"\n";
}
cout<<"\n Press Any Button To choose another Option…. ";
}
getch();
}
void tot_no_of_doc()
{
system("cls");
int i=counter;
cout<<"Total Doctor's in Hospital : "<<i<<"\n";
cout<<"\n Press Any Button To choose another Option..... ";
getch();
}
};

class Patient:public Hospital
{
public:
int docid1=0;
struct Patient1 arr[10];
void add_pat_info();
void Display();
void Patient_report();
void Patient_detail();
void tot_no_of_pat();
void gen_pat_report();
};

void Patient :: add_pat_info()
{
int i,en;
cout<<"How Many Entries you want to add :";
cin>>en;
for(i=1;i<=en;i++)
{
cout<<"1.Enter Patient's ID :";
cin>>arr[docid1].id1;
cout<<"2. Enter Patient's Name :";
cin>>arr[docid1].name;
cout<<"3. Enter Patient's Age :";
cin>>arr[docid1].age;
cout<<"4. Enter Patient's Disease :";
cin>>arr[docid1].dis;
cout<<"5. Enter Patient's Symptoms :";
cin>>arr[docid1].sym;
cout<<"6. Enter Patient's Room No. :";
cin>>arr[docid1].room;
cout<<"7. Enter Patient's condition Before Admit :";
cin>>arr[docid1].con;
cout<<"8. Enter Patient's ADMIT Date :";
cin>>arr[docid1].date;
cout<<"9. Enter Patient's Room Charge :";
cin>>arr[docid1].charg;
cout<<"10. Enter Patient's Medicine charge :";
cin>>arr[docid1].bill;
docid1++;
counter++;
cout<<"\n";
cout<<"You filled all the entries Patient "<<i<<" successfully"<<"\n";
cout<<"\nEnter value for Patient "<<i+1<<"\n\n";
}
}

void Patient :: Display()
{
system("cls");
int n,i;
cout<<"\n Enter the Patient's ID to display info :";
cin>>n;
if(n==0)
{
cout<<"\n\n OOPS!!!! "<<"\n \n";
cout<<"Note:- No Record To Display Plz Go Back And Enter Some Entries…… "<<"\n";
cout<<"\n Press Any KEY To choose another Option..... ";
}
else
{
int status=0;
for(i=0;i<docid1;i++)
{
if(arr[i].id1==n)
{
status=1;
break;
}
}
if(status==1)
{
cout<<"1.Patient's ID :"<<arr[i].id1<<"\n";
cout<<"2.Patient's Name :"<<arr[i].name<<"\n";
cout<<"3.Patient's Age :"<<arr[i].age<<"\n";
cout<<"4.Patient's Disease :"<<arr[i].dis<<"\n";
cout<<"5.Patient's Symptoms :"<<arr[i].sym<<"\n";
cout<<"6.Patient's Room No. :"<<arr[i].room<<"\n";
cout<<"7.Patient's condition Before Admit :"<<arr[i].con<<"\n";
cout<<"8.Patient's ADMIT Date :"<<arr[i].date<<"\n";
cout<<"9.Patient's Room Charge :"<<arr[i].charg<<"\n";
cout<<"10.Patient's Medicine charge :"<<arr[i].bill<<"\n";
cout<<"\n Press Any KEY To choose another Option…. ";
}
else{
cout<<"\n\n No such ID in database "<<endl;
cout<<"\n Press Any KEY To choose another Option…. ";
}
}
getch();
}

void Patient :: Patient_report()
{
system("cls");
int i,n;
cout<<"\n Enter the Patient's ID to Display Report :";
cin>>n;
int status=0;
for(i=0;i<docid1;i++)
{
if(arr[i].id1==n)
{
status=1;
break;
}
}
if(status)
{
cout<<"\n\n *** Patient's Report *** "<<"\n \n";
cout<< "1. Patient's Name "<<arr[i].name<<"\n";
cout<< "2. Patient's Age "<<arr[i].age<<"\n";
cout<< "3. Patient symptoms "<<arr[i].sym<<"\n";
cout<< "4. Patient Disease "<<arr[i].dis<<"\n";
cout<< "5. Patient Admit Date "<<arr[i].date<<"\n";
cout<< "6. Patient condition At The Time Of Discharge "<<arr[i].con<<"\n";
cout<<"Press Any Key To Go Back....";
}
else{
cout<<"\n\n No such ID in database "<<endl;
cout<<"\n Press Any KEY To choose another Option…. ";
}

getch();
}

void Patient:: Patient_detail()
{
int i;
if(docid1==0)
{
cout<<"\n\n\n\n\n OOPS!!!! "<<"\n\n\n";
cout<<"Note:- No Record To Display Plz Go Back And Enter Some Entries…… "<<"\n";
}
else{
cout<<"********************************************************************************"<<"\n";
cout<<"\t \t \t Details Of All The Pateint In The Hospital \n";
cout<<"********************************************************************************"<<"\n \n";
cout<<"ID"<<"\t\t"<<"Name"<<"\t\t"<<"Illness"<<"\t\t"<<"ADMITTED Date"<<"\t\t"<<"Age";
cout<<"\n \n";
for(i=0;i<docid1;i++)
{
cout<<arr[i].id1<<"\t\t"<<arr[i].name<<"\t\t"<<arr[i].dis<<"\t\t"<<arr[i].date<<"\t\t"<<arr[i].age<<"\n";
}
cout<<"\n Press Any KEY To choose another Option.... ";
}
getch();
}

void Patient :: tot_no_of_pat()
{
system("cls");
int i=counter;
cout<<"Total Patients in Hospital : "<<i<<"\n";
cout<<"\n Press Any KEY To choose another Option.... ";
getch();
}

void Patient :: gen_pat_report()
{
system("cls");
int i,n;
cout<<"\n Enter the Patient's ID to Display Bill : ";
cin>>n;
int status=0;
for(i=0;i<docid1;i++)
{
if(arr[i].id1==n)
{
status=1;
break;
}
}
if(status)
{
cout<<"\n\n *** Patient's Report *** "<<"\n \n";
cout<< "1. Patient's Medicine Charge "<<arr[i].bill<<"\n";
cout<< "2. Patient's Room Charge "<<arr[i].charg<<"\n";
cout<<"Press Any Key To Go Back….";
}

else{
cout<<"\n\n No such ID in database "<<endl;
cout<<"\n Press Any KEY To choose another Option…. ";
}
getch();

}

 

int main()
{
//system("color 9");

bool repeat= true;
int ch1,ch2,ch3,ch4;
Doctor d;
Patient p;
xyz:
system("cls");
cout<<"Welcome to..."<<"\n";
cout<<"\n\n\t\t\t***HOSPITAL MANAGEMENT SYSTEM***"<<"\n\n\n";
cout<<"\t\t\t       Made By :      "<<"\n\n";
cout<<"\t\t\t       -->Saurabh Khaparey    "<<"\n\n";
cout<<"1. Main Menu  "<<"\n\n";
cout<<"2. Software Details  "<<"\n\n";
cout<<"3. Exit  "<<"\n\n\n\n";
cout<<"Enter Your Choice :";
cin>>ch1;
cout<<"\n\n\n";

if(ch1==1)
{
xyz2:
system("cls");
cout<<"\n\n";
cout<<"1. Enter into Doctor's DataBase "<<endl;
cout<<"2. Enter into Patient's DataBase "<<endl;
cout<<"3. Generate Patient's Report "<<endl;
cout<<"4. Generate Patient's Bill "<<endl;
cout<<"5. EXIT "<<"\n";
cout<<"Please Enter Your choice :"<<"";
cin>>ch2;
while(repeat==true)
{
system("cls");
switch(ch2)
case 1:
{
cout<<"\n\n";
cout<<"*** Welcome To Doctor's DataBase *** "<<"\n \n \n\n";

cout<< "\t 1. Add New Doctor's Information "<<endl;
cout<< "\t 2. Display Doctor's Information "<<endl;
cout<< "\t 3. Detail OF ALL The Doctors In The Hospital "<<endl;
cout<< "\t 4. Total Number of Doctor's in Hospital "<<endl;
cout<< "\t 5. EXIT "<<"\n";

cout<<"Please Enter your choice :"<<"";
cin>>ch3;
switch(ch3)
{
case 1:
system("cls");
d.add_doc_info();
break;
case 2:
d.Display();
cout<<"\n";
break;

case 3:
system("cls");
d.Doctor_detail();
break;

case 4:
d.tot_no_of_doc();
break;

case 5:
goto xyz2;
break;

default:
cout<<"invalid";
}
break;
case 2:
cout<<"\n\n";
cout<<"*** Welcome To Patient's DataBase *** "<<"\n \n";

cout<< "1. Add New Patient's Information "<<endl;
cout<< "2. Display Patient's Information "<<endl;
cout<< "3. Detail OF ALL The Patient In The Hospital "<<endl;
cout<< "4. Total Number of Patient's in Hospital "<<endl;
cout<< "5. EXIT "<<"\n";

cout<<"Please Enter your choice :"<<"";
cin>>ch4;
switch(ch4)
{
case 1:
system("cls");
p.add_pat_info();
break;
case 2:
p.Display();
cout<<"\n";
break;

case 3:
system("cls");
p.Patient_detail();
break;

case 4:
p.tot_no_of_pat();
break;

case 5:
goto xyz2;
break;

default:
cout<<"invalid";
break;
}
break;
case 3:

p.Patient_report();
goto xyz2;
break;
case 4:
p.gen_pat_report();
goto xyz2;
break;
case 5:
goto xyz;
break;

}
}
}

else if(ch1==2)
{
system("cls");
 cout<<"\n\n\n\t\t\t ***SOFTWARE DETAILS***\n";
 cout<<"\n\n\tDeveloper                : Saurabh Khaparey "<<"\n";
 cout<<"\tProgramming Language     : C++ "<<"\n";
 cout<<"\tCompiler version         : g++ (MinGW.org GCC-8.2.0-3) 8.2.0 "<<"\n";
 cout<<"\tName                     : Hospital Management System"<<"\n";
 cout<<"\n\tHope you like it..."<<"\n";
 cout<<"\n\n\tThank You for using this program!!!!!!!!!!! "<<"\n";
 cout<<"\n\n\n\tPress any key to continue........"<<"\n";
 getch();
 goto xyz;
}

else if(ch1==3)
{
    system("cls");
    cout<<"Thank you for using this software...\nHope you liked it!!!!!";
    return 0;
}

else
{
cout<<"Wrong Input"<<endl;
}
return 0;
}



