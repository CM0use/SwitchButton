<h1 align="center">
  SwitchButton<br>
  <img src="https://img.shields.io/badge/Windows-0078d7?style=for-the-badge&logo=windows&logoColor=ffffff" alt="Windows">
  <img src="https://img.shields.io/badge/mac%20OS-313131?style=for-the-badge&logo=macos&logoColor=d7d7d7" alt="macOS">
  <img src="https://img.shields.io/badge/Linux-ffffff?style=for-the-badge&logo=linux&logoColor=000000" alt="Linux">
  <br>
  <a href="https://github.com/CM0use/SwitchButton/blob/main/LICENSE">
    <img src="https://img.shields.io/badge/License-GPLv3-4a6484?style=for-the-badge" alt="License GPLv3">
  </a>
</h1>

<p align="center">
  Implementation of Material Design 2 for the Switch component.<br>
  <a href="#features">Features</a> •
  <a href="#description">Description</a> •
  <a href="#use">Use</a> •
  <a href="#contributing">Contributing</a> •
  <a href="#references">References</a> •
  <a href="#license">License</a>
</p>

<div align="center">

![light](https://github.com/CM0use/SwitchButton/assets/102839710/9e9fbf61-2655-49ff-8eb9-27b5136700eb)
![dark](https://github.com/CM0use/SwitchButton/assets/102839710/7d848e43-4e2d-4760-a628-a991eb4987ca)
</div>

## Features
* The color palette is based on Chrome aesthetics.
* You can customize the track and thumb colors.
* Easy to use and understand.

## Description
Based on <a href="https://m2.material.io/components/switches">Material Design 2</a> used by Google and other applications.<br>

This repository was created to improve the functionality of Switch/Toggle that do not have the expected functionality or are too complex. These Switch/Toggle often do not allow to place a text next to it that is activated when clicking on it or in the surrounding area.<br>

The color palette can be changed according to the theme you are using with the setThemeDark and setThemeLight methods.<br>
You can also customize the color palette with the setTrackColor and setThumbColor methods to change the track and thumb colors.<br>

## Use
```cpp
#include "switchbutton.h"

int main()
{
  // ...

  bool themeDarkIsOn{ true };

  // Add the text "myText" next to the SwitchButton and enable Chrome's dark theme
  SwitchButton *_switch{ new SwitchButton("myText", themeDarkIsOn) };

  // Add the text "myText" next to the SwitchButton and enable Chrome's light theme
  SwitchButton *_switch2{ new SwitchButton("myText", !themeDarkIsOn) };

  // Change the track and thumb color palette
  _switch.setTrackColor(QColor{ "#0f0" }, QColor{ "#00f" });
  _switch.setThumbColor(QColor{ "#f00" }, QColor{ "#ff0" });

  // Change the color palette of the SwitchButton
  _switch.setThemeLight();
  _switch.setThemeDark();

  // ...
}
```

## Contributing
**Any contribution you make will be greatly appreciated.**<br>
If you have any ideas/suggestions to improve this repository, make a fork and create a pull request.<br>
You can also <a href="https://github.com/CM0use/SwitchButton/issues">open the issue tracker</a> to report any improvements or bugs.<br>

## References
<a href="https://stackoverflow.com/questions/14780517/toggle-switch-in-qt">Toggle Switch in Qt</a><br>
<a href="https://github.com/Wanderson-Magalhaes/PyOneDark_Qt_Widgets_Modern_GUI/blob/master/gui/widgets/py_toggle/py_toggle.py">PyToggle</a><br>
<a href="https://github.com/laserpants/qt-material-widgets">Qt Material Design Desktop Widgets</a>

## License
**Distributed under the GNU General Public License v3.0**<br>
See accompanying file <a href="https://github.com/CM0use/SwitchButton/blob/main/LICENSE">LICENSE</a><br>
or copy at <a href="https://www.gnu.org/licenses/gpl-3.0.txt">GNU General Public License</a>
