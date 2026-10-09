#include <AzureIoTUtility.h>

#include <AzureIoTProtocol_MQTT.h>

#include <agenttypesystem.h>
#include <AzureIoTHub.h>
#include <codefirst.h>
#include <commanddecoder.h>
#include <datamarshaller.h>
#include <datapublisher.h>
#include <dataserializer.h>
#include <iotdevice.h>
#include <iothub.h>
#include <iothubtransporthttp.h>
#include <iothubtransportmqtt.h>
#include <iothub_client.h>
#include <iothub_client_core.h>
#include <iothub_client_core_common.h>
#include <iothub_client_core_ll.h>
#include <iothub_client_ll.h>
#include <iothub_client_options.h>
#include <iothub_client_version.h>
#include <iothub_device_client.h>
#include <iothub_device_client_ll.h>
#include <iothub_message.h>
#include <iothub_module_client.h>
#include <iothub_module_client_ll.h>
#include <iothub_transport_ll.h>
#include <jsondecoder.h>
#include <jsonencoder.h>
#include <methodreturn.h>
#include <multitree.h>
#include <parson.h>
#include <schema.h>
#include <schemalib.h>
#include <schemaserializer.h>
#include <serializer.h>
#include <serializer_devicetwin.h>

char c;

void setup() {
  Serial.begin(9600);
  Serial.println("Hola desde Arudino");
}

void loop() {
  if(Serial.available()> 0)
  {
    c=Serial.read();
    if (c == 'R'){
      Serial.println("Recibi una R"); 
    }
    if (c == 'G'){
      Serial.println("Recibi una G"); 
    }
    if (c == 'B'){
      Serial.println("Recibi una B"); 
    }
  }
}
