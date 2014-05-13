//
//  LayerMgr.h
//  Feather
//
//  Created by QuangDong on 5/2/14.
//
//

#ifndef Feather_LayerMgr_h
#define Feather_LayerMgr_h

#include "cocos2d.h"
#include "FLayer.h"
using namespace cocos2d;

#define LAYER_BACKGROUND 0
#define LAYER_OBJECT 1
#define LAYER_OBJECT_TOP 2
#define LAYER_GUI 3
#define LAYER_GUI_TOP 4
#define NUM_LAYER 5

class LayerMgr
{
private:
    static LayerMgr* layerMgr;
    Vector<FLayer*> *listLayer;
public:
    LayerMgr(void);
    static cocos2d::Scene* mainScene;
    LayerMgr* getInstance();
    FLayer* getLayer(int idLayer);
};

#endif
