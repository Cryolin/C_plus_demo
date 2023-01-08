//#ifndef STONEWT_H_
//#define STONEWT_H_
//
//#include <iostream>
//
//class Stonewt
//{
//public:
//	enum Mode {LBS, STN};
//private:
//	enum { Lbs_per_stn = 14 };
//	Mode mode;
//	int stone;
//	double pds_left;
//	double pounds;
//public:
//	Stonewt(double lbs, Mode mode = LBS);
//	Stonewt(int stn, double lbs, Mode mode = LBS);
//	Stonewt();
//	~Stonewt();
//	void setMode(Mode md);
//	friend std::ostream& operator<<(std::ostream& os, Stonewt stonewt);
//};
//
//#endif