// Copyright 2011 WebDriver committers
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WEBDRIVER_IE_SETASYNCSCRIPTTIMEOUTCOMMANDHANDLER_H_
#define WEBDRIVER_IE_SETASYNCSCRIPTTIMEOUTCOMMANDHANDLER_H_

#include "Session.h"

namespace webdriver {

class SetAsyncScriptTimeoutCommandHandler : public CommandHandler {
public:
	SetAsyncScriptTimeoutCommandHandler(void) {
	}

	virtual ~SetAsyncScriptTimeoutCommandHandler(void) {
	}

protected:
	void SetAsyncScriptTimeoutCommandHandler::ExecuteInternal(const IESessionWindow& session, const LocatorMap& locator_parameters, const ParametersMap& command_parameters, Response * response) {
		ParametersMap::const_iterator ms_parameter_iterator = command_parameters.find("ms");
		if (ms_parameter_iterator == command_parameters.end()) {
			response->SetErrorResponse(400, "Missing parameter: ms");
			return;
		} else {
			int timeout = ms_parameter_iterator->second.asInt();
			IESessionWindow& mutable_session = const_cast<IESessionWindow&>(session);
			mutable_session.set_async_script_timeout(timeout);
			response->SetResponse(SUCCESS, Json::Value::null);
		}
	}
};

} // namespace webdriver

#endif // WEBDRIVER_IE_SETASYNCSCRIPTIMEOUTCOMMANDHANDLER_H_
