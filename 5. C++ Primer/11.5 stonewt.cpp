//#include <iostream>
//using std::cout;
//using std::endl;
//#include "11.5 stonewt.h"
//
//Stonewt::Stonewt(double lbs, Mode md)
//{
//	mode = md;
//	stone = int(lbs) / Lbs_per_stn;
//	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
//	pounds = lbs;
//}
//
//Stonewt::Stonewt(int stn, double lbs, Mode md)
//{
//	mode = md;
//	stone = stn;
//	pds_left = lbs;
//	pounds = stn * Lbs_per_stn + lbs;
//}
//
//Stonewt::Stonewt()
//{
//	mode = LBS;
//	stone = pounds = pds_left = 0;
//}
//
//Stonewt::~Stonewt()
//{
//}
//
//void Stonewt::setMode(Mode md)
//{
//	mode = md;
//}
//
//std::ostream& operator<<(std::ostream& os, Stonewt stonewt)
//{
//	if (stonewt.mode == Stonewt::LBS)
//	{
//		os << stonewt.pounds << " pounds\n";
//	}
//	else if (stonewt.mode == Stonewt::STN)
//	{
//		os << stonewt.stone << " stone, " << stonewt.pds_left << " pounds\n";
//	}
//	else
//	{
//		os << "invalid mode" << endl;
//	}
//	return os;
//}