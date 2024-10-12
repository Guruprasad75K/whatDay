#include <stdio.h>

int yearCode(int year){
    
    for(int i=0;i<10;i++){
        int increment=400*i;
        if(year>=0+increment &&year<=99+increment){
        return 6;
    }
    else if(year>=100+increment &&year<=199+increment){
        return 4;
    }
    else if(year>=200+increment &&year<=299+increment){
        return 2;
    }
    else if(year>=300+increment &&year<=399+increment){
        return 0;
    }
    }
}

int isLeapYear(int year){ 
    if((year%4==0 && year%100!=0)||year%400==0){
        return 1;
    }else{
        return 0;
    }
}

int monthCode(int month){
    switch (month)
    {
    case 1: case 10:
        return 1;
        break;
    case 2: case 3: case 11:
        return 4;
        break;
    case 4: case 7:
        return 0;
        break;
    case 5:
        return 2;
        break;
    case 6:
        return 5;
        break;
    case 8:
        return 3;
        break;
    case 9: case 12:
        return 6;
        break;  
    default:
        break;
    }
}

//Main function 
int main(){
    int date,month,year,totalDays,temp,day;
    char days[7][20]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    printf("Use the following format dd mm yyyy\n");
    printf("Enter the date: ");
    scanf("%d %d %d",&date,&month,&year);
    temp=year%100;
    totalDays=temp;
    totalDays+=temp/4+yearCode(year)+monthCode(month)+date;
    day=totalDays%7;
    if(isLeapYear(year) && (month==1 || month==2)){
        day--;
    }
    printf("%d %d %d was a %s",date,month,year,days[day]);


    return 0;
}
