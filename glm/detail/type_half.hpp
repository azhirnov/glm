#pragma once

#include "setup.hpp"

namespace glm{
namespace detail
{
	typedef short hdata;

	GLM_NODISCARD GLM_FUNC_DECL float toFloat32(hdata value);
	GLM_NODISCARD GLM_FUNC_DECL hdata toFloat16(float const& value);

}//namespace detail
}//namespace glm

#include "type_half.inl"
