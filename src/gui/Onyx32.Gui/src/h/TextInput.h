#pragma once
#include "stdafx.h"
#include "../h/Onyx32.Gui.internal.h"
#include "Window.h"

namespace Onyx32::Gui
{
	class TextInput : public BaseControl<ITextInput>
	{
		public:
			TextInput(
				std::wstring_view text = L"",
				const UINT width = 100,
				const UINT height = 100,
				const unsigned int controlId = 0);
			virtual ~TextInput();

			virtual void Initialize(IWindow* window) override;
			virtual LRESULT Process(UINT message, WPARAM wParam, LPARAM lParam) override;
			virtual const wstring GetText() override;
			virtual void SetText(wstring_view str) override;
			virtual const std::wstring& GetName();
			virtual int GetStyles();

		protected:
			wstring _text;
			static const std::wstring Class;
			static const int Styles = WS_CHILD | WS_VISIBLE | WS_VSCROLL | ES_LEFT | ES_MULTILINE | ES_AUTOVSCROLL;
	};
}