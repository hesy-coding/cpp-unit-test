#pragma once

#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS

#include <SDKDDKVer.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <Windows.h>

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

#endif

#include <list>
#include <iostream>
#include <cstdarg>
#include <string>
#include <type_traits>
#include <sstream>

namespace CoreTest {
	class Nocopyable {
	public:
		Nocopyable() {}
		virtual ~Nocopyable() {}

	protected:
		Nocopyable(const Nocopyable&);
		const Nocopyable &operator=(const Nocopyable &);
	};
}