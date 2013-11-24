//
//  GameScene.h
//  ThrowGame
//
//  Created by 龙灵修 on 13-11-24.
//
//

#ifndef __ThrowGame__GameScene__
#define __ThrowGame__GameScene__

#include "cocos2d.h"
USING_NS_CC;

class GameScene : public CCLayer {
    
    
public:
   
    virtual bool init();
    
    static CCScene* scene();
    
    CREATE_FUNC( GameScene );
    
};

#endif /* defined(__ThrowGame__GameScene__) */
