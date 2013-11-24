//
//  GameScene.cpp
//  ThrowGame
//
//  Created by 龙灵修 on 13-11-24.
//
//

#include "GameScene.h"


bool GameScene::init(){
    if ( !CCLayer::init() ) {
        return false;
    }
    
    
    return true;
}


CCScene* GameScene::scene(){
    
    CCScene* s = CCScene::create();
    
    s->addChild( GameScene::create() );
    
    
    return s;
}