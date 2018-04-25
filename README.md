
<h1 align="center">
  <br>
  <a href=""><img src="https://www.hcmus.edu.vn/images/2017/05/08/fit.jpg" alt="working-traffic-protection" width=""></a>
  <br>
  working-traffic-protection
  <br>
</h1>

<h4 align="center">A minimal desktop-console app built for one of <a href="http://www.fit.hcmus.edu.vn" target="_blank">HCMUS Projects</a>.</h4>

<p align="center">
  <a href="">
    
  <a href=""><img src="https://badges.gitter.im/amitmerchant1990/electron-markdownify.svg"></a>
  <a href="">
      <img src="https://img.shields.io/badge/SayThanks.io-%E2%98%BC-1EAEDB.svg">
  </a>
  <a href="">
    <img src="https://img.shields.io/badge/$-donate-ff69b4.svg?maxAge=2592000&amp;style=flat">
  </a>
</p>

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#how-to-use">How To Use</a> •
  <a href="#download">Download</a> •
  <a href="#credits">Credits</a> •
  <a href="#related">Related</a> •
  <a href="#license">License</a>
</p>



## Key Features

* Traffic Manager - Make changes, See changes
  - Instantly see what your traffics look like as you add them using Camera API
* GitHub Flavored Markdown  
* Supports multiple languages (available soon)
* Cleaning, easy to maintain
  - Write distraction free.
* Cross platform
  - Windows, Mac and Linux pre-built versions ready.

## How To Use

To clone and run this application, you'll need [Git](https://git-scm.com) and [Visual Studio (2017 required)](https://www.visualstudio.com/downloads/) (which comes with [v41 build tool](https://support.microsoft.com/vi-vn/help/2977003/the-latest-supported-visual-c-downloads)) installed on your computer. From your command line:

```bash
# Clone this repository
$ git clone https://github.com/hyperion0201/working-traffic-protection.git
```

### Go into the repository
```bash
$ cd working-traffic-protection
```

### Building
 On VS command-line:
```bash
$ devenv working-traffic-protection /Build
```

 On Linux/Unix command-line:
Building the makefile:
```bash
 output: main.o CardManagement.o
        g++ -std=c++0x -Wall main.o CardManagement.o ImageManagement.o Miscellaneous.o -o output

 main.o: main.cpp
        g++ -c main.cpp

 CardManagement.o: CardManagement.cpp
        g++ -c CardManagement.cpp
 ImageManagement.o: ImageManagement.cpp
        g++ -c ImageManagement.cpp
 clean:
        rm *.o output
```
Then run makefile
```bash
$ make
```
### Run the app
```bash
$ ./output
```

Note: If you're using Linux Bash for Windows, [see this guide](https://www.howtogeek.com/261575/how-to-run-graphical-linux-desktop-applications-from-windows-10s-bash-shell/) or use `node` from the command prompt.


## Download

You can [download]() latest installable version of WTP for Windows, macOS and Linux.

## Credits

This software uses code from several open source packages.

- [Open Source Computer Vision Library](https://opencv.org/)
- [Marked - a markdown parser](https://github.com/chjj/marked)
- [showdown](http://showdownjs.github.io/showdown/)
- [CodeMirror](http://codemirror.net/)
- Emojis are taken from [here](https://github.com/arvida/emoji-cheat-sheet.com)

## Related

[Library Manager 2](https://github.com/hyperion0201/LibraryManager2) - A minimum console application for managing library.

## Support

<a href="https://www.buymeacoffee.com/hyperion0201" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/purple_img.png" alt="Buy Me A Coffee" style="height: 41px !important;width: 174px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;" ></a>

## You may also like...

- [Hangul.js](https://github.com/hyperion0201/Hangul.js) - A small tool to convert between Latin character and Hangul.
- [libbmpread](https://github.com/hyperion0201/libbmpread) - A C/C++ simple library for processing Bitmap image type.
## License

MIT

---

> [hyperion0201](https://hyperion0201.github.io) &nbsp;&middot;&nbsp;
> GitHub [@hyperion0201](https://github.com/hyperion0201) &nbsp;&middot;&nbsp;
> Twitter [@hyperion0201](https://twitter.com/hyperion0201)
