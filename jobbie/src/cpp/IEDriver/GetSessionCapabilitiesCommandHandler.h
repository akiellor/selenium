#ifndef WEBDRIVER_IE_GETSESSIONCAPABILITIESCOMMANDHANDLER_H_
#define WEBDRIVER_IE_GETSESSIONCAPABILITIESCOMMANDHANDLER_H_

#include "BrowserManager.h"

namespace webdriver {

class GetSessionCapabilitiesCommandHandler : public WebDriverCommandHandler {
public:
	GetSessionCapabilitiesCommandHandler(void) {
	}

	virtual ~GetSessionCapabilitiesCommandHandler(void) {
	}

protected:
	void GetSessionCapabilitiesCommandHandler::ExecuteInternal(BrowserManager *manager, std::map<std::string, std::string> locator_parameters, std::map<std::string, Json::Value> command_parameters, WebDriverResponse * response) {
		Json::Value capabilities;
		capabilities["browserName"] = "internet explorer";
		capabilities["version"] = "0";
		capabilities["javascriptEnabled"] = true;
		capabilities["platform"] = "WINDOWS";
		capabilities["nativeEvents"] = true;
		response->SetResponse(SUCCESS, capabilities);
	}
};

} // namespace webdriver

#endif // WEBDRIVER_IE_GETSESSIONCAPABILITIESCOMMANDHANDLER_H_