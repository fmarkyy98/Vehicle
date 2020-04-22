#include "Engine.h"

Engine::Engine() : isRuning(false) { }
void Engine::start()
{
	this->isRuning = true;
}
void Engine::stop()
{
	this->isRuning = false;
}
bool Engine::getIsRuning() const
{
	return this->isRuning;
}