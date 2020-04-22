#pragma once
class Engine
{
private:
	bool isRuning = false;

public:
	Engine();
	void start();
	void stop();
	bool getIsRuning() const;
};

