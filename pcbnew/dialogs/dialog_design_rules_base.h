///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 19 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_DESIGN_RULES_BASE_H__
#define __DIALOG_DESIGN_RULES_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class NETS_LIST_CTRL;

#include "dialog_shim.h"
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/font.h>
#include <wx/grid.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/combobox.h>
#include <wx/statline.h>
#include <wx/listctrl.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/checkbox.h>
#include <wx/notebook.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_DESIGN_RULES_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_DESIGN_RULES_BASE : public DIALOG_SHIM
{
	private:
	
	protected:
		enum
		{
			wxID_ADD_NETCLASS = 1000,
			wxID_REMOVE_NETCLASS,
			ID_LEFT_TO_RIGHT_COPY,
			ID_RIGHT_TO_LEFT_COPY
		};
		
		wxNotebook* m_DRnotebook;
		wxPanel* m_panelNetClassesEditor;
		wxGrid* m_grid;
		wxButton* m_addButton;
		wxButton* m_removeButton;
		wxButton* m_moveUpButton;
		wxComboBox* m_leftClassChoice;
		wxStaticLine* m_staticline21;
		wxButton* m_buttonLeftSelAll;
		NETS_LIST_CTRL* m_leftListCtrl;
		wxButton* m_buttonRightToLeft;
		wxButton* m_buttonLeftToRight;
		wxComboBox* m_rightClassChoice;
		wxStaticLine* m_staticline3;
		wxButton* m_buttonRightSelAll;
		NETS_LIST_CTRL* m_rightListCtrl;
		wxPanel* m_panelGolbalDesignRules;
		wxStaticText* m_TrackMinWidthTitle;
		wxTextCtrl* m_SetTrackMinWidthCtrl;
		wxStaticText* m_TrackMinWidthUnits;
		wxStaticText* m_ViaMinTitle;
		wxTextCtrl* m_SetViasMinSizeCtrl;
		wxStaticText* m_ViaMinUnits;
		wxStaticText* m_ViaMinDrillTitle;
		wxTextCtrl* m_SetViasMinDrillCtrl;
		wxStaticText* m_ViaMinDrillUnits;
		wxCheckBox* m_OptAllowBlindBuriedVias;
		wxCheckBox* m_OptAllowMicroVias;
		wxStaticText* m_MicroViaMinSizeTitle;
		wxTextCtrl* m_SetMicroViasMinSizeCtrl;
		wxStaticText* m_MicroViaMinSizeUnits;
		wxStaticText* m_MicroViaMinDrillTitle;
		wxTextCtrl* m_SetMicroViasMinDrillCtrl;
		wxStaticText* m_MicroViaMinDrillUnits;
		wxStaticText* m_staticTextInfo;
		wxStaticText* m_staticText7;
		wxGrid* m_gridViaSizeList;
		wxStaticText* m_staticText8;
		wxGrid* m_gridTrackWidthList;
		wxStaticLine* m_staticline2;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnNotebookPageChanged( wxNotebookEvent& event ) { event.Skip(); }
		virtual void OnNetClassesNameLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void OnNetClassesNameRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void OnAddNetclassClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveNetclassClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMoveUpSelectedNetClass( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLeftCBSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLeftSelectAllButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRightToLeftCopyButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLeftToRightCopyButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRightCBSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRightSelectAllButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAllowMicroVias( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_DESIGN_RULES_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Design Rules Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~DIALOG_DESIGN_RULES_BASE();
	
};

#endif //__DIALOG_DESIGN_RULES_BASE_H__
