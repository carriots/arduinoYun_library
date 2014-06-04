#include <Process.h>
#include <SendCarriotsYun.h>	// You must include the library here in order to use it in the sketch

const String APIKEY="YOUR APIKEY HERE"; 		// Replace with your Carriots apikey
const String DEVICE="YOUR DEVICE's ID_DEVELOPER HERE"; 		// Replace with the id_developer of your device

const int numElements=3;		// Specify the number of rows in the array, in this case 3

SendCarriotsYun sender;			// Instatiate an instance of the SendCarriotsYun library

void setup() {
  // start serial port:
  Bridge.begin();
  Serial.begin(9600);

}

void loop() {
  String array[numElements][2] = {{"Name", "James"}, {"Age", "28"}, {"Gender", "Male"}};		// Define the values of the array to be sent
  Serial.println(sender.send(array, numElements, APIKEY, DEVICE));								  // Using the instance of the library, call the method send
  delay(10000);																														// Send this stream every 10 seconds
}
