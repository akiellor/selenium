#ifndef WEBDRIVER_IE_ELEMENTWRAPPER_H_
#define WEBDRIVER_IE_ELEMENTWRAPPER_H_

#include <string>
#include "json.h"

namespace webdriver {

// Forward declaration of classes to avoid
// circular include files.
class BrowserWrapper;

class ElementWrapper {
public:
	ElementWrapper(IHTMLElement *element, BrowserWrapper *browser);
	virtual ~ElementWrapper(void);
	Json::Value ConvertToJson(void);
	int GetLocationOnceScrolledIntoView(long *x, long *y, long *width, long *height);
	int GetAttributeValue(std::wstring attribute_name, VARIANT *attribute_value);
	int IsDisplayed(bool *result);
	bool IsEnabled(void);
	bool IsSelected(void);
	bool IsCheckBox(void);
	bool IsRadioButton(void);
	std::wstring GetText(void);
	int Click(void);
	int Hover(void);
	int DragBy(int offset_x, int offset_y, int drag_speed);
	void FireEvent(IHTMLDOMNode* fire_event_on, LPCWSTR event_name);

	std::wstring element_id(void) { return this->element_id_; }
	IHTMLElement *element(void) { return this->element_; }

private:
	int GetLocation(HWND containing_window_handle, long* left, long* right, long* top, long* bottom);
	bool StyleIndicatesVisible(IHTMLElement* element);
	int StyleIndicatesDisplayed(IHTMLElement *element, bool* displayed);
	void ExtractElementText(std::wstring& toReturn, IHTMLDOMNode* node, bool isPreformatted);
	void CollapsingAppend(std::wstring& s, const std::wstring& s2);
	std::wstring CollapseWhitespace(CComBSTR& comtext);
	bool IsBlockLevel(IHTMLDOMNode *node);
	int IsNodeDisplayed(IHTMLDOMNode *node, bool* result);
	int IsElementDisplayed(IHTMLElement *element, bool* result);

	std::wstring element_id_;
	IHTMLElement *element_;
	BrowserWrapper *browser_;
};

} // namespace webdriver

#endif // WEBDRIVER_IE_ELEMENTWRAPPER_H_