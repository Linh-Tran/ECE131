#include <stdio.h>

struct time
{
  int hours;
  int minutes;
  int seconds;
};

struct time elasped_time(struct time time1, struct time time2);
struct time elasped_time (struct time time1, struct time time2)
{
  struct time result = {0,0,0};
  result.seconds = time2.seconds - time1.seconds;

  //if seconds <0, borrow one minute
  if(result.seconds <0){
    result.seconds +=60;
    time2.minutes -=1;
}

result.minutes = time2.minutes - time1.minutes;

  //if minutes <0, borrow one hour
if(result.minutes <0){
    result.minutes +=60;
    time2.hours -=1;
}

result.hours = time2.hours - time2.hours;

  //if hour <0, need to borrow one day
if(result.hours <0){
    result.hours += 24;
}
return result;
}

int main (void)
{
  struct time t1 = {3, 45, 15}, t2 = {9, 44, 03};
  struct time t3 = {22, 50,59}, t4 = {7,30, 0};
  struct time result;
  result = elasped_time(t1, t2);
  printf("Time between %.2d:%.2d:%.2d and %.2d:%.2d:%.2d is %.2d:%.2d:%.2d\n",
      t1.hours, t1.minutes, t1.seconds,
      t2.hours, t2.minutes, t2.seconds,
      result.hours, result.minutes, result.seconds);

  result = elasped_time(t2, t1);
  printf ("Time between %.2d:%.2d:%.2d and %.2d:%.2d:%.2d "  
     "is %.2d:%.2d:%.2d\n",  
     t2.hours, t2.minutes, t2.seconds, 
     t1.hours, t1.minutes, t1.seconds, 
     result.hours, result.minutes, result.seconds); 
  
  result = elasped_time (t3, t4);  
  printf ("Time between %.2d:%.2d:%.2d and %.2d:%.2d:%.2d "  
     "is %.2d:%.2d:%.2d\n",  
     t3.hours, t3.minutes, t3.seconds, 
     t4.hours, t4.minutes, t4.seconds, 
     result.hours, result.minutes, result.seconds);  

  return 0;
}
