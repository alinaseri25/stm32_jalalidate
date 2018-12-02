# stm32jalalidate
jalali calender for STM32


to use this lib you should be enable C99 Mode and Add --cpp to misc controls (in options for target --> C/C++ tab)

then you can add library to your project and use it


#include "qdatejalali.h"


QDATEJALALI JDate;

JDate.SetMiladiDate(Year,Month,Day);

int year_in_jalali = JDate.getyearsh()

int month_in_jalali = JDate.getmonthsh()


int day_in_jalali = JDate.getdaysh()


and you can convert jalali to miladi date
