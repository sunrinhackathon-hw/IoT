/*-------------------------------------------------------------------------
Developed By HelloApps, (http://www.helloapps.co.kr)
Email: splduino@gmail.com
All rights reserved © 2017, HelloApps Co., Ltd.
2017.05.20 Updated
-------------------------------------------------------------------------*/

#include <Arduino.h>
#include <SoftwareSerial.h>

class LoRaShield : public SoftwareSerial
{
   public:
      LoRaShield (int rx, int tx) : SoftwareSerial (rx, tx) { };

	  void Write(byte v);
	  void Write(char v);
	  void Write(int v);
	  void Write(unsigned int v);
	  void Write(long v);
	  void Write(unsigned long v);
	  void Write(float v);
	  void Write(double v);

	  void Print(byte v);
	  void Print(char v);
	  void Print(int v);
	  void Print(unsigned int v);
	  void Print(long v);
	  void Print(unsigned long v);
	  void Print(float v);
	  void Print(double v);
	  void Print(String v);

	  void PrintLine(byte v);
	  void PrintLine(char v);
	  void PrintLine(int v);
	  void PrintLine(unsigned int v);
	  void PrintLine(long v);
	  void PrintLine(unsigned long v);
	  void PrintLine(float v);
	  void PrintLine(double v);
	  void PrintLine(String v);

	  int Read();

	  void GetDevEUI();
	  void getDevEUI();
	  
	  void Reset();
	  void reset();

	  void GetAppKey();
	  void getAppKey();

	  void SetAppKey(String key);
	  void setAppKey(String key);

	  void GetAppEUI();
	  void getAppEUI();

	  void SetAppEUI(String eui);
	  void setAppEUI(String eui);

	  void SaveConfig();
	  void saveConfig();

	  void GetClass();
	  void getClass();

	  void SetClass(String c);
	  void setClass(String c);

	  void GetFWI();
	  void getFWI();

	  void EnableLog();
	  void enableLog();

	  void DisableLog();
	  void disableLog();

	  void SetLCHK();
	  void setLCHK();

	  void SetDEVT();
	  void setDEVT();


	  void Send();
	  void send();

	  void SendMessage();
	  void sendMessage();

	  void SendTTV();
	  void sendTTV();

	  void SendMessage(String rawData);
	  void sendMessage(String rawData);

	  void SendMessage(String rawData, int hx);
	  void sendMessage(String rawData, int hx);

	  void SendMessage(byte rawData, int hx);
	  void sendMessage(byte rawData, int hx);

	  void SendMessage(int rawData, int hx);
	  void sendMessage(int rawData, int hx);

	  void SendMessage(unsigned int rawData, int hx);
	  void sendMessage(unsigned int rawData, int hx);

	  void SendMessage(long rawData, int hx);
	  void sendMessage(long rawData, int hx);

	  void SendMessage(unsigned long rawData, int hx);
	  void sendMessage(unsigned long rawData, int hx);

	  void SendMessage(float rawData, int hx);
	  void sendMessage(float rawData, int hx);

	  void SendMessage(double rawData, int hx);
	  void sendMessage(double rawData, int hx);

	  void SendMessage(char rawData, int hx);
	  void sendMessage(char rawData, int hx);


	  void PrintTTVHeader(String headerStr);
	  void printTTVHeader(String headerStr);

	  void PrintTTV(String sensorType, byte v);
	  void printTTV(String sensorType, byte v);

	  void PrintTTV(String sensorType, char v);
	  void printTTV(String sensorType, char v);

	  //void printTTV(String sensorType, short v);
	  //void printTTV(String sensorType, unsigned short v);

	  void PrintTTV(String sensorType, int v);
	  void printTTV(String sensorType, int v);

	  void PrintTTV(String sensorType, unsigned int v);
	  void printTTV(String sensorType, unsigned int v);

	  void PrintTTV(String sensorType, long v);
	  void printTTV(String sensorType, long v);

	  void PrintTTV(String sensorType, unsigned long v);
	  void printTTV(String sensorType, unsigned long v);

	  void PrintTTV(String sensorType, float v);
	  void printTTV(String sensorType, float v);

	  void PrintTTV(String sensorType, double v);
	  void printTTV(String sensorType, double v);

	  void PrintTTV(String sensorType, String v);
	  void printTTV(String sensorType, String v);


	  String GetMessage();
	  String getMessage();

	  String GetMessage(int hx);
	  String getMessage(int hx);

	  String ReadLine();
	  String readLine();

	  String HexToString(String s);
	  String hexToString(String s);

	  String StringToHex(String s);
	  String stringToHex(String s);

	  String TrimLineFeed(String s);
	  String trimLineFeed(String s);

	  String GetHexString(byte v);
	  String getHexString(byte v);

	  //String getHexString(short v);
	  //String getHexString(unsigned short v);

      String GetHexString(int v);
	  String getHexString(int v);

      String GetHexString(unsigned int v);
	  String getHexString(unsigned int v);

	  String GetHexString(long v);
	  String getHexString(long v);

      String GetHexString(unsigned long v);
	  String getHexString(unsigned long v);

      String GetHexString(float v);
	  String getHexString(float v);

	  String GetHexString(double v);
	  String getHexString(double v);

      String GetHexString(String srcStr);
	  String getHexString(String srcStr);

      String GetHexString(String srcStr, int fill_size);
	  String getHexString(String srcStr, int fill_size);

	  String GetTTVString(byte v);
	  String getTTVString(byte v);

	  String GetTTVString(char v);
	  String getTTVString(char v);

	  String GetTTVString(int v);
	  String getTTVString(int v);

	  String GetTTVString(unsigned int v);
	  String getTTVString(unsigned int v);

	  String GetTTVString(long v);
	  String getTTVString(long v);
	  
	  String GetTTVString(unsigned long v);
	  String getTTVString(unsigned long v);

	  String GetTTVString(float v);
	  String getTTVString(float v);

	  String GetTTVString(double v);
	  String getTTVString(double v);

      String GetTTVString(String srcStr);
	  String getTTVString(String srcStr);

	  byte HexToByte(String hStr);

   private:      
      String _printData;
	  String _receivedData;
	  boolean _resetReady = false;
};
