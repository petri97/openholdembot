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
// Purpose: container-class for the process-management
//
//******************************************************************************

#include "LibDef.h"

class COpenHoldemStarter;
class CWatchdog;

class PROCESS_MANAGEMEMT__DLL_API CProcessManagement {
public:
  CProcessManagement();
  ~CProcessManagement();
public:
  COpenHoldemStarter* OpenHoldemStarter() {
    return _openholdem_starter;
  }
  CWatchdog* Watchdog() {
    return _watchdog;
  }
private:
  COpenHoldemStarter* _openholdem_starter;
  CWatchdog* _watchdog;
};