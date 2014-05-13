//
//  Image.h
//  Feather
//
//  Created by QuangDong on 5/3/14.
//
//

#ifndef Feather_Image_h
#define Feather_Image_h

#include "cocos2d.h"

using namespace cocos2d;

class Image : public Node
{
private:
    CScaleSprite _img;
public:
    Image(void);
    ~Image(void);
};

#endif
