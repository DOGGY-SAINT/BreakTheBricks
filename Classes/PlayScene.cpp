#include "PlayScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* PlayScene::createScene()
{
	return PlayScene::create();
}

static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in PlayScene.cpp\n");
}

bool PlayScene::init()
{

	if (!Scene::initWithPhysics())
		return false;

	this->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);

	this->getPhysicsWorld()->setGravity(Vec2(0.0f, 0.0f));
	auto visibleSize = Director::getInstance()->getVisibleSize();
	auto origin = Director::getInstance()->getVisibleOrigin();
	auto centre = Vec2(visibleSize.width / 2, visibleSize.height / 2);

	auto wall = Sprite::;

	return true;
}


