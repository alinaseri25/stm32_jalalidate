#ifndef QDATEJALALI_H
#define QDATEJALALI_H

#include "define.h"
#include "DateTime.h"

class QDATEJALALI
{
public:
    QDATEJALALI();
    bool SetMiladiDate(int _year,int _month,int _day);
    bool SetShamsiDate(int _year,int _month,int _day);

    int getdaysh(void);
    int getmonthsh(void);
    int getyearsh(void);

    int getdaymi(void);
    int getmonthmi(void);
    int getyearmi(void);

		DateTime getMiladiDate(void);
		DateTime getShamsiDate(void);

private:

		DateTime shmdate,mildate ;

		void miltoshmcv(unsigned char ym, unsigned char mm, unsigned char dm);
		void shmtomilcv(unsigned char ys, unsigned char ms, unsigned char ds);

};

#endif // QDATEJALALI_H
