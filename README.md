# Welcome to mxchip-serial-capture 👋
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](/LICENSE)
[![Twitter: kartben](https://img.shields.io/twitter/follow/kartben.svg?style=social)](https://twitter.com/kartben)

> A very simple MXChip AZ3166 application that dumps sensor data (accelerometer & gyroscope) as [JSON lines](http://jsonlines.org/) on the Serial port.
>
> You can either build your own firmware from source, or simply download this [pre-built binary](https://raw.githubusercontent.com/kartben/mxchip-serial-capture/master/mxchip-serial-capture.bin), and directly install it on your MXChip. To do so, connect the device to your development machine using a USB cable, and copy the `mxchip-serial-capture.bin` file onto the XXX that should have automatically appeared (ex. `D:\` on Windows). When the copying is complete, the device reboots with the new firmware.
>
> Note: The accelerometer and gyroscope values are sampled and dumped to the UART as fast as possible, at a rate of around 150 Hz. It is probably possible to achieve higher rates by switching to a more efficient (binary) encoding of the values. [Pull requests](https://github.com/kartben/mxchip-serial-capture/pulls) are welcome!


## Author

👤 **Benjamin Cabé**

* Website: https://blog.benjamin-cabe.com
* Twitter: [@kartben](https://twitter.com/kartben)
* Github: [@kartben](https://github.com/kartben)
* LinkedIn: [@benjamincabe](https://linkedin.com/in/benjamincabe)

## 🤝 Contributing

Contributions, issues and feature requests are welcome!

Feel free to check [issues page](https://github.com/kartben/mxchip-serial-capture/issues).

## Show your support

Give a ⭐️ if this project helped you!


## 📝 License

Copyright &copy; 2020 [Benjamin Cabé](https://github.com/kartben).

This project is [MIT](/LICENSE) licensed.

***
_This README was generated with ❤️ by [readme-md-generator](https://github.com/kefranabg/readme-md-generator)_