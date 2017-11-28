#pragma once
#ifndef BULLETWORLD_H
#define BULLETWORLD_H
/* using bullet3-2.87*/
#include <vector>
#include <bullet/btBulletDynamicsCommon.h>
#include "BulletDebugDraw.h"
//#include"OpenGLMotionState.h"

class BulletWorld
{
	
public:	
	BulletWorld();
	static btDynamicsWorld *Instance();
	~BulletWorld();

	BulletDebugDraw *debugDraw;

private:
	static BulletWorld *bwInstancePtr;
	btDispatcher *bwDispatcher;
	btBroadphaseInterface *bwBPInterface;
	btConstraintSolver *bwConstraintSolver;
	btCollisionConfiguration *bwColConfig;

protected:
	static btDynamicsWorld *bwWorld;
};
#endif