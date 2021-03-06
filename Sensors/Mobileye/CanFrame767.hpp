

#ifndef __CanFrame767_h__
#define __CanFrame767_h__


#include "structureCanMobileye.h"
#include "CanDecoder.h"



class CanFrame767 
{
public:
	CanFrame767(){};
	~CanFrame767(){};
	void decode()
{
    data_.LaneHeadingC1 = (double)(((double)(mobileyeDecodeCAN(d_.frame.data,0,0,16,0))-32767.0)/1024.0);		
}
;
	void * data() { return &data_; }; 
	int size() { return sizeof(LaneInfoPart2); };
	void SetData(TimestampedCanFrame rec_frame){d_=rec_frame;};
protected:
private:
	LaneInfoPart2 data_;
	TimestampedCanFrame d_;
};


#endif // __CanFrame767_h__
