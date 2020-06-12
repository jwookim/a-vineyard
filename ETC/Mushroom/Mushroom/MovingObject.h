#pragma once
#include"Time.h"
#include"Object.h"

#define STANDARD_CLOCK 500
#define STANDARD_SPEED 100

typedef Position Direct;

class MovingObject : public Object
{
private:
	Position m_NextPos;
	Direct m_Direct;
	int m_iSpeed;
	int m_iMoveTime;
public:
	MovingObject();
	MovingObject(Direct dir);
	virtual void TimeCheck();
	virtual bool MoveCheck();
	bool MoveTimeCheck();
	void Move(Direct direct);
	void Move();
	void MoveCancle();
	void SetSpeed(int speed);
	void SetDirect(Direct direct);
	void SetMoveTime(int time);
	inline int GetSpeed()
	{
		return m_iSpeed;
	}
	inline Direct GetDirect()
	{
		return m_Direct;
	}
	inline Position GetNextPos()
	{
		return m_NextPos;
	}
};

