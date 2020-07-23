#pragma once
#include "../pch.h"

template <typename T>
class Singleton {
protected:
	Singleton() {};
	~Singleton() {};

public:
	Singleton(const Singleton&);
	Singleton& operator = (const Singleton&);

	static T& instance() {
		static T instance;
		return instance;
	}
};