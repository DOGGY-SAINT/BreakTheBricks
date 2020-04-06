#ifndef __PLAY_SCENE_H__
#define __PLAY_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class PlayScene : public Scene
{
private:
	Sprite *stick,*ball;
	bool begin;
public:
    static Scene* createScene();
	bool isBegin() { return begin; }
	void setBegin() { begin = true; }
    virtual bool init();
    CREATE_FUNC(PlayScene);
	bool onContactBegin(PhysicsContact& contact);
	void onKeyPressed();
	void onKeyReleased();
};

#endif // __PLAY_SCENE_H__
