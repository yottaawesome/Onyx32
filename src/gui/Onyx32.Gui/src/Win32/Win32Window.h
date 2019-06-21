#pragma once
#include "../h/Onyx32.Gui.internal.h"
#include "../Window/Window.h"
#include "../Button/Button.h"
#include "../TextInput/TextInput.h"

namespace Onyx32::Gui
{
	class Win32Window
	{
		public:
			static HWND CreateParentWindow(const Win32ParentWindowCreationArgs& args);
			static HWND CreateChildWindow(const Win32ChildWindowCreationArgs& args);
			static void Resize(Button* button, const UINT width, const UINT height);
	};
}