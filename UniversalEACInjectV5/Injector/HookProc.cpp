#include "framework.h"

LRESULT CALLBACK WindowHookProc(int Code, WPARAM wParam, LPARAM lParam)
{
    return CallNextHookEx(NULL, Code, wParam, lParam);
}
