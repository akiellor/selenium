﻿/*
Copyright 2010 WebDriver committers
Copyright 2010 Google Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

using System;
using OpenQA.Selenium;
using OpenQA.Selenium.Remote;

namespace OpenQA.Selenium.Android
{
    /// <summary>
    /// A driver for running tests on an Android device or emulator.
    /// </summary>
    public class AndroidDriver : RemoteWebDriver, ITakesScreenshot
    {
        protected const string DefaultAndroidDriverUrl = "http://localhost:8080/hub";

        public AndroidDriver()
            : this(new Uri(DefaultAndroidDriverUrl))
        {
        }

        public AndroidDriver(string remoteAddress)
            : this(new Uri(remoteAddress))
        {
        }

        public AndroidDriver(Uri remoteAddress)
            : base(remoteAddress, DesiredCapabilities.Android())
        {
        }

        public Screenshot GetScreenshot()
        {
            Response screenshotResponse = Execute(DriverCommand.Screenshot, null);
            string base64 = screenshotResponse.Value.ToString();
            return new Screenshot(base64);
        }
    }

    //TODO(danielwh): Add rotation/orientation stuff
}