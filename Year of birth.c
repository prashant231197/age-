#include<stdio.h>

int main()
{
int year;
year=2020;
int age;
int jan=1;
int feb=2;
int mar=3;
int apr=4;
int may=5;
int jun=6;
int jul=7;
int aug=8;
int sep=9;
int oct=10;
int nov=11;
int dec=12;
int month;
int b=2019;
    printf("Enter the number of your month\n", month);
    scanf("%d", &month);
    printf("Enter your age\n", age);
    scanf("%d", &age);
    int result;
    int alt;
    if(month==jan || month==feb || 
    month==mar || month==apr || month==may){
    result = year-age;
    printf("You were born in the year %d ", result);
    }
    if(month==jun || month==jul || month==aug 
    || month==sep || month==oct || month==nov
    || month==dec){
    alt = b-age;
    printf("You were born in the year %d\n ", alt);
    }
     return 0;
}