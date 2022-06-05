#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct doctor1
{ int id;
char n_ame[20],qual[20],a_ge[20],exp[20],city[20],special[20];
};
struct patient1
{ int id1;
char n_ame[20],a_ge[20],city[20],dis[20],room[20],symp[20],cond[20],date[20],charg[20],bill[20];
};
class doctor;
class patient;
class hospital
{
public:
//int id=0,id1=0,
int counter=0;
};
class doctor:
    public hospital
{
public:
 int doctor_id=0;
struct doctor1 arr[10];
void add_doc_info()
 {
 int i,en;
 cout<< "How Many Entries you want to add :";
 cin>>en;
 for(i=1;i<=en;i++)
 { cout<< "Enter Doctor's ID:";
 cin>>arr[doctor_id].id;
cin.ignore();
cout<< "Enter Doctor's Name:";
cin.getline(arr[doctor_id].n_ame,20);
cout<< "Enter Doctor's Age :";
cin>>arr[doctor_id].a_ge;
 cin.ignore();
 cout<< "Enter Doctor's Qualification :";
cin.getline(arr[doctor_id].qual,20);
cout<< "Enter Doctor'sSpecialization :";
cin>>arr[doctor_id].special;
cin.ignore();
cout<< "Enter Doctor's Experience :";
cin.getline(arr[doctor_id].exp,20);
cout<< "Enter Doctor's city:";
cin.getline(arr[doctor_id].city,20); doctor_id++;
counter++;
cout<< "\n";
cout<< "You filled all Entries of"<<i<<" doctor successfully"<<"\n"; if(en>1){cout<<"enter value for"<<" "<<i+1<<" "<<"doctor"<<"\n";};
 } }
void Display()
 { system("cls");
 int n,i;
 cout<< "\n Enter the doctor's ID to display Record :";
 cin>>n; if(n==0)
 {
cout<< "\n\n OOPS!!!! "<<"\n\n";
cout<< "Note:- No Record To Display Plz Go Back And Enter Some Entries...... "<<"\n";
 }
else
{
 int status=0;
 for(i=0;i<doctor_id;i++)
 {
 if(arr[i].id==n)
 {
status=1;
break;
 }
}
 if(status)
 {
 cout<< "\n\n";
 cout<< "1.Doctor's ID:"<<arr[i].id<<"\n";
 cout<< "2.Doctor's Name:"<<arr[i].n_ame<<"\n";
 cout<< "3.Doctor's Age:"<<arr[i].a_ge<<"\n";
 cout<< "4.Doctor's Qualification:"<<arr[i].qual<<"\n";
 cout<< "5.Doctor's Specialization:"<<arr[i].special<<"\n";
 cout<< "6.Doctor's Experience :"<<arr[i].exp<<"\n";
 cout<< "8.Doctor's city :"<<arr[i].city<<"\n";
cout<< " \n PRESS Any KEY To choose another Option.... ";
 }
 else
 { cout<< "\n\n No such ID in database "<<endl;
 cout<< " \n PRESSAny KEY To choose another Option.... ";
 } }
 getch();
 }
 void doctor_detail()
 {
int i;
 if(doctor_id==0)
 { cout<< " \n\n\nOOPS!!!!"<<"\n\n"; cout<<"Note:- No Record To Display Plz Go Back AndEnter Some En tries...... "<<"\n";
 } else{
cout<< "********************************************************************************"<<"\n"; cout<<"\t \t \t Details Of All TheDoctors In The Hospital \n";
cout<< "********************************************************************************"<<"\n \n";
 cout<< "ID"<<"\t \t"<<"specialization"<<"\t \t"<<"Qualification"<<"\t\ t"<<"Age";
 cout<< "\n \n";
 for(i=0;i<doctor_id;i++)
 { cout<<arr[i].id<<"\t \t"<<arr[i].special<<"\t \t\t"<<arr[i].qual<<"\t \t \t"<<arr[i].a_ge<<"\n";
 } cout<< " \n PRESS Any Button To choose anotherOption.... ";
 }
getch();
 } void tot_no_of_doc()
 { system("cls");
 int i=counter;
cout<< "Total Doctor's in Hospital : "<<i<<"\n";
 cout<< " \n PRESS Any Button To choose another Option.... ";
 getch();
 }
}; class patient:public
hospital
{
public:
 int doctor_id1=0;
struct patient1 arr[10];
void add_pat_info();
void Display();
void patient_report();
void patient_detail();
void tot_no_of_pat();
void gen_pat_report();
};
void patient :: add_pat_info()
 { int i,en;
 cout<< "How ManyEntries you want to add :";
 cin>>en;
 for(i=1;i<=en;i++)
 { cout<< " 1. Enter Patient's ID:";
cin>>arr[doctor_id1].id1;
cin.ignore();
cout<< " 2. Enter patient's Name :";
cin.getline(arr[doctor_id1].n_ame,20);
cout<< " 3. Enterpatient's Age :";
cin>>arr[doctor_id1].a_ge;
cin.ignore();
cout<< " 4.Enter patient's Disease :";
cin.getline(arr[doctor_id1].dis,20);
cout<< " 5. Enter patient'sSymptoms :";
cin.getline(arr[doctor_id1].symp,20);
 cout<< " 6. Enter Patient's Room No.:";
 cin>>arr[doctor_id1].room;
 cin.ignore();
 cout<< " 7. Enter Patient's condition Before Admit :";
cin.getline(arr[doctor_id1].cond,20);
 cout<< " 8. Enter Patient's ADMIT Date:";
 cin.getline(arr[doctor_id1].date,20);
 cout<< " 9.Enter Patient's Room Charge :";
cin.getline(arr[doctor_id1].charg,20);
cout<< " 10. EnterPatient's Medicine charge :";
 cin>>arr[doctor_id1].bill;
 doctor_id1++;
counter++;
 cout<< "\n"; cout<<"You filled all Entries of "<<i<<" patientsuccessfully"<<"\n";
 if(en>1)
    {
        cout<< "enter value for "<<" "<<i+1<<""<<"patient"<<"\n";};
 }
 } void patient ::
Display()
 { system("cls");
 int n,i;
 cout<< "\n Enter thePatient's ID to display info :"; cin>>n;
 if(n==0)
{
cout<< "\n\n OOPS!!!! "<<"\n \n";
cout<< "Note:- No Record To Display Plz Go Back And Enter Some Entries...... "<<"\n";
cout<< " \n PRESS Any KEY To choose anotherOption.... ";
 } else
 {
int status=0;
for(i=0;i<doctor_id1;i++)
 {
if(arr[i].id1==n)
 {
status=1;
break;
 }
}
 if(status==1)
 {
 cout<< "1.Patient's ID :"<<arr[i].id1<<"\n";
 cout<< "2.Patient's Name:"<<arr[i].n_ame<<"\n";
 cout<< "3.Patient's Age :"<<arr[i].a_ge<<"\n";
 cout<< "4.Patient's Disease :"<<arr[i].dis<<"\n";
 cout<< "5.Patient's Symptoms :"<<arr[i].symp<<"\n";
 cout<< "6.Patient's Room No.:"<<arr[i].room<<"\n";
 cout<< "7.Patient's condition Before Admit:"<<arr[i].cond<<"\n";
 cout<< "8.Patient's ADMIT Date:"<<arr[i].date<<"\n";
 cout<< "9.Patient's Room Charge:"<<arr[i].charg<<"\n";
 cout<< "10.Patient's Medicine charge:"<<arr[i].bill<<"\n";
cout<< " \n PRESS Any KEY To chooseanother Option.... ";
 } else
 {
     cout<< " \n\n No such IDin database "<<endl;
     cout<< " \n PRESS Any KEY To chooseanother Option.... ";
 }
}
getch();
}
void patient :: patient_report()
 { system("cls");
 int i,n;
cout<< "\n Enter the Patient's ID to Display Report :";
cin>>n; int status=0;
for(i=0;i<doctor_id1;i++)
 {
if(arr[i].id1==n)
 {
status=1;
break;
 }
}
 if(status)
 {
     cout<< "\n\n *** Patient's Report ***"<<"\n \n";
 cout<< "1. Patient's Name"<< arr[i].n_ame<<"\n";
 cout<< "2. Patient's Age"<< arr[i].a_ge<<"\n";
 cout<< "3. Patient symptoms "<<arr[i].symp<<"\n";
 cout<< "4. Patient Disease "<<arr[i].dis<<"\n";
 cout<< "5. Patient Admit Date "<<arr[i].date<<"\n";
cout<< "6. Patient condition At TheTime Of Discharge "<< arr[i].cond<<"\n";
cout<< "PRESS Any Key ToGo Back....";
 }

else
    {
cout<< " \n\n No such ID indatabase "<<endl;

 cout<< " \n PRESS Any KEY To choose another Option.... ";
}

getch();
 }
 void patient::
patient_detail()
 { int i;
if(doctor_id1==0)
 { cout<< " \n\n\n\n\nOOPS!!!!"<<"\n\n\n"; cout<<"Note:- No Record To Display Plz GoBack And Enter Some En tries...... "<<"\n";
 }
else
    {
cout<< "********************************************************************************"<<"\n"; cout<<"\t \t \t Details Of All The PateintIn The Hospital \n";
cout<< "********************************************************************************"<<"\n \n"; cout<<"ID"<<"\t \t"<<"illness"<<"\t\t"<<"ADMITTED Date"<<"\t \t"<<"Ag e"; cout<<"\n \n";
for(i=0;i<doctor_id1;i++)
 { cout<< arr[i].id1<<"\t \t"<<arr[i].dis<<"\t \t\t"<<arr[i].date<<"\t \t \t"<<arr[i].a_ge<<"\n";
 }
 cout<< " \n PRESS Any KEY To choose another Option.... ";
 }
getch();
 }
 void patient :: tot_no_of_pat()
 { system("cls");
int i=counter;
cout<< "Total Patients in Hospital : "<<i<<"\n";
cout<< " \n PRESS Any KEY To choose another Option.... ";
getch();
 }
void patient :: gen_pat_report()
{
system("cls");
 int i,n;
 cout<<"\n Enter the Patient's IDto Display Bill :";

 cin>>n; int
status=0;
for(i=0;i<doctor_id1;i++)
 {
if(arr[i].id1==n)
 {
status=1;
break;
 }
}
 if(status)
 {
 cout<< "\n\n *** Patient's Report *** "<<"\n\n";
 cout<< "1. Patient's Medicine Charge "<<arr[i].bill<<"\n";
 cout<< "2. Patient's Room Charge"<< arr[i].charg<<"\n";
 cout<< "PRESS Any Key To Go Back....";
 }
 else
    {
        cout<< "\n\n No such ID in database"<<endl;
        cout<< "\n PRESS Any KEY To choose anotherOption.... ";
 }
getch();
}
int main()
{
 bool repeat=true;
 int ch1,ch2,ch3,ch4;doctor d; patient p;
 xyz:
 system("cls");
 cout<< "\n\n";
 cout<< " *** Welcome to the Hospital Management System *** "<<"\n\n\n";
 cout<< " 1. Menu :"<<"\n\n";;
 cout<< " 2. Exit :"<<"\n\n\n\n";
 cout<< "Enter Your Choice :";
cin>>ch1;
 cout<< "\n\n\n";
if(ch1==1) {
xyz2:
system("cls");
cout<< "\n\n";
cout<< " 1. Enter into Doctor's DataBase "<<endl;
cout<< " 2. Enter into Patient's DataBase "<<endl;
cout<< " 3. Generate Patient's Report "<<endl;
cout<< " 4. Generate Patient's Bill "<<endl;
cout<< " 5. EXIT "<<"\n";
cout<< "Please Enter Your choice :"<<" "; cin>>ch2;
 while(repeat==true)
 { system("cls"); switch(ch2) case
1: { cout<<"\n\n";
cout<<"*** Welcome To Doctor's DataBase *** "<< "\n \n \n\n";
 cout<< " \t 1. Add New Doctor'sInformation "<<endl;
 cout<< " \t 2. DisplayDoctor's Information "<<endl;
 cout<< " \t 3. Detail OF ALL The DoctorsIn The Hospital "<<endl;
 cout<< " \t 4. Total Number of Doctor's in Hospital"<<endl;
 cout<< " \t 5. EXIT"<<"\n";
 cout<<"Please Enter your choice :"<<"";
 cin>>ch3; switch(ch3)
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
 d.doctor_detail();
break;
 case
4:
 d.tot_no_of_doc();
 break;
 case
5:
 goto xyz2;
break;

default:
 cout<<"Invalid";
 }
break; case 2:
 cout<< "\n\n"; cout<<" *** Welcome ToPatient's DataBase *** "<<"\n \ n";
 cout<< "1. AddNew Patient's Information "<< endl;
 cout<< "2. Display Patient's Information "<< endl;
cout<< "3. Detail OF ALL The Patient In The Hospital "<<endl;
cout<< "4. Total Number of Patient's in Hospital "<< endl;
cout<< "5. EXIT "<<" \n";
cout<<"Please Enter your choice :"<<" ";
cin>>ch4;
switch(ch4)
 {
case 1:
 system("cls");
 p.add_pat_info();
break;
 case 2:
 p.Display();
cout<<"\n"; break;
 case 3:
 system("cls");
 p.patient_detail();
break;
 case
4:
 p.tot_no_of_pat();
break;
 case 5:
 goto xyz2;
break;
 default:
cout<<"Invalid";
break;
 }
break; case
3:

p.patient_report();
goto xyz2; break;
case 4:

p.gen_pat_report();
goto xyz2; break;
case 5:
 goto xyz;
break;
 }
}
}
else if(ch1==2)
{
 return 0;
}
else
{
 cout<<"Invalid Input"<<endl;
}
return 0;
}
