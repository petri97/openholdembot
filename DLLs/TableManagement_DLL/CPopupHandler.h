#pragma once
//******************************************************************************
//
// This file is part of the OpenHoldem project
//    Source code:           https://github.com/OpenHoldem/openholdembot/
//    Forums:                http://www.maxinmontreal.com/forums/index.php
//    Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose: closing undesired popup-windows that might occlude the table
//
//******************************************************************************

///#include "CSpaceOptimizedGlobalObject.h"
#include <afxwin.h>

class CPopupHandler /*#: public CSpaceOptimizedGlobalObject */
{
public:
	CPopupHandler();
	~CPopupHandler();
public:
	// To be called by the auto-connector-thread
	// after failed tries to connect
	void HandleAllWindows();
	// To be called by callback-function EnumProcPotentialPopups
	void HandlePotentialPopup(HWND potential_popup, bool hard_kill);
public:
  // To be used by the auto-connector (temp!!!)
  bool WinIsOpenHoldem(HWND window);
private:
	// To be called by instance 0
	void MinimizeAllOnstartup();
private:
	void HandleAllWindows(bool hard_kill);
};