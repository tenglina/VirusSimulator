/**
 * @file CityApp.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include "CityApp.h"
#include "MainFrame.h"

/**
 * Initialize the application.
 * @return
 */
bool CityApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    // Add image type handlers
    wxInitAllImageHandlers();

    auto frame = new MainFrame();
    frame->Initialize();

    frame->SetFocus();
    frame->Raise();
    frame->Show(true);

    return true;
}
