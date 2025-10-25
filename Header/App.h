#ifndef APP_H
#define APP_H

#include <wx/wx.h>

class MyApp : public wxApp{
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title);
};

// wxDECLARE_APP(App);

#endif
