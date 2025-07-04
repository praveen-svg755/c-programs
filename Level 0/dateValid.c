#include<stdio.h>
#include<stdbool.h>

// cheak leap year or not
bool isLeapYear(int year){
    return (year%4==0 && year%100 != 0) || (year%400 == 0);
}

bool dateIsValid(int day , int month,int year){

  //failure case
  if(year <1900 || year >9999) return 0;
  //failure case
  if(month < 0 || month >12) return 0;

  int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

  if(month == 2 && isLeapYear(year)){
    daysInMonth[2] = 29;
  }
  
  //failure case
  if(day<1 || day> daysInMonth[month]) return 0;
  
  //pass case
  return 1;
}

int main(){
    int date , month , year;
    scanf("%d/%d/%d",&date,&month,&year);

    if(dateIsValid(date,month,year)){
        printf("Valid");
    }
    else{
        printf("In Valid");
    }
}