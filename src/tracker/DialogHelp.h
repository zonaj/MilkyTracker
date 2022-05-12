/*
 *  tracker/DialogHelp.h
 *
 *  Copyright 2009 Peter Barth
 *
 *  This file is part of Milkytracker.
 *
 *  Milkytracker is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Milkytracker is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Milkytracker.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 *  DialogHelp.h
 *  MilkyTracker
 *
 *  Created by Peter Barth on 25.10.05.
 *
 */

#ifndef __DIALOGHELP_H__
#define __DIALOGHELP_H__

#include "DialogBase.h"

#define HELP_MAX_LINE 255

class DialogHelp : public PPDialogBase
{
private:
	class PPListBox* listBox;

public:
	DialogHelp(PPScreen* screen, 
				  DialogResponder* responder,
				  pp_int32 id,
				  const PPString& caption,
				  bool okCancel = false);
	
	PPListBox* getListBox() { return listBox; }

};

#endif
