
#pragma once

#include "Entity.h"
#include "Defines.h"





class cTNTEntity :
	public cEntity
{
	typedef cEntity super;
	
public:
	CLASS_PROTODEF(cTNTEntity);

	cTNTEntity(double a_X, double a_Y, double a_Z, double a_FuseTimeInSec);
	cTNTEntity(const Vector3d & a_Pos, double a_FuseTimeInSec);
	
	// cEntity overrides:
	virtual bool Initialize(cWorld * a_World) override;
	virtual void SpawnOn(cClientHandle & a_ClientHandle) override;
	virtual void Tick(float a_Dt, cChunk & a_Chunk) override;
	
protected:
	double m_Counter;      ///< How much time has elapsed since the object was created, in seconds
	double m_MaxFuseTime;  ///< How long the fuse is, in seconds
};




