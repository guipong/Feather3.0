//
//  LayerMgr.cpp
//  Feather
//
//  Created by QuangDong on 5/2/14.
//
//

#include "LayerMgr.h"


LayerMgr* LayerMgr::layerMgr = nullptr;
cocos2d::Scene* LayerMgr::mainScene = nullptr;

LayerMgr::LayerMgr(void)
{
    listLayer = new Vector<FLayer*>();
    for(int i = 0; i < NUM_LAYER; i++)
    {
        FLayer* layer = new FLayer();
        layer->idLayer = i;
        mainScene->addChild(layer);
        listLayer->pushBack(layer);
    }
}

LayerMgr* LayerMgr::getInstance()
{
    if(layerMgr == nullptr)
    {
        layerMgr = new LayerMgr();
    }
    return layerMgr;
}

FLayer* LayerMgr::getLayer(int idLayer)
{
    if(listLayer == nullptr || idLayer < 0 || idLayer > listLayer->size())
        return nullptr;
    return listLayer->at(idLayer);
}
