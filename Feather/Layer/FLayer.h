#ifndef _LAYER_H_
#define _LAYER_H_
#include "cocos2d.h"
class FLayer :
	public cocos2d::Layer
{
public:
	unsigned short	idLayer;
	FLayer(void);
	~FLayer(void);
	FLayer(int);
};

#endif
