//
//  GUI_Label.hpp
//  GUI_TextView
//
//  Created by Panutat Tejasen on 13/1/2562 BE.
//  Copyright © 2562 Jimmy Software Co., Ltd. All rights reserved.
//

#ifndef GUI_Label_hpp
#define GUI_Label_hpp

#include <stdio.h>
#include "GUI_View.h"
#include "GUI_IconView.h"
#include "GUI_TextView.h"

class GUI_Label : public GUI_View {
protected:
    GUI_TextView *textView;
    GUI_IconView *iconView;
public:
    static GUI_Label *create( GUI_View *parent, const char *title, uint16_t unicode=0, int x=0, int y=0, int width=0, int height=0,
                                std::function<bool(SDL_Event* ev)>userEventHandler = NULL );
    GUI_Label(GUI_View *parent, const char *title, uint16_t unicode=0, int x=0, int y=0, int width=0, int height=0,
                 std::function<bool(SDL_Event* ev)>userEventHandler = NULL);
    virtual ~GUI_Label();
};

#endif /* GUI_Label_hpp */
