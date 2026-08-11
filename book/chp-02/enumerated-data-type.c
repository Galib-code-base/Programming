#include<stdio.h>
//Define an enumeration for days of the week
enum DaysOfWeek{
    Satarday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    friday,
};
int main(){
    enum DaysOfWeek today;
    today = Wednesday;
    printf("Today is %i\n",today);
    return 0;
}