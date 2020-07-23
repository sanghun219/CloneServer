//#pragma once
//#include "../pch.h"
//#include <thread>
//
//#define RAND(type,maxval) (type)RandomMT::getInstance().rand(maxval)
//
//class RandomMT : public Singleton<RandomMT>
//{
//public:
//	uint64_t rand(int maxval)
//	{
//		std::mt19937 engine((uint32_t)time(nullptr) + (uint32_t)std::this_thread::get_id().hash());
//		std::uniform_int_distribution<uint64_t> distribution(0, UINT64_MAX);
//
//		auto generator = bind(distribution, engine);
//
//		return (uint64_t)(generator() % maxval);
//	}
//};