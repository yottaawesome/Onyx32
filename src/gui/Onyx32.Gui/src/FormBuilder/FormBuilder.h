#pragma once
#include "../h/Onyx32.Gui.internal.h"

namespace Onyx32::Gui
{
	class FormBuilder : public IFormBuilder
	{
	public:
		FormBuilder();
		virtual IWindow* CreateDefaultWindow(std::wstring_view title, UINT width = 0, UINT height = 0) override;
		virtual IButton* AddButton(IWindow& window, std::wstring_view text, UINT width, UINT height, UINT xPos, UINT yPos) override;
		virtual ITextInput* AddTextInput(IWindow& window, std::wstring_view text, UINT width, UINT height, UINT xPos, UINT yPos) override;
		virtual IDateTime* AddDateTime(IWindow& window, UINT width, UINT height, UINT xPos, UINT yPos) override;

		virtual ~FormBuilder();
	};
}
