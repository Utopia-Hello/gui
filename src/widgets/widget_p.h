#ifndef __WIDGET_P_H__
#define __WIDGET_P_H__

#include "../global/global.h"
#include "../tools/rect.h"

typedef struct _tagWidget _Widget;

struct _tagWidget
{
    Rect            rect;
    Handle          widget_id;
    //uint32_t            bg_color; // background color
    _Widget*        parent;
    _Widget*        first_child;
    _Widget*        prev_sibling;
    _Widget*        next_sibling;
};


Handle _WidgetCreate_platform(void);

void _WidgetShow_platform(Handle wid);

void _WidgetSetPixel_platform(Handle wid, Handle painter, uint32_t x, uint32_t y, uint32_t color);



void _WidgetOnPaint(Handle wid, Handle painter);


#endif
