//  Copyright (c) 2016 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#ifndef TOY_CHECKBOX_H
#define TOY_CHECKBOX_H

/* toy */
#include <toyui/Types.h>
#include <toyui/Button/Button.h>

namespace toy
{
	class _refl_ TOY_UI_EXPORT Checkbox : public Toggle
	{
	public:
		Checkbox(const Params& params, Callback callback, bool on);
	};
}

#endif
