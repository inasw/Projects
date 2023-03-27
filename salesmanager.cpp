
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
//declaring universal variable
int person1product[5];
float person1totalbirr[5];
float totalBirr1Monthly[5];
int day=0;

int person2product[5];
float person2totalbirr[5];
float totalBirr2Monthly[5];

int person3product[5];
float person3totalbirr[5];
float totalBirr3Monthly[5];

int person4product[5];
float person4totalbirr[5];
float totalBirr4Monthly[5];
          float x1 =0,x2=0,x3=0,x4=0;   //we need them later w
int product = 5;


void person1();
void person2();
void person3();
void person4();

void total() ;
void firstpage();
void search();
//declaring the functons for later use

int main()
{   
   restart:
    int firstchoice;//it will recieve the person choice 
 cout<<"                                                  ================= welcome ================="<<endl;
    cout<<"                                                         please enter your choice "<<endl;
    cout<<"                                                   1.  for filling employees data \n";
    cout<<"                                                   2.  to see tabular data of employees \n";
    cout<<"                                                   3.  for searching an item \n";
    cout<<"                                                   0.  to exit \n";
    cout<<"                                                  ============================================"<<endl;
    cin>>firstchoice;//receiving person's choice
    if (firstchoice==1){
      firstpage();}
      else if (firstchoice==2){
        total();// it will go to the function "total" ifthe user enters 1
      }
else  if (firstchoice==3){
    search();
}

else  if (firstchoice==0) {
exit(EXIT_FAILURE); //it will exit if user enters 0
}

else{
  cout<<"invalid write the number correctly again"<<endl;
  goto restart;   //it will repeat the process if they enter any number >3or <0
}

  goto restart;
  return 0;
}




void person1(){
    

    for(int i =0;i<product; i++){
      //the process will be repeated for number of product times ie 5
       
        cout<<"how many of product   "<<i+1<<"  did u sell in day "<< day <<" if none enter 0\n";      
        cin>>person1product[i];//it recieve the number of product sold in day {day}

if (  person1product[i]==0){
    goto first;//if they sell no product no need to ask them it's momey so we pass to next step 
}
cout<<"total birr of product   "<<i+1<<endl;//we start the loop from 0 so to avoid confusion we will tell them to enter the value of i+1

cin>>person1totalbirr[i];//total birr of product i

     first:
 totalBirr1Monthly[i]+=person1totalbirr[i];//it will colect price of product i in the some period of time like week 2 day month...

    }
    }




void person2(){
    for(int i =0;i<product; i++){
         cout<<"how many of product   "<<i+1<<"  did u sell in day "<<day<<" if none enter 0\n";    
cin>>person2product[i];
if (  person2product[i]==0){
    goto second;
}
cout<<"total birr of product   "<<i+1<<endl;

cin>>person2totalbirr[i];
    second:
 totalBirr2Monthly[i]+=person2totalbirr[i];



    }
    
}

void person3(){
    for(int i =0;i<product; i++){
        cout<<"how many of product   "<<i+1<<"  did u sell in day "<<day<<" if none enter 0\n";    
cin>>person3product[i];
if (  person3product[i]==0){
    goto third;
}
cout<<"total birr of product   "<<i+1<<endl;

cin>>person3totalbirr[i];
third:
 totalBirr3Monthly[i]+=person3totalbirr[i];



    
    }
}


void person4(){
    for(int i =0;i<product; i++){
        cout<<"how many of product   "<<i+1<<"  did u sell in day "<<day<<" if none enter 0\n";    
cin>>person4product[i];
if (  person4product[i]==0){
    goto fourth;
}
cout<<"total birr of product   "<<i+1<<endl;

cin>>person4totalbirr[i];
    fourth:
 totalBirr4Monthly[i]+=person4totalbirr[i];


    
    }
}





void total() {
          float x1 =0,x2=0,x3=0,x4=0;
    for (int i = 0; i<5; i++){
       x1+=totalBirr1Monthly[i];
       x2+=totalBirr2Monthly[i];
       x3+=totalBirr3Monthly[i];    
        x4+=totalBirr4Monthly[i];              
    }// it will take the value or the total sum of product sold by each person 
  
    
    int i =0;//we declared i here because we don't want it to get 0 wach time it go to inner loop
  
    cout<<" "<<setw(5)<<"\t"<<" pers1" <<"\t"<<" pers2" <<"\t"<<" pers3" <<"\t"<<" pers4" <<  "\t"<<"sum"<<endl;
   //setw() for precision 
        for(int j =0;j<5;j++){
                   
                   for(i;i<=j;i++){ 

cout<<i+1<<setw(5)<<"\t"<< totalBirr1Monthly[i];  //it will put person i produt i horizontally 
cout<<"\t"<<totalBirr2Monthly[i];
cout <<"\t"<<totalBirr3Monthly[i] ;  
cout<<"\t" <<totalBirr4Monthly[i]; 
cout<<"\t" <<totalBirr1Monthly[i]+totalBirr2Monthly[i]+totalBirr3Monthly[i]+totalBirr4Monthly[i]; 

        }
        //the step must be repeated for 5 times i.e the number of product times.          
        cout<<endl;
        
}
cout<<"Sum"<<setw(5)<<"\t"<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<x4<<endl;//we total birr soled by each person 
cout<<"Bonus"<<setw(3)<<" "<<(x1*0.05)<<"\t"<<(x2*0.05)<<"\t"<<(x3*0.05)<<"\t"<<(x4*0.05)<<endl;//bonus 
}

void firstpage(){
   day+=1;//we initiate the day by 0 so each time it come to this step it adds 1 day 

    for (int i=0;i<4;i++){
int person;
restart:
cout<<"please enter ur ID "<<endl;
cin>>person;//it register the person id 
switch(person){
  case 1:
  person1();  //if it's 1 it will go to the   function "person 1"
  break;
  case 2:
  person2();
  break;
  case 3:
  person3();
  break;
  case 4:
  person4();
  break;
  default :
  cout<<"invalid code enter again"<<endl;

  goto restart;

break;
}
    }}
  
  void search(){
      int search;
      
      search:
      cout<<"1. if you want to choose by product enter 1 \n";
       cout<<"2. if you want to choose by person(employee) enter \n2 ";
      cin>>search;
      if (search== 1){
          int productId;//search by product id
          cout<<"please  enter the product ID\n ";
          cin>>productId;
          if ((productId>5)||(productId<1)){
              
              cout<<"invalid please enter again"<<endl;
              goto search;
          }
          else{
              cout<<" "<<setw(5)<<"\t"<<1<<"\t"<<2<<"\t"<<3<<"\t"<<4<<  "\t"<<"sum"<<endl;
          cout<<productId <<"\t"<< totalBirr1Monthly[productId-1];  
          cout<<"\t"<<totalBirr2Monthly[productId-1];
          cout <<"\t"<<totalBirr3Monthly[productId-1];  
          cout<<"\t" <<totalBirr4Monthly[productId-1]<<"\t" 
          <<totalBirr1Monthly[productId-1]+totalBirr2Monthly[productId-1]+totalBirr3Monthly[productId-1]+totalBirr4Monthly[productId-1] <<endl;
       }//product id -1 because we start the array from 0
  }
  else if(search==2) {
      search2:
      int personId;
       int num[5]={1,2,3,4,5};//write from 1 to 5 in new line 
      cout<<" please enter the person ID"<<endl;
      cin>>personId;
      switch(personId){

          case 1:
          for(int j=0;j<5;j++){
       cout<<"product "<<num[j]<<"\t"<<totalBirr1Monthly[j]<<endl;  
       
          }
          cout<<"sum         "<<"\t"<<x1<<endl;
          cout<<"bonus          "<<"\t"<<x1*0.05<<endl;
          break;
          case 2:
          for(int j=0;j<5;j++){
            cout<<"product "<<num[j]<<"\t"<<totalBirr2Monthly[j]<<endl;  
          }
          cout<<"sum          "<<"\t"<<x2<<endl;
          cout<<"bonus          "<<"\t"<<x2*0.05<<endl;
          break;
           case 3:
          for(int j=0;j<5;j++){
            cout<<"product "<<num[j]<<"\t"<<totalBirr3Monthly[j]<<endl;  
          }
                    cout<<"sum         "<<"\t"<<x3<<endl;

          break;
          case 4:
          for(int j=0;j<5;j++){
            cout<<"product "<<num[j]<<"\t"<<totalBirr4Monthly[j]<<endl;  
          }
            cout<<"sum         "<<"\t"<<x4<<endl;
            cout<<"bonus       "<<"\t"<<x2*0.05<<endl;         
            default:          
            break; 
              cout<<"unknown employee enter correctly again"<<endl;
            goto search2;
           break;
      }
      
      
  }
  else {
  cout<<"invalid enter again"<<endl;
      goto search;
}
  }
  















