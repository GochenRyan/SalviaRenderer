#pragma once

#include <salviau/include/salviau_forward.h>
#include <eflib/include/platform/typedefs.h>

BEGIN_NS_SALVIAU();

class window;

class gui
{
public:
	virtual int     create_window(uint32_t width, uint32_t height) = 0;
	virtual int     run() = 0;
	virtual window* main_window() = 0;
};

END_NS_SALVIAU();
