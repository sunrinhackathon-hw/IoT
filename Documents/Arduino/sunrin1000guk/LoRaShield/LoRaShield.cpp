/*-------------------------------------------------------------------------
Developed By HelloApps, (http://www.helloapps.co.kr)
Email: splduino@gmail.com
All rights reserved © 2017, HelloApps Co., Ltd.
2017.05.20 Updated
-------------------------------------------------------------------------*/

#include <Arduino.h>
#include <SoftwareSerial.h>
#include "LoRaShield.h"


void LoRaShield::Write(byte v)
{
	write(v);
}

void LoRaShield::Write(char v)
{
	write(v);
}

void LoRaShield::Write(int v)
{
	write(v);
}

void LoRaShield::Write(unsigned int v)
{
	write(v);
}

void LoRaShield::Write(long v)
{
	write(v);
}

void LoRaShield::Write(unsigned long v)
{
	write(v);
}

void LoRaShield::Write(float v)
{
	write(v);
}

void LoRaShield::Write(double v)
{
	write(v);
}


void LoRaShield::Print(byte v)
{
	print(v);
}

void LoRaShield::Print(char v)
{
	print(v);
}

void LoRaShield::Print(int v)
{
	print(v);
}

void LoRaShield::Print(unsigned int v)
{
	print(v);
}

void LoRaShield::Print(long v)
{
	print(v);
}

void LoRaShield::Print(unsigned long v)
{
	print(v);
}
void LoRaShield::Print(float v)
{
	print(v);
}
void LoRaShield::Print(double v)
{
	print(v);
}
void LoRaShield::Print(String v)
{
	print(v);
}


void LoRaShield::PrintLine(byte v)
{
	println();
}

void LoRaShield::PrintLine(char v)
{
	println();
}

void LoRaShield::PrintLine(int v)
{
	println();
}

void LoRaShield::PrintLine(unsigned int v)
{
	println();
}

void LoRaShield::PrintLine(long v)
{
	println();
}

void LoRaShield::PrintLine(unsigned long v)
{
	println();
}

void LoRaShield::PrintLine(float v)
{
	println();
}

void LoRaShield::PrintLine(double v)
{
	println();
}


void LoRaShield::PrintLine(String v)
{
	println();
}


int LoRaShield::Read()
{
	return read();
}



void LoRaShield::GetDevEUI()
{
	getDevEUI();
}

void LoRaShield::getDevEUI()
{
	print("AT+DEUI\r");
}



void LoRaShield::Reset()
{
	reset();
}

void LoRaShield::reset()
{
	print("AT+RST\r");
}


void LoRaShield::GetAppKey()
{
	getAppKey();
}

void LoRaShield::getAppKey()
{
	print("AT+AK\r");
}



void LoRaShield::SetAppKey(String key)
{
	setAppKey(key);
}

void LoRaShield::setAppKey(String key)
{
	print("AT+AK " + key + "\r");
}



void LoRaShield::GetAppEUI()
{
	getAppEUI();
}

void LoRaShield::getAppEUI()
{
	print("AT+AEUI\r");
}


void LoRaShield::SetAppEUI(String eui)
{
	setAppEUI(eui);
}

void LoRaShield::setAppEUI(String eui)
{
	print("AT+AEUI " + eui + "\r");
}


void  LoRaShield::SaveConfig()
{
	saveConfig();
}

void  LoRaShield::saveConfig()
{
	print("AT+SCFG\r");
}


void  LoRaShield::GetClass()
{
	getClass();
}

void  LoRaShield::getClass()
{
	print("AT+CLS\r");
}


void  LoRaShield::SetClass(String c)
{
	setClass(c);
}

void  LoRaShield::setClass(String c)
{
	print("AT+CLS " + c + "\r");
}


void  LoRaShield::GetFWI()
{
	getFWI();
}

void  LoRaShield::getFWI()
{
	print("AT+FWI\r");
}


void  LoRaShield::EnableLog()
{
	enableLog();
}

void  LoRaShield::enableLog()
{
	print("AT+LOG 1\r");
}


void  LoRaShield::DisableLog()
{
	disableLog();
}

void  LoRaShield::disableLog()
{
	print("AT+LOG 0\r");
}


void  LoRaShield::SetLCHK()
{
	setLCHK();
}

void  LoRaShield::setLCHK()
{
	print("AT+LCHK\r");
}


void  LoRaShield::SetDEVT()
{
	setDEVT();
}

void  LoRaShield::setDEVT()
{
	print("AT+DEVT\r");
}



void LoRaShield::send()
{
	sendMessage();
}

void LoRaShield::Send()
{
	sendMessage();
}


void LoRaShield::SendMessage()
{
	sendMessage();
}


void LoRaShield::sendMessage()
{
	if (_printData.length() > 0)
	{
		sendMessage(_printData);
	}

	_printData = "";
}


void LoRaShield::SendTTV()
{
	sendTTV();
}

void LoRaShield::sendTTV()
{
	if (_printData.length() > 0)
	{
		sendMessage(_printData);
	}

	_printData = "";
}


void LoRaShield::SendMessage(String rawData)
{
	sendMessage(rawData);
}

void LoRaShield::sendMessage(String rawData)
{
	if (rawData.length() > 0 && (rawData.length() % 2) == 0)
	{
		print("AT+SEND 02" + rawData + "\r");
	}

	_printData = "";
}


void LoRaShield::SendMessage(String rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(String rawData, int hx)
{
	sendMessage(getHexString(rawData));	

	_printData = "";
}

void LoRaShield::SendMessage(byte rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(byte rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}

void LoRaShield::SendMessage(int rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(int rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::SendMessage(unsigned int rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(unsigned int rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::SendMessage(long rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(long rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::SendMessage(unsigned long rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(unsigned long rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::SendMessage(float rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(float rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::SendMessage(double rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(double rawData, int hx)
{
	String s = String(rawData);
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::SendMessage(char rawData, int hx)
{
	sendMessage(rawData, hx);
}

void LoRaShield::sendMessage(char rawData, int hx)
{
	String s = "";
	s = s + rawData;
	sendMessage(getHexString(s));

	_printData = "";
}


void LoRaShield::PrintTTVHeader(String headerStr)
{
	printTTVHeader(headerStr);
}

void LoRaShield::printTTVHeader(String headerStr)
{
	_printData = headerStr;
}


void LoRaShield::PrintTTV(String sensorType, byte v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, byte v)
{
	_printData += sensorType + getTTVString(v);
}


void LoRaShield::PrintTTV(String sensorType, char v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, char v)
{
	_printData += sensorType + getTTVString(v);
}


//Arduio can't support short type
//void LoRaShield::printTTV(String sensorType, short v)
//{
//	_printData += sensorType + getTTVString(v);
//}

//Arduio can't support short type
//void LoRaShield::printTTV(String sensorType, unsigned short v)
//{
//	_printData += sensorType + getTTVString(v);
//}


void LoRaShield::PrintTTV(String sensorType, int v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, int v)
{
	_printData += sensorType + getTTVString(v);
}


void LoRaShield::PrintTTV(String sensorType, unsigned int v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, unsigned int v)
{
	_printData += sensorType + getTTVString(v);
}


void LoRaShield::PrintTTV(String sensorType, long v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, long v)
{
	_printData += sensorType + getTTVString(v);
}

void LoRaShield::PrintTTV(String sensorType, unsigned long v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, unsigned long v)
{
	_printData += sensorType + getTTVString(v);
}


void LoRaShield::PrintTTV(String sensorType, float v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, float v)
{
	_printData += sensorType + getTTVString(v);
}


void LoRaShield::PrintTTV(String sensorType, double v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, double v)
{
	_printData += sensorType + getTTVString((float)v);
}


void LoRaShield::PrintTTV(String sensorType, String v)
{
	printTTV(sensorType, v);
}

void LoRaShield::printTTV(String sensorType, String v)
{
	_printData += sensorType + getTTVString(v);
}



String LoRaShield::GetMessage()
{
	return getMessage();
}

String LoRaShield::getMessage()
{
	String s = _receivedData;
	_receivedData = "";
	return s;
}


String LoRaShield::GetMessage(int hx)
{
	return getMessage(hx);
}

String LoRaShield::getMessage(int hx)
{
	String s = _receivedData;
	_receivedData = "";

	if (s.length() > 0 && (s.length() % 2) == 0)
	{
		String tmpStr = "";

		for (int i = 0; i < s.length(); i=i+2)
		{
			String bStr = s.substring(i, i + 2);
			tmpStr = tmpStr + (char)(HexToByte(bStr));
		}

		return tmpStr;
	}
	else
		return "";
}


String LoRaShield::ReadLine()
{
	return readLine();
}

String LoRaShield::readLine()
{
	if (available())
	{
		String s = readStringUntil((char)0x0d);

		if (s.length() > 0)
		{
			s = trimLineFeed(s);

			if (s == "SKT_DEV_RESET")
			{
				_resetReady = true;
			}
			else if (s == "OnRadioTxDone")
			{
				if (_resetReady == true)
				{
					_resetReady = false;
					reset();
				}
			}
			else if (s == "SKT_EXT_DEVMGMT")
			{
				String recvData = readStringUntil((char)0x0d);
				s += "\r" + recvData;

				recvData = trimLineFeed(recvData);				
				if (recvData.length() > 0)
					_receivedData = recvData;
			}

			return s;
		}
		else
			return "";
	}
	else
		return "";
}



//Convert received Hex string to nomal data string
String LoRaShield::HexToString(String s)
{
	return hexToString(s);
}

String LoRaShield::hexToString(String s)
{
	if (s.length() > 0 && (s.length() % 2) == 0)
	{
		String tmpStr = "";

		for (int i = 0; i < s.length(); i=i+2)
		{
			String bStr = s.substring(i, i + 2);
			tmpStr = tmpStr + (char)(HexToByte(bStr));
		}

		return tmpStr;
	}
	else
		return "";
}


String LoRaShield::TrimLineFeed(String s)
{
	return trimLineFeed(s);
}

String LoRaShield::trimLineFeed(String s)
{
	if (s.length() > 0 && s.charAt(0) == (char)0x0a)
		return s.substring(1, s.length());
	else
		return s;
}


String LoRaShield::StringToHex(String s)
{
	return stringToHex(s);
}

String LoRaShield::stringToHex(String s)
{
	return getHexString(s);
}



String LoRaShield::GetHexString(byte v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(byte v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 0; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}


//Arduio can't support short type
/*
String LoRaShield::getHexString(short v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 1; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}
*/


//Arduio can't support short type
/*
String LoRaShield::getHexString(unsigned short v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 1; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}
*/


String LoRaShield::GetHexString(int v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(int v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 1; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}


String LoRaShield::GetHexString(unsigned int v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(unsigned int v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 1; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}


String LoRaShield::GetHexString(long v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(long v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 3; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}


String LoRaShield::GetHexString(unsigned long v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(unsigned long v)
{
    //byte -> uint8_t
    uint8_t * buff = (uint8_t *) &v;

    String hexStr = "";        
    for (int i = 3; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
       if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }

    return hexStr;
}


String LoRaShield::GetHexString(float v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(float v)
{    
    //byte -> uint8_t    
    uint8_t * buff = (uint8_t *) &v;
    String hexStr = "";        

    for (int i = 3; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
        if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }
    
    return hexStr;
}


String LoRaShield::GetHexString(double v)
{
	return getHexString(v);
}

String LoRaShield::getHexString(double v)
{    
    //byte -> uint8_t
	float f = (float)v;
    uint8_t * buff = (uint8_t *) &f;
    String hexStr = "";        

    for (int i = 3; i >= 0; i--)
    {
        String h = String(buff[i], HEX);
        if (h.length() < 2)
            hexStr += "0" + h;
        else
            hexStr += h;
    }
    
    return hexStr;
}


String LoRaShield::GetHexString(String srcStr)
{
	return getHexString(srcStr);
}

String LoRaShield::getHexString(String srcStr)
{
    return getHexString(srcStr, srcStr.length());
}


String LoRaShield::GetHexString(String srcStr, int fill_size)
{
	return getHexString(srcStr, fill_size);
}

String LoRaShield::getHexString(String srcStr, int fill_size)
{
    char buff[srcStr.length() + 1];
    srcStr.toCharArray(buff, srcStr.length() + 1);  

    int size = srcStr.length();
  
    if (size == 0)
        return "";
    else
    {
        String hexStr = "";        
        for (int i = 0; i < size; i++)
        {
            String h = String(buff[i], HEX);
            if (h.length() < 2)
                hexStr += "0" + h;
            else
                hexStr += h;
        }

        while (hexStr.length() < fill_size)
            hexStr += "0";
          
        return hexStr;
    }
}


String LoRaShield::GetTTVString(byte v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(byte v)
{
	return "03" + getHexString(v);
}


String LoRaShield::GetTTVString(char v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(char v)
{
	String s = "";
	s = s + v;
	return "03" + getHexString(s);
}

//Arduio can't support short type
//String LoRaShield::getTTVString(short v)
//{
//	return "04" + getHexString(v);
//}


//Arduio can't support short type
//String LoRaShield::getTTVString(unsigned short v)
//{
//	return "05" + getHexString(v);
//}


String LoRaShield::GetTTVString(int v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(int v)
{
	//return "06" + getHexString(v);

	//Arduio can't support short type
	return "04" + getHexString(v);
}


String LoRaShield::GetTTVString(unsigned int v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(unsigned int v)
{
	//return "07" + getHexString(v);

	//Arduio can't support short type
	return "05" + getHexString(v);
}


String LoRaShield::GetTTVString(long v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(long v)
{
	return "08" + getHexString(v);
}


String LoRaShield::GetTTVString(unsigned long v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(unsigned long v)
{
	return "09" + getHexString(v);
}


String LoRaShield::GetTTVString(float v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(float v)
{
	return "0a" + getHexString(v);
}


String LoRaShield::GetTTVString(double v)
{
	return getTTVString(v);
}

String LoRaShield::getTTVString(double v)
{
	return "0b" + getHexString((float)v);
}


String LoRaShield::GetTTVString(String srcStr)
{
	return getTTVString(srcStr);
}

String LoRaShield::getTTVString(String srcStr)
{
    int str_len = srcStr.length();

    if (str_len == 0)
        return "0000";    
    else if (str_len == 1)
    {
        return "03" + getHexString(srcStr);
    }
    else if (str_len == 2)
    {
        return "10" + getHexString(srcStr);
    }
    else if (str_len == 3)
    {
        return "11" + getHexString(srcStr);
    }
    else if (str_len == 4)
    {
        return "12" + getHexString(srcStr);
    }
    else if (str_len >= 5 && str_len <= 8)
    {
        return "13" + getHexString(srcStr, 8);
    }
    else if (str_len >= 9 && str_len <= 16)
    {
        return "14" + getHexString(srcStr, 16);
    }
    else if (str_len >= 17 && str_len <= 32)
    {
        return "15" + getHexString(srcStr, 32);
    }
    else if (str_len >= 33 && str_len <= 64)
    {
        return "16" + getHexString(srcStr, 64);
    }
    else if (str_len >= 65 && str_len <= 128)
    {
        return "17" + getHexString(srcStr, 128);
    }
    else
    {
        String new_str = srcStr.substring(0, 128);
        return "17" + getHexString(srcStr, 128);
    }
}


byte LoRaShield::HexToByte(String hStr)
{
	int res = 0;

	String hexStr = hStr;
	hexStr.toLowerCase();

	for (int i = 0; i <= 1; i++)
	{
		int num = 0;
		int hexInd = 1 - i;

		char c = hexStr.charAt(hexInd);

		if (c == '0')
				num = 0;
		else if (c == '1')
				num = 1;
		else if (c == '2')
				num = 2;
		else if (c == '3')
				num = 3;
		else if (c == '4')
				num = 4;
		else if (c == '5')
				num = 5;
		else if (c == '6')
				num = 6;
		else if (c == '7')
				num = 7;
		else if (c == '8')
				num = 8;
		else if (c == '9')
				num = 9;
		else if (c == 'a')
				num = 10;
		else if (c == 'b')
				num = 11;
		else if (c == 'c')
				num = 12;
		else if (c == 'd')
				num = 13;
		else if (c == 'e')
				num = 14;
		else if (c == 'f')
				num = 15;

		if (i == 0)
			res = res + num;
		else
			res = res + (num * 16);

	}

	return (byte)res;
}



