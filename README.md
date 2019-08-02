# serialToExcel
Read serial data and saved to spreadsheets.
It was tested with an Arduino Nano sends data through serial port.

![serialToExcel](https://www.gsampallo.com/blog/wp-content/uploads/2019/07/serialToExcel-768x330.jpg)


## Instalation

You will need:

- Python
- xlwt: pip install xlwt
- pyserial: pip install pyserial

## How to use

From the device you need to know what port is and the speedrate. Also, the program check the records contains , to split into columns, if you need another character change in the code.

Check de example.py to know how its work. 

Also you can read the article in the blog: https://www.gsampallo.com/blog/2019/07/10/hojas-de-calculo-y-arduino/
