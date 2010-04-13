///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Overload Copyright (c) 2010 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-03-05
// Updated : 2010-03-05
// Licence : This source is under MIT License
// File    : glo/detail/common.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glo
{
	// OpenGL Overload functions
	inline void* getProcAddress(char const * Function)
	{
		return wglGetProcAddress(Function);
	}

}//namespace glo